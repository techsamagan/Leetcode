class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int size = nums.size();
        long long int sum = 0;
        sort(nums.begin(), nums.end());
      
        for(int i=0; i<size; i++){
            sum = sum + nums[i];
        }
        for(int i=size-1; i >= 2; i--){
            sum -= nums[i];
            if(sum > nums[i]){
                return sum + nums[i];
            }
        }
        
        return -1;
    }
};
