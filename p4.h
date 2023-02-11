//
// Created by 12145 on 2/11/2023.
//

#ifndef PROGRAM4_P4_H
#define PROGRAM4_P4_H

Class sNode{
  Private: 
  string text;
  int h;
  sNode* left, *right;   // left and right children pointers
};
class sBST{
Private: 
  int treeCount;
  sNode*root;
  string findMin(sNode *ptr);
   insert(sNode* p); 
   remove(sNode* text);
   isIn();
   printIt();
   clear(sNode* p);
  
Private members:
An integer “treeCount” to record the number of entries in the BST
 An sNode *root; to point to the tree of nodes.
 string findMin(sNode *ptr) which returns the minimum value in the subtree whose root node
is pointed to by ptr.
 insert(), remove(), isIn(), printIt(), and clear().
};

#endif //PROGRAM4_P4_H
