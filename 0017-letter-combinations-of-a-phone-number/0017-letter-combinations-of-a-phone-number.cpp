class Solution {
public:
    void solve(string digits, int ind,string o1, vector<string>&ans,string mapping[]){
        if(ind >=digits.length()){
            ans.push_back(o1);
            return;
        }
        int num= digits[ind]-'0';
        string value = mapping[num];
        for(int j=0 ;j<value.length(); j++){
            o1.push_back(value[j]);
            solve(digits,ind+1,o1,ans,mapping);
            o1.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if( digits.length()==0){ return {};}
        vector<string>ans;
        string o1;
        string mapping[]= {"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,0,o1,ans,mapping);
        return ans;
    }
};