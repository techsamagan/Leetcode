class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i]*nums[i];

        }
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++){

                if(nums[i] > nums[j]){
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        return nums;
    }
};
