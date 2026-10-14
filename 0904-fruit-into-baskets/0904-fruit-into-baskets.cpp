class Solution {
public:
    int totalFruit(vector<int>& arr) {
        unordered_map<int,int>freq;
        int l=0,m=0;
        for(int i=0 ;i< arr.size();i++){
            freq[arr[i]]++;
            while(freq.size() >2){
                freq[arr[l]]--;
                if(freq[arr[l]]==0){
                    freq.erase(arr[l]);
                }
                l++;
            }
            m= max(m,i-l+1);
        }
        return m;
    }
};