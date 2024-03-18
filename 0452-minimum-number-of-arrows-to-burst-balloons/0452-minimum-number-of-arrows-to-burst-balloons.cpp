class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {
        int ans=0,arr=0;
        sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1]; 
    });
    for(int i=0;i<v.size();i++){
        if(ans==0||v[i][0]>arr){
            ans++;
            arr=v[i][1];
        }
    }
    return ans; 
    }
};