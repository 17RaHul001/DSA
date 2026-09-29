/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {

        vector<vector<int>>ans;

        if(root==NULL){
            return true;
        }

        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            int n=q.size();
            vector<int>v;

            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node->val);

                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            ans.push_back(v);
        }
            for(int i=0;i<ans.size();i++){

               for(int j=0;j<ans[i].size();j++){

                if(i%2==0){

                    if(ans[i][j]%2==0){
                        return false;
                    }
                    if(j>0 && ans[i][j]<=ans[i][j-1]){
                        return false;
                    }
                }
                    else{
                        if(ans[i][j]%2==1){
                            return false;
                        }
                        if(j>0 && ans[i][j]>=ans[i][j-1]){
                            return false;
                       }
               }
            }
        }
        return true;        
    }
};