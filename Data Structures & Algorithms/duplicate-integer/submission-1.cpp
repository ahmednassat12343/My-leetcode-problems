class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()) 
        {
            return false;
        }
        for(long long i = 0;i < nums.size() - 1;++i)
        {
            for(long long j = i + 1;j < nums.size();++j)
            {
                if(nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};