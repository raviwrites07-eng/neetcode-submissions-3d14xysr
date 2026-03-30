class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int first=1,second=1;
        for(int second=1;second<n;second++){
            if(nums[second]!=nums[second-1]){
                nums[first]=nums[second];
                first++;
            }
          //  first++;
            //second++;
        }
        return first;
    }
};