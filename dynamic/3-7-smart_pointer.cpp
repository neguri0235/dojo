// 이진 트리의 합 구하기
// 스마트 포인터를 써보자

#include <iostream>
#include <memory>

using namespace std;


struct node {
    int data;
    shared_ptr<struct node> left;
    shared_ptr<struct node> right;
    node(int v) : data(v) {
        left = nullptr;
        right = nullptr;
    }
};

shared_ptr<struct node> root = nullptr;

void addNumber(int);
void post_order(shared_ptr<struct node> p);
void pre_order(shared_ptr<struct node> p);
void in_order(shared_ptr<struct node> p);
void tree_sum(shared_ptr<struct node> p);

int main()
{
    cout<<"TREE SUM with shared_ptr"<<endl;
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
    shared_ptr<struct node> nptr = make_shared<struct node>(n);
    if( root == nullptr) {
        root = nptr;
    }else{
        shared_ptr<struct node> child = root;
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

void post_order(shared_ptr<struct node> p)
{
    if(p == nullptr) return;
    post_order(p->left);
    post_order(p->right);
    cout<<p->data<<' ';
}

void in_order(shared_ptr<struct node> p)
{
    if(p == nullptr) return;
    in_order(p->left);
    cout<<p->data<<' ';
    in_order(p->right);
}

void pre_order(shared_ptr<struct node> p)
{
    if(p == nullptr) return;
    cout<<p->data<<' ';
    pre_order(p->left);
    pre_order(p->right);
}


void tree_sum(shared_ptr<struct node> p)
{
    if (p == nullptr) return;

    tree_sum(p->left);
    tree_sum(p->right);

    if(p->left) p->data += p->left->data;
    if(p->right) p->data += p->right->data;
}