class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        vector<string>ans;
         map <string,int> mp;
         for(int i=0;i<n-9;i++){
            mp[s.substr(i,10)]++;
        }
        for(auto y:mp){
            if (y.second>1){
                ans.push_back(y.first);
            }
        }
        return ans;
    }
};