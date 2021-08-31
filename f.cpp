// 0 < data < 10^4  <--- constraint
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

// //intento 1
bool checkBST_helper(Node* node, int min, int max){
    if(node==NULL) return true; //casebase
    if(node->data <= min || node->data >= max) return false;
    return checkBST_helper(node->left, min, node->data) && 
            checkBST_helper(node->right, node->data, max);
};

bool checkBST(Node* node){
    if(node==NULL) return true;
    return checkBST_helper(node, 0, 10000);
};
