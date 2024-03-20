class Solution {
public:
    bool checkPossibility(vector<int>& v) {
        int cnt=0,n=v.size();
        bool f=false;
        for(int i=1;i<n;i++){
           if(v[i-1]>v[i]){
            if (f)return false;

            f^=1;

            if(i<2||v[i-2]<=v[i]){
                v[i-1]=v[i];
            }else{
                v[i]=v[i-1];
            }
           }
        }
        return true;
    }
};