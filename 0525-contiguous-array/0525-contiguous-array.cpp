class Solution {
public:
    int findMaxLength(vector<int>& v) {
        int s=0, mx=0;
        unordered_map<int, int> m{{0, -1}};
        for(int i=0;i<v.size();i++){
            s+=v[i]==1?1:-1;
            if(m.count(s))mx=max(mx,i-m[s]);
            else m[s]=i;
        }
return mx;

        
    }
};