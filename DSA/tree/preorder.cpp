//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<int> preorder(struct Node* root);

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        vector<int> res = preorder(root);
        for (int i : res)
            cout << i << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
void traverse(Node *root, vector <int> &v){
if(!root) return;
    
  // Your code here
  v.push_back(root->data);
  traverse(root->left,v);
  traverse(root->right,v);
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
    vector <int> result;
  // Your code here
    traverse(root, result);
    return result;
}


// #include <vector>

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// std::vector<int> preorder(Node* root) {
//     if (root == NULL)
//         return {};

//     std::vector<int> result;
//     result.push_back(root->data); // Add the current node's data to the result

//     // Recursively traverse the left subtree and concatenate its result
//     std::vector<int> left_result = preorder(root->left);
//     result.insert(result.end(), left_result.begin(), left_result.end());

//     // Recursively traverse the right subtree and concatenate its result
//     std::vector<int> right_result = preorder(root->right);
//     result.insert(result.end(), right_result.begin(), right_result.end());

//     return result;
// }
