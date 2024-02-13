class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int size = arr.size();
        
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if((arr[i] == 2 * arr[j]) || (2 * arr[i] == arr[j])){
                    return true;
                    break;
                }

                
            }
        }
        return false;
    }
};
