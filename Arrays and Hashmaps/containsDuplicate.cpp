class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nonDuplicates;

        for (int i=0; i<nums.size(); i++)
        {
            if(nonDuplicates.count(nums[i])==0) //hashmap lookup - O(1)
            {
                nonDuplicates.insert(nums[i]);
            }
            else
                return true;
        }
        return false;
    }
};

/*
Time complexity: O(n)
Space complexity: O(n)
*/
