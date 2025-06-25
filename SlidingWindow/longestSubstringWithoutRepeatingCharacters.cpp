class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int maxLength = 0;
        int start = 0;  // left boundary of sliding window

        for (int end = 0; end < s.length(); ++end) {
            char c = s[end];

            // If we've seen c and it's inside current window, update start
            if (lastSeen.count(c) && lastSeen[c] >= start) {
                start = lastSeen[c] + 1;
            }

            lastSeen[c] = end;  // update last seen position
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};

/*
Time complexity: O(n)
Space complexity: O(n)
*/
