class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int majority = 0;
        for(int i=0; i<size; i++)
        {
            int count = 0;
            for(int j=i; j<size; j++)
            {
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > size/2)
            {
                majority = nums[i];
            }
        }
        return majority;
    }
};
