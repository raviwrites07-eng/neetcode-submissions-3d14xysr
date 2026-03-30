class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> ans;
      int n=nums.size();
      sort(nums.begin(),nums.end());
      for(int current=0;current<n-2;current++){
        int first=current+1;
        int second=n-1;
        if(current>0 && nums[current]==nums[current-1]){
                continue;
            }
        
        while(first<second){

            // if(nums[current]==nums[current-1]){
            //     continue;
            // }
        if(nums[first]+nums[second]==(- nums[current])){
            ans.push_back({nums[current],nums[first],nums[second]});
            first++;
            second--;
            while(first < second && nums[first] == nums[first - 1]) first++;
                    while(first < second && nums[second] == nums[second + 1]) second--;
        }
        else if(nums[first]+nums[second]>(- nums[current])) second--;
       // if(num)
        else { first++;}
        }


      }  
      return ans;
    }
};
