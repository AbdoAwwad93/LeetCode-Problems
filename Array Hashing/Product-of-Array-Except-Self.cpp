class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int prefix[1000002] = {1};
     int postfix[1000002] = {1};
     postfix[nums.size()] =1;
    vector<int> result;
      for(int i =0;i<nums.size();i++){
         prefix[i+1] = nums[i] * prefix[i];
      }
      for(int i = nums.size()-1;i>=0;i--){
        postfix[i] =nums[i]*postfix[i+1];
      }

      for(int i=0;i<nums.size();i++){
         result.push_back(prefix[i]*postfix[i+1]);
      }
      return result;
    }
};