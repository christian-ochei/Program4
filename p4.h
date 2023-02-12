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
    // points to the tree
    sNode*root;
    // find the minimum node function;
    std::string findMin(sNode *ptr);
    // call the insert node text function
    bool insert(std::string text, sNode*& node);
    // remove fuction to remove the text
    bool remove(sNode* text, string text);
    // returns true if the node with text value is in the tree.
    bool isIn();
    // print the function
    void printIt(sNode* node) const;
    // clear the function
    void clear(sNode* node);


public: 
    // constructor
     sBST();
    // destructor
    ~sBST();
    // call insert function
    bool insert(std::string text);
    // call remove function
    bool remove(std::string text);
    // call isIn function
    bool isIn(std::string text) const;
    // call print It function
    void printIt() const;
    // count the number of the nodes in a tree
    int count() const;
    // empty the tree;
    void clear();
};



