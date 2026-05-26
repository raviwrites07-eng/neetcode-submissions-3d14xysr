class Solution {
public:
int findmax(int & first,int &last,vector<int>&nums){
  int max=INT_MIN;
    for(int i=first;i<=last;i++){
                if(max<=nums[i]){
                    max=nums[i];
                }

            }
            return max;
}
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        int first=0;
        int last=k-1;
        int max=INT_MIN;
       
            
          // ans.push_back(max);
           while(last<n){
          max=  findmax(first,last,nums);
            
                 ans.push_back(max);
            
            first++;
            last++;
           }
           return ans;
    }
};
