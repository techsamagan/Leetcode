class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        int size = nums.size();
        std::vector<int> numbers(size, 0); // Initialize vector with size and all elements as 0
        
        // Marking elements present in nums
        for(int i = 0; i < size; i++) {
            numbers[nums[i] - 1] = 1; // Mark the corresponding element in numbers as 1
        }
        
        std::vector<int> result;
        
        // Finding disappeared numbers
        for(int i = 0; i < size; i++) {
            if(numbers[i] == 0) { // If the element is not marked, it is missing
                result.push_back(i + 1); // Add the missing number to result
            }
        }
        
        return result;
    }
};
