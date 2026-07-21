class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int product=1;
        int count=0;
        int  i;

        vector<int> ans;

    
    for(i=0;i<nums.size();i++){
        if(nums[i]==0){
          count++;
        }
        else if(nums[i]!=0){
            product *= nums[i];
        }
    }

    if(count>1){
        return vector<int>(nums.size(), 0);
    }
    
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]!=0 && count > 0){
           ans.push_back(0); 
        }
        else if(nums[i]==0){
            ans.push_back(product);
        }
        else if(nums[i]!=0 && count == 0){
            int temp = product/nums[i];
            ans.push_back(temp);
        }
    }
    
    return ans;


  }  
};
