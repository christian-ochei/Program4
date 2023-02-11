#ifndef PROGRAM4_P4_H
#define PROGRAM4_P4_H
#include <string>

class sNode{
private:
  std::string text;
  int h;
  sNode* left, *right;   // left and right children
  sNode(std::string text = "");
  friend class sBST;
};


class sBST{
private: 
    int treeCount;
    sNode*root;
    std::string findMin(sNode *ptr);
    bool insert(std::string text, sNode*& node);
    bool remove(sNode* text);
    bool isIn();
    void printIt(sNode* node) const;
    void clear(sNode* node);

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



