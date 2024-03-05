class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> nums_2;
        nums_2 = nums;
        int beg=0, end=size-1, count=0;
        
        for(int i=0; i<size; i++){
            if(nums[i] == 0){
                nums_2[end] = 0;
                end--;
            }
            else{
                nums_2[beg] = nums[i];
                beg++;
            }
        }
        nums = nums_2;
        
    }
};
