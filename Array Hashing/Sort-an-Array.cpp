class Solution {
public:
    void sort(vector<int> &nums,int l, int m,int r){
        int i = l, j = m+1;
        vector<int> temp;
        while(i<=m&&j<=r){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i++]);
            }
            else temp.push_back(nums[j++]); 
        }
        while(i<=m){
           temp.push_back(nums[i++]);
        }
        while(j<=r){
           temp.push_back(nums[j++]);
        }
        for (int z=0;z<temp.size();z++){
            nums[z+l] = temp[z];
        }
    }
    void merge(vector<int> &nums,int l,int r){
        if(l<r){
            int m = (l+r)/2;
            merge(nums,l,m);
            merge(nums,m+1,r);
            sort(nums,l,m,r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int l  = 0,r = nums.size()-1;
        merge(nums,l,r);
        return nums;
    }
};