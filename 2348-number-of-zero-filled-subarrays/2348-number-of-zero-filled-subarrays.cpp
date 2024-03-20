class Solution {
public:
    long long zeroFilledSubarray(vector<int>& v) {
        long long ans = 0, cnt = 0,n=v.size();
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                cnt++;
            } else {
                ans += ((cnt * (cnt + 1)) / 2);
                cnt=0;
            }
        }
        ans += ((cnt * (cnt + 1)) / 2);
        return ans;
    }
};