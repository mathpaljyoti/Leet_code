class Solution {
public:
/******** Inefficient Solution********
    int getWinner(std::vector<int>& arr, int k) {
        map<int, int> result;

        int win_count = 0;
        int winner = arr[0];

        while (win_count < k) {
            int a = arr[0];
            int b = arr[1];

            if (a > b) {
                result[a]++;
                win_count = std::max(win_count, result[a]);
                if (result[a] == k) {
                    return a;
                }
                rotate(arr.begin() + 1, arr.begin() + 2, arr.end());
            } else {
                result[b]++;
                win_count = max(win_count, result[b]);
                if (result[b] == k) {
                    return b;
                }
                rotate(arr.begin(), arr.begin() + 1, arr.end());
            }
        }
        return winner; 
    }
    */
    
    int getWinner(vector<int>& arr, int k) {
        int first=0; int second=1; int count=0;
        while(first < arr.size() && second< arr.size()){
            if(count==k) return arr[first];
            
            if(arr[first] > arr[second]){
                count++;
                second++;
            }
            else{
                count=1;
                while(first!=second){
                    first++;
                }
                first++;
                int temp=second;
                second= first;
                first= temp;
            }
        }
        return arr[first];
    }
};