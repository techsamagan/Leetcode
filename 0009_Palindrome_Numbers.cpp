class Solution {
public:
    bool isPalindrome(int n) {
        int original = n;
        long long int reverse = 0;
        long int reminder;
        if(n < 0)
        {
            return false;
        }
        else if(n == 0 )
        {
            return true;
        }
        else
        {
            while(n!=0)
            {
                reminder = n%10;
                reverse = reverse*10 + reminder;
                n = (n-reminder)/10;
            }
            if(original == reverse){
                return true;
            }
            else
                return false;
        }

    }
};
