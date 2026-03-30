class Solution {
public:
void reverse(vector<int>&a,int e,int f){
    int d=a.size();
    // int e=0;
    // int f=d-1;
    while(e<=f){
        swap(a[e],a[f]);
        e++;
        f--;
    }
    return;

}
    void rotate(vector<int>& nums, int k) {
      int n=nums.size();

     int i=0;
     int l=n-1;
     k=(k%n);
     if(k==0)return;
reverse(nums,0,n-1);
reverse(nums,0,k-1);
reverse(nums,k,n-1);
    }
};