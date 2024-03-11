class Solution {
public:
    string customSortString(string ord, string s) {
        map<char,int>m1,m2;
        string ans;
        for(int i=0;i<s.size();i++){
            m2[s[i]]++;
        }
        for(int i=0;i<ord.size();i++){
           if(m2[ord[i]]){
               for(int j=0;j<m2[ord[i]];j++){
               ans+=ord[i];
               }
               m2[ord[i]]=0;
           }
        }
        for(int i=0;i<s.size();i++){
            if(m2[s[i]])ans+=s[i];
        }
        return ans;
    }
};