class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        long int sum = nums[0];
        int size = nums.size();
        for(int i=1; i<size; i++)
        {
            
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};
