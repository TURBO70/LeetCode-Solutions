class Solution {
public:
    long long countSubarrays(vector<int>& v, int k) {
      long long l=0,r=0,ans=0,n=v.size();
      int mx=-1;
      map<long long,long long>m;
      for(int i=0;i<n;i++){
        mx=max(mx,v[i]);
      }
      while(r<n){
        m[v[r]]++;
        while(m[mx]>=k){
            ans+=n-r;
            m[v[l]]--;
            l++;
        }
        r++;
      }
       return ans;  
    }
};