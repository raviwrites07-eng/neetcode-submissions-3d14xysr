class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int left=0,right=0;
        int maxans=0;
        int lefty[n]={0};
        int righty[n]={0};
        for(int i=0;i<n;i++){
             left= max(left,height[i]);
            lefty[i]=left;
        }
        for(int i=n-1;i>=0;i--){
             right= max(right,height[i]);
            righty[i]=right;
        }
        for(int j=0;j<n;j++){
             maxans= maxans+(min(lefty[j],righty[j])-height[j]);
        }
        return maxans;
    }
};
