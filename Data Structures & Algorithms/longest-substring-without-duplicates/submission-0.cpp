class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> k;
        int n= s.size();
        int left=0,right=0;
       
        int ans=0,maxans=0;
        while(right<n){

             while(k.count(s[right])){
                    k.erase(s[left]);
                    left++;
                }
           

k.insert(s[right]);
ans=right-left+1;
maxans=max(maxans,ans);
            
           
                
            
            right++;
        }
        return maxans;
    }
};
