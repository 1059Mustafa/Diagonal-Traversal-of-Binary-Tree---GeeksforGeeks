vector<int> diagonal(Node *root)
{
   vector<int>v;
   if(!root)
   {
       return v;
   }
   queue<Node*>q;
   q.push(root);
   while(q.size()>0)
   {
       Node* temp=q.front();
       q.pop();
       while(temp)
       {
           v.push_back(temp->data);
           if(temp->left)
           {
               q.push(temp->left);
           }
           temp=temp->right;
       }
       
   }
   return v;
   
}
