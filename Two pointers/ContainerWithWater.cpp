class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size()-1;
        int result=0;
        int temp_val=0;

        while (left<right){
            if (height[left]<=height[right]){
                temp_val = height[left]*(right-left);
                ++left;
            }
            else{
                temp_val = height[right]*(right-left);
                --right;
            }

            if(temp_val>result){
                result = temp_val;
            }
        }
        
        return result;
    }
};
