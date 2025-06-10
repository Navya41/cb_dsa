class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int sum = 0;
        int i = 0, j = n-1;
        int l = 0;
        int r = 0;
        while (i<=j){
            l = max(l, height[i]);
            r = max(r,height[j]);
            if (l<r){
                int wi = l - height[i];
                sum = sum + wi;
                i++;
            }
            else {
                int wj = r - height[j];
                sum = sum + wj;
                j--;
            }
            
        }
        return sum;
    }
};