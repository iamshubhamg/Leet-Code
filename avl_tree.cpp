#include<iostream>
using namespace std;

struct Node {
    struct Node *left, *right;
    int data, height;
}*root=NULL;

int NodeHeight(struct Node *t){
    int hl, hr;
    hl = t && t->left ? t->left->height : 0;
    hr = t && t->right ? t->right->height : 0;
    
    return hl > hr ? hl+1:hr+1;
}

int balanceFactor(struct Node *p){
    int hl, hr;
    hl = p && p->left ? p->left->height : 0;
    hr = p && p->right ? p->right->height : 0;

    return hl-hr;
}

struct Node * LLRotation(struct Node *p){
    struct Node *pl = p->left;
    struct Node *plr = pl->right;
    pl->right  = p;
    p->left = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    if(root == p)
        root = pl;
    return pl;
}

struct Node * RRRotation(struct Node *p){
    struct Node *pr = p->right;
    struct Node *prl = pr->left;
    pr->left = p;
    p->right = prl;
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);
    if(root == p)
        root = pr;
    return pr;
}

struct Node * LRRotation(struct Node *p){
    struct Node *pl = p->left;
    struct Node *plr = pl->right;
    pl->right = plr->left;
    p->left = plr->right;
    plr->left = pl;
    plr->right = p;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    plr->height = NodeHeight(plr);
    if(p == root)
        root = plr;
    return plr;
}

struct Node *RLRotation(struct Node *p){
    struct Node *pr = p->right;
    struct Node *prl = pr->left;
    pr->left = prl->right;
    p->right = prl->left;
    prl->right = pr;
    prl->left = p;
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);
    prl->height = NodeHeight(prl);
    if(p == root)
        root=  prl;
    return prl;
}

struct Node *RInsert(struct Node *p, int key){
    struct Node *t = NULL;
    if(p == NULL){
        t = new struct Node;
        t->data = key;
        t->height = 1;
        t->left = t->right = NULL;
        return t;
    }
    if(key < p->data)
        p->left = RInsert(p->left, key);
    else if(key > p->data)
        p->right = RInsert(p->right, key);
    
    p->height = NodeHeight(p);
    if(balanceFactor(p) == 2 && balanceFactor(p->left) == 1){
        return LLRotation(p);
    }
    else if(balanceFactor(p) == 2 && balanceFactor(p->left) == -1){
        return LRRotation(p);
    }
    else if(balanceFactor(p) == -2 && balanceFactor(p->right) == -1){
        return RRRotation(p);
    }
    else if(balanceFactor(p) == -2 && balanceFactor(p->right) == 1){
        return RLRotation(p);
    }
    
    return p;
}

void preOrder(struct Node *p){
    if(p){
        cout << p->data << " ";
        preOrder(p->left);
        preOrder(p->right);
    }
}

void inOrder(struct Node *p){
    if(p){
        inOrder(p->left);
        cout << p->data << " ";
        inOrder(p->right);
    }
}

int main(){
    int x = 0;
    cout << "Enter Node Value: ";
    cin >> x;
    if(x != -1){
        root = RInsert(root, x);
        while (true)
        {   
            cout << "Enter Node Value: ";
            cin >> x;
            if(x == -1)
                break;
            RInsert(root, x);
        }
        cout << "\nPreOrder Sequence is: ";
        preOrder(root);
        cout << "\nInOrder Sequence is: ";
        inOrder(root);
    // cout <<  root->data << " Left Child: " << root->left->data << " Right Child:  " << root->right->data;
    }
    else{
        cout << "\nNo Root value found\n";
    }
    return 0;
}