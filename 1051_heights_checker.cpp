class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int size = heights.size();
        vector<int> clone = heights;
        sort(clone.begin(), clone.end());
        int count = 0;
        for(int i=0; i<size; i++){
            if(heights[i] != clone[i]){
                count++;
            }
        }
        return count;
    }
};
