class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        if (nums.empty()) return false;
        for(int i =0;i<nums.size();i++)
        {
            for(int j=0;j<(int)nums.size()-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i]){
                return true;
            }
        }
        return false;
    }
};