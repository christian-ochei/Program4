// Class Name: CSC 255 (Datastructures).
// Project: Program 4
// author: Christian Ochei and Habtamu Wario

#ifndef PROGRAM4_P4_H
#define PROGRAM4_P4_H
#include <string>


class sNode{
private:
  std::string text;
  int h; // holds the height of the tree
  sNode* left, *right; // declare a pointers to the right and left childen
  sNode(std::string text = "");
  friend class sBST;
};

class sBST{
private:
    int treeCount; // count the total number of tree
    sNode*root;
    std::string findMin(sNode *ptr); // find the minimum node function
    bool insert(std::string text, sNode*& node);
    void printIt(sNode* node) const;
    void clear(sNode* node);

public: 
     sBST();
    ~sBST();
    bool insert(std::string text);
    bool remove(std::string text);
    bool isIn(std::string text) const;
    void printIt() const; // print out every node in tree, in ascending order
    int count() const; // count the number of the nodes in a tree
    void clear(); // empty the tree
};

#endif // PROGRAM4_P4_H
