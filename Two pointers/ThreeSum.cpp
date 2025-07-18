class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); ++i){
            if (i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int left =i+1;
            int right = nums.size()-1;
            while (left<right){
                int target = nums[i]+nums[left]+nums[right];
                if (target>0){
                    right --;
                }
                else if(target<0){
                    left ++;
                }
                else{
                    result.push_back({nums[i], nums[left], nums[right]});
                    left ++;
                    while (nums[left]==nums[left-1] && left<right){
                        left ++;
                    }
                }
            }
        }
        return result;
    }
};
