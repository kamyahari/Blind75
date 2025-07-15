class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(),1);
        for (int i=1; i<nums.size(); ++i){
            answer[i] = answer[i-1]*nums[i-1];
        }

        int suffix_product = 1;
        for (int j=nums.size()-1; j>=0; --j){
            answer[j] =  answer[j] * suffix_product;
            suffix_product = suffix_product * nums[j];
        }
        return answer;
    }
};
