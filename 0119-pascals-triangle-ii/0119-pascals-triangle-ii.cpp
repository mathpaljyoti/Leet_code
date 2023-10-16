class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp1 = {1};
        vector<int> temp2 = {1, 1};

        if (rowIndex == 0) return temp1;
        else if (rowIndex == 1) return temp2;

        for (int i = 2; i <= rowIndex; i++) {
            vector<int> temp3 = {1};
            for (int j = 1; j < i; j++) { // Start the loop from j=1
                temp3.push_back(temp2[j] + temp2[j - 1]);
            }
            temp3.push_back(1);
            temp2 = temp3;
        }

        return temp2;
    }
};
