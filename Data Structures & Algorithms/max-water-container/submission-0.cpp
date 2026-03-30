class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxelement=0;
        int maxarea=0;
        int area=0;
        int n=heights.size();
        int left=0,right=n-1;
        while(left<right){
            area= min(heights[left],heights[right])*(right-left);
maxarea=max(maxarea,area);
    if(left<right && heights[left]>heights[right]){
        right--;

    }
    else {
    
    left++;}
}
        
return maxarea;
    }
};
