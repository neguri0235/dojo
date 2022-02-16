#include <iostream>
#include <string>
#include <vector>

using namespace std;
int dup = 0;

struct Trie {
    struct Node{
        bool valid;
        int children[10];
        Node(){
            valid = false;
            for(int i = 0; i<10; i++){
                children[i] = -1;
            }
        }
    };

    int root;
    vector<Node>trie;

    int init() {
        Node x;
        trie.push_back(x);
        return (int)trie.size()-1;
    }

    Trie () {
        root = init();
    }

    void add(string& s){
        add(root, s, 0);
    }

    void add(int node, string& s, int index){
        if(index == (int) s.size()){
            trie[node].valid = true;
            cout<<s<<" valid: "<<node<<' '<<index<<endl;

            for (int i = 0; i<10; i++){
                if(trie[node].children[i] == true){
                    dup = 1;
                }
            }
            return;
        }
        int c = s[index] - '0';
        if(trie[node].children[c] == -1){
            int next = init();
            trie[node].children[c] = next;
        }
        int child = trie[node].children[c];
        if(trie[child].valid == true) {
            dup = 1;
        //    cout<<"DUP"<<endl;
        }

        for(int i = 0; i<10; i++){
            if(trie[child].children[i] == true){
                dup = 1;
                break;
            }

        }
        add(child, s, index+1);
    }

    bool search(string &s){
        return search(root, s, 0);
    }

    bool search(int node, string&s, int index){
        return true;
    }

};

int main()
{
    ios_base::sync_with_stdio(false);

    int t,n;
    cin>>t;
    while(t--) {
        dup = 0;
        cin>>n;
        Trie trie;
        while(n--){
            string str;
            cin>>str;
            trie.add(str);
        }
        if(dup == 1){
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }

    return 0;
}