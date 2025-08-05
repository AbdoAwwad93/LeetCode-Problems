class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int size = fruits.size();
        int n = size;
        for(int i = 0;i<size;i++){
            for(int j=0;j<size;j++){
                if(fruits[i]<=baskets[j]){
                    baskets[j] = -1;
                    n--;
                    break;
                }
            }
        }
        return n;
    }
};