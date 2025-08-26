class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans,area=0;
        double maxlen=0.0;
        for(int i=0;i<dimensions.size();i++){
            int a1,a2;
            a1 = dimensions[i][0];
            a2 = dimensions[i][1];
            area = a1*a2;
            double res = sqrt((a1*a1)+(a2*a2));
            if(maxlen<res){
                maxlen=res;
                ans = area; 
            }
            else if (maxlen==res){
                ans = max(area,ans);
            }
        }
        return ans;


    }
};