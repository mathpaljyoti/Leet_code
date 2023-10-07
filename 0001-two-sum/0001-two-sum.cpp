class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        for(int i =0;i<nums.size();i++){
            int difference = target - nums[i];
            //vector<int>result;
            for(int j =i+1;j<nums.size();j++){
                if(difference == nums[j]){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }

        }
        return result;

    }
};