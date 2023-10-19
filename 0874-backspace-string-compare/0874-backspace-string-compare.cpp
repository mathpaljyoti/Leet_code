class Solution {
public:
   bool backspaceCompare(string s, string t) {
    int n1 = s.length() - 1;
    int n2 = t.length() - 1;

    while (n1 >= 0 || n2 >= 0) {
        int backspaces1 = 0;
        while (n1 >= 0 && (s[n1] == '#' || backspaces1 > 0)) {
            if (s[n1] == '#') {
                backspaces1++;
            } else {
                backspaces1--;
            }
            n1--;
        }

        int backspaces2 = 0;
        while (n2 >= 0 && (t[n2] == '#' || backspaces2 > 0)) {
            if (t[n2] == '#') {
                backspaces2++;
            } else {
                backspaces2--;
            }
            n2--;
        }

        if (n1 >= 0 && n2 >= 0 && s[n1] != t[n2]) {
            return false;
        }
        if ((n1 >= 0) != (n2 >= 0)) {
            return false;
        }

        n1--;
        n2--;
    }

    return true;
}

};
// for(int j = n2-1;j>=0;j--){
        //     if(t[j]=='#')
        //         continue;
        //     str2.push_back(t[j]);
        // }
// for(int i = n1-1;i>=0;i--){
        //     if(s[i]=='#')
        //         continue;
        //     str1.push_back(s[i]);
        // }