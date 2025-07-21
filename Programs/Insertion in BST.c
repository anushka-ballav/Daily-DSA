#include<stdio.h>
#include<stdlib.h>
int main() {
    struct Node* root = new_node(100);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 500);
    inorder(root);
    return 0;
}
struct Node {
    int key;
    // Function to create a new BST node
    struct Node* left; 
    struct Node* right;
};
struct Node* new_node(int item) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> key = item;
    temp -> left = temp -> right = NULL;
    return temp;
}
struct Node* insert(struct Node* node, int key) {
    // If the tree is empty, return a new node
    if(node == NULL) {
        return new_node(key);
    }
    // If the key is already present, return the node
    if(node -> key == key) {
        return node;
    }
    // If key is greater than current node
    if(node -> key < key) {
        node -> right = insert(node -> right, key);
    }
    // If key is less than equal to current node
    else {
        node -> left = insert(node -> left, key);
    }
    return node;
}
void inorder(struct Node* root) {
    if(root != NULL) {
        inorder(root -> left);
        printf("%d", root -> key);
        inorder(root -> right);
    }
}