class Solution {
public:
    int majorityElement(vector<int>& nums) {
        double x = nums.size()/2;
        map<int,int> map;
        int ans;
        for(int i = 0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto it :map){
            if(it.second > x){
               ans = it.first;
               break;
            }
        }
        return ans;
    }
};