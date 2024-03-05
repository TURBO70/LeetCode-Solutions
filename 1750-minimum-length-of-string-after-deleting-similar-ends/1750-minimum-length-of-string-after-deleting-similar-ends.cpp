class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.size()-1;
        while(r>l){
            if(s[l]==s[r]){
                while(s[l+1]==s[l]&&r>l+1)l++;
                while(s[r]==s[r-1]&&r-1>l)r--;
                l++,r--;
            }else {
                break;
            }
        }
        return r-l+1;
    }
};