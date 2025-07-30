class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,vector<string>> map;
        int size = strs.size();
        for (int i =0;i<size;i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            map[temp].push_back(strs[i]);
        }
        for(auto it : map){
            result.push_back(it.second);
        }
        return result;
    }
};