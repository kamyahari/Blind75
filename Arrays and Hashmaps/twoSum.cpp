class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen; 
        for (int i = 0; i < nums.size(); ++i) { 
            int x = nums[i];
            int y = target - x; 

            if (seen.count(y)) { 
                // Return the indices of the two numbers that sum to target
                return {seen[y], i};
            }

            seen[x] = i; // store value → index
        }
        return {}; 
    }
};

/* 
Time complexity: O(n)
Space complexity: O(n)
*/
