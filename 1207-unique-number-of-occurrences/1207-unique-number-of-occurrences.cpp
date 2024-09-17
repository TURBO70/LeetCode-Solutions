class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m,m2;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto y:m){
            m2[y.second]++;
        }
        return m2.size()==m.size()||m.size()==1;
    }
};