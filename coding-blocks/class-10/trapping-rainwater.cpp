class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int sum = 0;
        for (int i=0; i<n; i++){
            int li= height[i]; 
            int ri = height[i];
            for (int j = i-1; j>=0; j--){
                li = max(li,height[j]);
            } 
            for (int j = n-1; j>i; j--){
                ri = max(ri, height[j]);
            } 
            int wi = min(li,ri) - height[i];
            sum+=wi;
        }
        return sum;
    }
};