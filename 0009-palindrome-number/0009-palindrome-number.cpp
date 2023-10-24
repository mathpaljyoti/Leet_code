class Solution {
public:
    bool isPalindrome(int x) {
        int orgnl = x;
        if(x<0) return false;
        long long int num =0;
        while(x>0){
            int rem = x%10;
            num = num*10 + rem;
            x = x/10;
        }
        //why writing num == x is wrong ???  THINK AND GROW :)
        if(num == orgnl) return true;
        else return false;
    }
};