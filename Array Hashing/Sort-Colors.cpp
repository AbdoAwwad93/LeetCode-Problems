class Solution {
public:
    void mergesort(vector<int>&nums, int l,int r,int m){
        int i =l,j=m+1;
        vector<int> temp;
        while(i<=m&&j<=r){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }
            else {
                temp.push_back(nums[j++]);
            }
        }
        while(i<=m){
            temp.push_back(nums[i++]);
        }
        while(j<=r){
            temp.push_back(nums[j++]);
        }
        for(int k=0;k<temp.size();k++){
            nums[k+l] = temp[k];
        }
    }
    void merge(vector<int>&nums,int l, int r){
        if(l<r){
        int m = (l+r)/2;
        merge(nums,l,m);
        merge(nums,m+1,r);
        mergesort(nums,l,r,m);
        }
    }
    void sortColors(vector<int>& nums) {
        int l = 0,r = nums.size()-1;
        merge(nums,l,r);
    }
};