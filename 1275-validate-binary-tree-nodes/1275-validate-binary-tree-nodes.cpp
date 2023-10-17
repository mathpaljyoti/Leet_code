class Solution {
public:
    int findRoot(int n, vector<int>& left, vector<int>& right) {
        unordered_set<int> children;
        for(int i = 0; i < left.size(); i++) {
            children.insert(left[i]);
        }
        for(int i = 0; i < right.size(); i++) {
            children.insert(right[i]);
        }
        for(int i = 0; i < n; i++) {
            if(children.find(i) == children.end()) {
                return i;
            }
        }
        return -1;
    }
    
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int root = findRoot(n, leftChild, rightChild);
        if(root == -1) {
            return false;
        }
        unordered_set<int> seen;
        stack<int> st;
        seen.insert(root);
        st.push(root);
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            int children[] = {leftChild[node], rightChild[node]};
            for(int i : children) {
                if(i != -1) {
                    if(seen.find(i) != seen.end()) {
                        return false;
                    }
                    st.push(i);
                    seen.insert(i);
                }
            }
        }
        return seen.size() == n;
    }
};