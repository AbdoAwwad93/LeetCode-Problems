class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> results;
        int count =0;
        string temp="";
        for(int i=0;i<num.size();i++){
            if(num[i]==num[i+1]&&num[i]==num[i+2]){
                results.push_back(num.substr(i,3));
            }
        }
        if(results.size()==0)return "";

        sort(results.begin(),results.end(),[](string a,string b){
            return a>b;
        });
        return results[0];
    }
};