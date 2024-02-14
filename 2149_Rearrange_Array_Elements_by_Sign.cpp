class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> posit, negat;
       int size = nums.size();
       for(int num : nums){
           if(num > 0){
               posit.push_back(num);
           }
           else{
               negat.push_back(num);
           }
       }
       vector<int> rearrange(nums.size());
       int pos = 0, neg = 0;
       for(int i=0; i<size; i+=2){
           rearrange[i] = posit[pos++];
           rearrange[i+1] = negat[neg++];
       }
       return rearrange;
    }
};
