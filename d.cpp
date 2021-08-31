//https://www.youtube.com/watch?v=c3SAvcjWb1E&ab_channel=VivekanandKhyade-AlgorithmEveryDay
//https://www.youtube.com/watch?v=KXfok9IiVHQ&ab_channel=GeeksforGeeks
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

void topView(Node* root){
    if(root==NULL) return;
    map<int, int> umap;
    vector<int> key;
    queue<pair<Node*, int>> q;
    
    q.push(make_pair(root, 0)); //0 is a horizontal value
    while(!q.empty()){
        pair<Node*, int> p = q.front();
        Node *node = p.first;
        int hvalue = p.second;
        q.pop();

        if(umap.find(hvalue)==umap.end()){ //checks vertical order traversal first
            umap[hvalue]= node->data;
            key.push_back(hvalue);
        }if(node->left != NULL){
            q.push({node->left, hvalue-1});
        }if(node->right != NULL){
            q.push({node->right, hvalue+1});
        }
    }
    sort(key.begin(), key.end()); //ordenan con complejidad O(n log n)
    for(int i=0; i<key.size(); i++){
        cout << umap[key[i]] << " ";
    }
    cout << endl;
}

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};