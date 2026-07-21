class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int product = 1;
        int count = 0;

        vector<int> ans(nums.size(), 0);

        // Calculate product of non-zero elements and count zeros
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
            }
            else{
                product *= nums[i];
            }
        }

        // Case 1: More than one zero → all outputs = 0
        if(count > 1){
            return ans; // already filled with 0
        }

        // Build answer
        for(int i = 0; i < nums.size(); i++){
            if(count == 1){
                // Only one zero
                if(nums[i] == 0){
                    ans[i] = product;
                }
                else{
                    ans[i] = 0;
                }
            }
            else{
                // No zero
                ans[i] = product / nums[i];
            }
        }

        return ans;
    }  
};