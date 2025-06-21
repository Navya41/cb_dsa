class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = -1;
        while (s<=e){
            int mid = s + (e-s)/2;
            if (f(bloomDay, m, k, mid)){
                ans = mid;
                e = mid - 1;
            } else {
                s = mid +1;
            }
        }
        return ans;
    }
};