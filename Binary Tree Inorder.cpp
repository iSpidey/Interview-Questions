class Solution {
private:
    
    void inorder(TreeNode* root, vector<int>& ans) {
        if(!root) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    
    void iterativeInorder(TreeNode *root, vector<int>& ans) {
        stack<TreeNode*> st;
        
        while(1) {
            if(root != NULL) {
                st.push(root);
                root = root->left;
            }
            else {
                if(st.empty()) break;
                root = st.top(); st.pop();
                ans.push_back(root->val);
                root = root->right;
            }
        }
        return;
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        // inorder(root, ans);
        iterativeInorder(root, ans);
        return ans;
    }
};
