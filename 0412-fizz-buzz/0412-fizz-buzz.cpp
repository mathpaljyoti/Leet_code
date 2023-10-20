class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>s;
        for(int i=1;i<=n;i++){
            if(i%15==0){
                s.push_back("FizzBuzz");
            }else if(i%3==0){
                s.push_back("Fizz");
            }
            else if(i%5==0){
                s.push_back("Buzz");
            }else{
                s.push_back(to_string(i));// we need to covert i to string before pushing it to the string vector
            }
        }
        return s;
    }
};