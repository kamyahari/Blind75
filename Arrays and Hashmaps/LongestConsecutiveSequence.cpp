class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set <int> setNums(nums.begin(), nums.end());
        int maxLength = 0;

        for (int num: setNums){
            if (!setNums.count(num-1)){
                int currentLength = 1;
                while(setNums.count(num+1)){
                    currentLength ++;
                    num ++;
                }
                maxLength = max(maxLength,currentLength);
            }
        }
        return maxLength;
    }
};
