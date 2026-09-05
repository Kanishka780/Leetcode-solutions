class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int score=0;
        int n= arr.size();
        int max_val = 0, min_val = 0; 
        vector<int>index;
        
        vector<int> suffix_min(n);
        suffix_min[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffix_min[i] = min(arr[i], suffix_min[i + 1]);
        }
        
        int running_max = arr[0]; 
        
        for(int i=0 ; i < n; i++){
    
            running_max =max(running_max, arr[i]);
            max_val = running_max;
            min_val = suffix_min[i];
            
            score = max_val - min_val;
            if(score <= k){
                index.push_back(i);
                break; 
            }
        }
        return (index.size()==0) ? -1 : index[0];
    }
};
