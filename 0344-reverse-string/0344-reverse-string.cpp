class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>temp;
        int n = s.size();
        for(int i =n-1;i>=0;i--){
            temp.push_back(s[i]);
        }
        s=temp;
    }
};