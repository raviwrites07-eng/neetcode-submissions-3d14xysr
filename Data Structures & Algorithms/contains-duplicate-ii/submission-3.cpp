class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        int n=nums.size();
        int i=0;
        for(i=0;i<n;i++){
            // if(s.size()>k) s.erase(nums[i-k]);
            if(s.count(nums[i])){
                return true;
                
           }
           s.insert(nums[i]);
           if(s.size()>k) s.erase(nums[i-k]);
            

        }
        return false;
    }
};