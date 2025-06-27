//Using Bucket sort:

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> count;

        for (int num: nums){
            count[num]++;
        }

        vector <vector<int>> bucket(nums.size()+1);
        for (auto i : count){
            bucket[i.second].push_back(i.first);
        }

        vector<int> result;
        for (int j=nums.size(); j>=0; j--){
            for (int val:bucket[j] ){
                result.push_back(val);
            }
            if (result.size()==k){
                return result;
            }
        }
    return result;
    }

};

/* Time complexity: O(n)
   Space complexity: O(n) */

//Using min Heap
