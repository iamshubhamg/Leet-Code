#include <bits/stdc++.h>
using namespace std;
#define el "\n"

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    
    Node()
    {
       data = 0;
       left = NULL;
       right = NULL;
    }

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }

    Node* Insert(Node* root,int value)
    {
        if(root == NULL)
        {
            return new Node(value);
        }

        if(value <= root->data)
        {
            root->left = Insert(root->left,value); 
        }
        else
        {
            root->right = Insert(root->right,value); 
        }
        return root;
    }
    Node* MinValueNode(Node* root)
    {
        Node* curr = root;
        while(curr->left != NULL)
        {
            curr = curr->left;
        } 
        return curr;
    }

    Node* Delete(Node* root,int key)
    {
        if(root == NULL)
        return root;

        if(key < root->data)
        {
            root->left = Delete(root->left,key);
        }
        else if(key > root->data)
        {
            root->right = Delete(root->right,key);
        }
        else//key == root->data
        {
            if(root->left == NULL)
            {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == NULL)
            {
                Node* temp = root->left;
                delete root;
                return root->left;
            }
            else
            {
                Node* temp = MinValueNode(root->right);
                root->data = temp->data;
                Delete(root->right,temp->data);
            }


        }
        return root;



    }
    
    

    // void LeftView(Node*);
};


class Solution{

    public:
    void leftV(Node* root,vector<int> &res)
    {
        // cout<<"apoorv"<<el;
        // return;
        if(root == NULL)
        return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            // if(n==0)
            // break;

            for(int i=1;i<=n;i++)
            {
                Node* temp = q.front();
                q.pop();
                if(i==1)
                {
                    res.push_back(temp->data);
                    cout<<temp->data<<" ";
                }
                if(temp->left != NULL)
                q.push(temp->left);
                if(temp->right != NULL)
                q.push(temp->right);
            }
        }

    }
    
    void LeftView(Node* root)
    {
        // cout<<"apoorv"<<el;
        // return;
        vector<int> res;
        leftV(root,res);

        if(res.size() == 0)
            res.push_back(-1);
        cout<<el<<"Printing Vector"<<el;
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<el;
    }

    void Inorder(Node* root)
    {
        if(root == NULL)
        return;

        cout<<root->data<<" ";
        Inorder(root->left);
        Inorder(root->right);
    }
};

 
int main()
{
    int t;
    cin>>t;

    Node b;
    Node* root = new Node(50);
    // root = ;
    b.Insert(root,30);
    b.Insert(root,20);
    b.Insert(root,40);
    b.Insert(root,70);
    b.Insert(root,60);
    b.Insert(root,80);
    b.Delete(root,50);

    vector<int> re;
    Solution bb;
    bb.Inorder(root);

    // bb.leftV(root,re);
}


