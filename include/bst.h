#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_
#include <cassert>
template <typename T>
class BST {
 public:
  struct Node {
    T data;
    int count;
    Node* left;
    Node* right;
  }
 private:
  Node* root;
  Node* addNode(Node* root, T data) {
    if (root == nullptr) {
      root = new Node;
      root->data = data;
      root->count = 1;
      root->left = root->right = nullptr;
    } else if (root->value > data) {
      root->left = addNode(root->left, data);
    } else if (root->value < value) {
      root->right = addNode(root->right, data);
    } else {
      root->count++;
    }
    return root;
  }
  int depthTree(Node* root) {
    if (root == nullptr)
      return 0;
    if (root != nullptr) {
      int Lh = depthTree(root->left);
      int Rh = depthTree(root->right);
      if (Lh > Rh)
        return Lh + 1;
      else 
        return Rh + 1;
    }
  }
  int countNodes(Node* root, T data) {
    if (root == nullptr)
      return 0;
    else {
      if (root->data > data)
        return countNodes(root->left, data);
      if (root->data < data)
        return countNodes(root->right, data);
      return root->count;
    }
  }



















#endif  // INCLUDE_BST_H_
