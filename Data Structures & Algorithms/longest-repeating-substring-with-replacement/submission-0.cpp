class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n=s.size();
        int maxlen=0;
        int front=0,back=0;
        int maxfreq=0;
       
        vector<int>freq (26,0);
       for(back=0;back<n;back++){
        freq[s[back]-'A']++;
        maxfreq= max(maxfreq,freq[s[back]-'A']);
        while((back-front+1)-maxfreq >k){
            freq[s[front]-'A']--;
front++;
        }
         maxlen=max(maxlen,back-front+1);

       }


return maxlen;
    }
};
