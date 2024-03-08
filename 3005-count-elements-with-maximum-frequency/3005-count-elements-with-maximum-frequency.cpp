class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        int mx=0,ans=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto y:m){
            mx=max(mx,y.second);
        }
         for(auto y:m){
           if (y.second==mx){
               ans+=y.second;
           }
        }

        return ans;




    }
};