class NumArray {
public:
    long long result[1000005]={0};
    NumArray(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            result [i+1] = nums[i]+result[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return result[right+1];
        }
        return result[right+1] - result[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */