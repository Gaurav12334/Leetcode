class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int ans = 0;
        while(i < j)
        {
            int temp = nums[i] + nums[j];
            ans = max(temp, ans);
            i++;
            j--;
        }
        return ans;
    }
};
