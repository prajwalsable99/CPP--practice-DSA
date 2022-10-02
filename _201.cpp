 bool isBST(Node* root) 
    {
        return helper(root,INT_MIN,INT_MAX);

    }
    
    bool helper(Node* root,int minimum,int maximum){
        
        if (root==NULL){
            
            return true;
        }
         return (
                    root->data>minimum 
                    && root->data<maximum
                    && helper(root->left,minimum,root->data) 
                    && helper(root->right,root->data,maximum)
                    
                );
         
        
    }
