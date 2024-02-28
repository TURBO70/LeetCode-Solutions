class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string s;
       sort(nums.begin(),nums.end(),[](int a,int b){
           return to_string(a)+to_string(b)> to_string(b)+to_string(a);
       });
       for(int i=0;i<nums.size();i++){
           s+=to_string(nums[i]);
       }
       return s[0]=='0'?"0":s;
    }
};