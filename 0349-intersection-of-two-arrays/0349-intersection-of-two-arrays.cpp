class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int>m,m2;
        for(auto &y:nums1)m[y]++;
        for(int i=0;i<nums2.size();i++){
            if (m[nums2[i]]&&!m2[nums2[i]]){
                m2[nums2[i]]=1;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};