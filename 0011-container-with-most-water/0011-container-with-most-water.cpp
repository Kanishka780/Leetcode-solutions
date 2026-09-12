class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left=0 , right= n-1;
        int maxA=0;
        while(left < right){
            int w = right-left;
            int h= min(height[left], height[right]);
            maxA= max(maxA, w*h);
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxA;
    }
};