class Solution {
public:
    bool isSorted(vector<int>&nums)
    {
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] < nums[i - 1])
                return false;
        }return true;

    }
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

        while(!isSorted(nums))
        {
            int idx = 0;
            int minSum = nums[0] + nums[1];

            for(int i = 1; i + 1 < nums.size(); i++)
            {
                int sum = nums[i] + nums[i + 1];
                if(sum < minSum)
                {
                    minSum = sum;
                    idx = i;
                }
            }
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            ops++;
        }
        return ops;
             
        
    }
};
