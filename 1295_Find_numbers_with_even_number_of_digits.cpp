class Solution {
public:
    int num_digits(int n)
    {
        int count = 0;
        while(n != 0)
        {
            n = (n - n%10)/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(num_digits(nums[i])%2==0)
            {
                count++;
            }
        }
        return count;
    }
};
