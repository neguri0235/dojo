#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Trie{
    struct Node {
        bool valid;
        int children[26];
        Node() {
            valid = false;
            for(int i = 0; i<26; i++){
                children[i] = -1;
            }
        }
    };

    int root;
    vector<Node> trie;

    int init(){
        Node x;
        trie.push_back(x);
        return (int) trie.size()-1;
    }

    Trie() {
        root = init();
    }

    void add(int node, string& s, int index){
        if(index == (int)s.size()) {
            trie[node].valid = true;
            return;
        }
        int c = s[index] - 'a';
        if(trie[node].children[c] == -1) {
            int next = init();
            trie[node].children[c] = next;
        }
        int child = trie[node].children[c];
        add(child, s, index+1);
    }

    void add(string& s){
        add(root, s, 0);
    }
    
    bool search(int node, string& s, int index){
        if(node == -1) return false;
        if(index == (int)s.size()) {
            return true;
        }
        int c = s[index] - 'a';
        int child = trie[node].children[c];
        return search(child, s, index+1);
    }

    bool search(string &s) {
        return search(root, s, 0);
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    #ifdef CB
    freopen("in.txt","r",stdin);
    #endif

    int n, m, ans = 0;
    cin>>n>>m;
    Trie trie;
    while(n--){
        string str;
        cin>>str;
        trie.add(str);
    }

    while(m--) {
        string str;
        cin>>str;
        if(trie.search(str)) {
            ans +=1;
        }
    }
    cout<<ans<<'\n';

    return 0;
}