class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        int size = nums.size();
        
        if (size == 0) {
           
            return -1;
        }

        int max = nums[0];
        int maxindex = 0;

        for (int i = 1; i < size; i++) {
            if (nums[i] > max) {
                max = nums[i];
                maxindex = i;
            }
        }

        for (int j = 0; j < size; j++) {
            if (j != maxindex && max < 2 * nums[j]) {
               
                return -1;
            }
        }

        return maxindex;
    }
};
