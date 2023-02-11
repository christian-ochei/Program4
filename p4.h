#ifndef PROGRAM4_P4_H
#define PROGRAM4_P4_H
#include<string>
class sNode{
  private: 
  std::string text;
  int h;
  sNode* left, *right;   // left and right children
};
class sBST{
private: 
  int treeCount;
  sNode*root;
  std::string findMin(sNode *ptr);
  bool insert(sNode* p); 
  bool remove(sNode* text);
  bool isIn();
  void printIt();
  void  clear(sNode* p);
public: 
 sBST();
~sBST(); 
bool insert(std::string text);
bool remove(std::string text); 
bool isIn(std::string text) const; 
void printIt() const;
int count() const;
void clear(); 
 
};



