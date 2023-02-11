//
// Created by 12145 on 2/11/2023.
//

#ifndef PROGRAM4_P4_H
#define PROGRAM4_P4_H
#include<string>
class sNode{
  private: 
  std::string text;
  int h;
  sNode* left, *right;   // left and right children pointers
};
class sBST{
private: 
  int treeCount;
  sNode*root;
  std::string findMin(sNode *ptr);
  bool insert(sNode* p); 
  bool remove(sNode* text);
  int isIn();
  void printIt();
  void  clear(sNode* p);
 
};


