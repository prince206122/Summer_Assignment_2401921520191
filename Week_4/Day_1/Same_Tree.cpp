class Solution {
public:

    bool sametree(TreeNode *temp1,TreeNode *temp2)
    {
      if(temp1==NULL && temp2==NULL)return 1;
      if((temp1!=NULL && temp2==NULL)||(temp1==NULL && temp2!=NULL))return 0;
      if(temp1->val!=temp2->val)return false;
      return sametree(temp1->left,temp2->left) && sametree(temp1->right,temp2->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return sametree(p,q);
    }
};
