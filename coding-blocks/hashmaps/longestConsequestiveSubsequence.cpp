class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map <int, bool> startMap;
        for (int n : nums){
            if (startMap.find(n-1) == startMap.end()){
                startMap[n] = true;
            } else {
                startMap[n] = false;
            }
            if (startMap.find(n+1)!=startMap.end()){
                startMap[n+1] = false;
            }
        }
        int maxSoFar = 0;
        for (pair<int,bool> p : startMap){
            int el = p.first;
            bool canStart = p.second;
            if (canStart){
                int cnt = 0;
                while (startMap.find(el) != startMap.end()){
                    cnt++;
                    el++;
                }
                maxSoFar = max(maxSoFar, cnt);
            }
        }
        return maxSoFar;
    }
};