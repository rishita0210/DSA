class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();

        sort(s.begin(), s.end());

        // Try every position as the first position
        // where our answer becomes greater than target.
        for (int i = n - 1; i >= 0; i--) {
            
            string prefix = target.substr(0, i);

            // Check if prefix can be made from s
            string remaining = s;

            bool possible = true;

            for (char c : prefix) {
                auto it = find(remaining.begin(), remaining.end(), c);

                if (it == remaining.end()) {
                    possible = false;
                    break;
                }

                remaining.erase(it);
            }

            if (!possible)
                continue;

            // Find smallest character greater than target[i]
            auto it = upper_bound(remaining.begin(), remaining.end(), target[i]);

            if (it != remaining.end()) {
                string ans = prefix;

                ans += *it;

                remaining.erase(it);

                // Put remaining characters in smallest order
                ans += remaining;

                return ans;
            }
        }

        return "";
    }
};