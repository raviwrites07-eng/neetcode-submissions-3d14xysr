class Solution {
public:
    bool isPalindrome(string s) {
      //  string k=tolower(s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i=0;
        int l= s.size()-1;
        while(i<=l){
            while(i < l && !isalnum(s[i])) i++;
            while(i < l && !isalnum(s[l])) l--;
            if(s[i]!=s[l]) return false;
        if(s[i]==' ') {i++;
continue;
        }
        if(s[l]==' '){l--;
        continue;}
            i++;
            l--;

        }
        return true;
        
    }
};
