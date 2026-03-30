class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
       long long int sum;
        vector<vector<int>>ans;
        int i=0,j=i+1,p=j+1,q=n-1;
        for(i=0;i<=n-4;i++){
            if(i>0 &&nums[i]==nums[i-1])continue;
//p=j+1,q=n-1;
            for(j=i+1;j<=n-3;j++){
                p=j+1,q=n-1;
                 if(j>i+1 &&nums[j]==nums[j-1])continue;


while(p<q){
    sum=(long long)nums[i]+nums[j]+nums[p]+nums[q];
    if(sum>target){
        q--;
    }
    else if( sum<target){
        p++;
    }
    else{
        ans.push_back({ nums[i],nums[j],nums[p],nums[q]});
        p++;
        q--;
        while(p<q && nums[p]==nums[p-1]) p++;
         while(p<q && nums[q]==nums[q+1]) q--;

    }


}
            }
        }
        return ans;
    }
};