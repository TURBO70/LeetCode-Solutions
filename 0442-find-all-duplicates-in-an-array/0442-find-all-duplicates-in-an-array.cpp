class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++
        }
        for(auto y:m){
            if(y.second==2){
                ans.push_back(y.first);
            }
        }
        return ans;
    }
};