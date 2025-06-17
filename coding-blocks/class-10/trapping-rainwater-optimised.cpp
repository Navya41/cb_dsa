//time : 3n.cont ~ O(n)
//space : 2n due to l[] and r[] ~ O(n)

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int sum = 0;
        //vector<int> l(n);
        //l[0] = height[0];
        //for (int i=1; i<=n-1; i++){
        //    l[i] = max(l[i-1],height[i]);
        //}

        vector<int> r(n);
        r[n-1] = height[n-1];
        for (int i = n-2; i>=0; i--){
            r[i] = max(r[i+1],height[i]);
        }
        int li = 0;
        for (int i = 0; i<n; i++){
            li = max(li,height[i]);
            int wi = min(li,r[i]) - height[i];
            sum=sum+wi;
        }
        return sum;
    }
};