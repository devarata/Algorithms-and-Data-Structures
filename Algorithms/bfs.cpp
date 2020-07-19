#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;

        if(!root)
            return v;

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
            int k = q.size();
            vector<int> vi;

            for(int i=0;i<k;i++)
            {
                 TreeNode* r = q.front();
                 q.pop();

                vi.push_back(r->val);

                if(r->left)
                    q.push(r->left);

                if(r->right)
                    q.push(r->right);

            }

            v.push_back(vi);

        }

          return  v;

  }
