class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int power) {
        int l=0,r=t.size()-1,sc=0,p=0;
       
        sort(t.begin(),t.end())
;        while(r>=l){
            bool f=1;
             if(power>=t[l]){
                power-=t[l++];
                sc=max(sc,++p) ;
             }else if(p>0){
                 p--;
                 power+=t[r--];
             }else{
                 break;
             }
        }
        return sc;
    }
};