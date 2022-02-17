#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    bool valid;
    int children[10];
    Node() {
        valid = false;
        for(int i = 0; i<10; i++){
            children[i] = -1;
        }
    }
};

int init(vector<Node>& trie){
    Node x;
    trie.push_back(x);
    return (int)trie.size() -1;
}

void add(vector<Node>& trie, int node,  string&s, int index){
    if(index == s.size()){
        trie[node].valid = true;
        return;
    }
    
    int c = s[index] - '0';
    if(trie[node].children[c] == -1) {
        int next = init(trie);
        trie[node].children[c] = next;
    }
    add(trie,trie[node].children[c], s, index+1);
}

bool check(vector<Node>& trie, int node) {
    for(int i = 0; i<10; i++){
        if(trie[node].children[i] != -1){
            if(trie[node].valid == true){
                return false;
            }else{
                if(!check(trie, trie[node].children[i])){
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<Node> trie;
        int root = init(trie);
        while(n--){
            string str;
            cin>>str;
            add(trie, root, str, 0);
        }
        if(check(trie,root)){
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}