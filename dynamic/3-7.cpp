// 이진 트리의 합 구하기

#include <iostream>

using namespace std;


struct node {
    int data;
    struct node* left;
    struct node* right;
    node(int v) : data(v) {
        left = nullptr;
        right = nullptr;
    }
};

struct node * root = nullptr;

void addNumber(int);
void post_order(struct node* p);
void pre_order(struct node* p);
void in_order(struct node* p);
void tree_sum(struct node* p);

int main()
{
    addNumber(5);
    addNumber(3);
    addNumber(8);
    addNumber(2);
    addNumber(4);
    addNumber(1);
    addNumber(7);
    addNumber(9);
    addNumber(10);
    addNumber(6);

    cout<<"PRE ORDER"<<endl;
    pre_order(root); cout<<endl;
    cout<<"IN ORDER"<<endl;
    in_order(root);cout<<endl;
    cout<<"POST ORDER"<<endl;
    post_order(root);cout<<endl;
    
    cout<<"DATA SUM"<<endl;
    tree_sum(root);
    cout<<root->data<<endl;
    return 0;
}

void addNumber(int n)
{
    struct node* nptr = new node(n);
    if( root == nullptr) {
        root = nptr;
    }else{
        struct node* child = root;
            while(true){
                if(child->data > nptr->data) {
                    if(child->left == nullptr) {
                        child->left = nptr;
                        break;
                    }else{
                        child = child->left;
                    }
                }else{
                    if(child->right == nullptr) {
                        child->right = nptr;
                        break;
                    }else{
                        child = child->right;
                }
            }
        }
    }
}

void post_order(struct node* p)
{
    if(p == nullptr) return;
    post_order(p->left);
    post_order(p->right);
    cout<<p->data<<' ';
}

void in_order(struct node* p)
{
    if(p == nullptr) return;
    in_order(p->left);
    cout<<p->data<<' ';
    in_order(p->right);
}

void pre_order(struct node* p)
{
    if(p == nullptr) return;
    cout<<p->data<<' ';
    pre_order(p->left);
    pre_order(p->right);
}


void tree_sum(struct node* p)
{
    if (p == nullptr) return;

    tree_sum(p->left);
    tree_sum(p->right);

    if(p->left) p->data += p->left->data;
    if(p->right) p->data += p->right->data;
}