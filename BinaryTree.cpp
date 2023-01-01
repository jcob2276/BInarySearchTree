#include <iostream>

struct TreeNode {
	
	int val; // przechowuje wartości elementów
	TreeNode *left;
	TreeNode *right;
}

void BinaryTree::add(int val) {
  if (root == nullptr) {
    // Drzewo jest puste, tworzymy nowy element jako korzeń
    root = new TreeNode {val, nullptr, nullptr};
  } else if (val < root->val) {
    // Dodajemy element do lewego poddrzewa
    if (root->left == nullptr) {
      root->left = new TreeNode {val, nullptr, nullptr};
    } else {
      add(root->left, val);
    }
  } else if (val > root->val) {
    // Dodajemy element do prawego poddrzewa
    if (root->right == nullptr) {
      root->right = new TreeNode {val, nullptr, nullptr};
    } else {
      add(root->right, val);
    }
  } else {
    // Element już istnieje, ignorujemy operację
    return;
  }
}
