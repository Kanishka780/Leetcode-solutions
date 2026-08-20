class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, set<int>> mp;

        for (auto &x : reservedSeats) {
            mp[x[0]].insert(x[1]);
        }

        int ans = 2LL * n;

        for (auto &[row, seats] : mp) {

            bool left = true;   // 2,3,4,5
            bool mid = true;    // 4,5,6,7
            bool right = true;  // 6,7,8,9

            for (int i = 2; i <= 5; i++) {
                if (seats.count(i)) {
                    left = false;
                    break;
                }
            }

            for (int i = 4; i <= 7; i++) {
                if (seats.count(i)) {
                    mid = false;
                    break;
                }
            }

            for (int i = 6; i <= 9; i++) {
                if (seats.count(i)) {
                    right = false;
                    break;
                }
            }

            int groups = 0;

            if (left) groups++;
            if (right) groups++;

            if (groups == 0 && mid)
                groups = 1;

            ans -= (2 - groups);
        }

        return ans;
    }
};