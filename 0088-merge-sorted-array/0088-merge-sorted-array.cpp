class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Just start filling the Nums1 array from the end
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i >= 0 || j >= 0){
            if(i >= 0 && (j < 0 || nums1[i] > nums2[j])){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
    }
};