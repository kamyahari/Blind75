class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramHashmap;

        for (const string& word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            anagramHashmap[sortedWord].push_back(word);
        }

        vector<vector<string>> result;
        for (const auto& entry : anagramHashmap) {
            result.push_back(entry.second);
        }

        return result;
    }
};

/* Time complexity: O(n*l*log l)
  space complexity: O(n*l) */
