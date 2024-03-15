class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size();
        vector<int >pre(n),sf(n),ans(n);
        pre[0]=1,sf[n-1]=1;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*v[i-1];
        }
        for(int i=n-2;i>=0;i--){
            sf[i]=sf[i+1]*v[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=pre[i]*sf[i];
        }
        return ans;

    }
};