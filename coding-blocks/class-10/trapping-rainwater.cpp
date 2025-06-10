int trap(vector<int>& height) {
        int n = height.size();
        vector<int> w(n);
        int li = 0, ri = 0;
        for (int i=0; i<n; i++){
            li= 0; ri = 0;
            for (int j = 0; j<=i; j++){
                li = max(li,height[j]);
            } 
            for (int j = n-1; j>=i; j--){
                ri = max(ri, height[j]);
            } 
            w[i] = min(li,ri) - height[i];
        }
        int sum = 0;
        for (int i=0; i<n; i++){
            sum+=w[i];
        }
        return sum;
    }