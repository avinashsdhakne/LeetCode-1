/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node*> st;
        vector<int> result;
        st.push(root);
        
        if(root == NULL) return result;
        while(!st.empty()){
            Node * temp = st.top();
            st.pop();
            result.push_back(temp->val);
            
            for(int i=temp->children.size() - 1; i>=0 ; i--){
                st.push(temp->children[i]);
            }  
        }
        return result;
    }
};