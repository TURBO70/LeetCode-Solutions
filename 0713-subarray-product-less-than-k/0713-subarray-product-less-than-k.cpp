class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int ans = 0;
        int n = nums.size();
        int l = 0, r = 0, p = 1;
        while (r < n) {
            p *= nums[r];
            while (p >= k) {
                p /= nums[l];
                l++;
            }
            ans += (r - l + 1);
            r++;
        }
        return ans;
    }
};