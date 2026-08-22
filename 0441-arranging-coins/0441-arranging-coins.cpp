class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        int rows=0;
        while(n>=i){
            n =n-i;
            rows++;
            i++;
        }
        return rows;
    }
};