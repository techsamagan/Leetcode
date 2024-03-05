class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
        
        vector<int> nums_2 = nums;
        int beg = 0, end = size-1;
        for(int i=0; i<size; i++){
            if(nums[i]%2==0){
                nums_2[beg] = nums[i];
                beg++;
            }
            else{
                nums_2[end] = nums[i];
                end--;
            }
        }
        nums = nums_2;
        return nums;
    }
};
