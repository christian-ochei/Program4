

#ifndef PROGRAM4_P4_H
#define PROGRAM4_P4_H
#include <string>
//creat a class node 
class sNode{
  // cdreat a priavte data taypes 
private:
  std::string text;
  //holds the height of the tree
  int h;
  //declare a pointers to the right and left childen
  sNode* left, *right;
  //call a constructor and pass the text;
  sNode(std::string text = "");
  //call a friend to the nodeclass 
  friend class sBST;
};

//creat a sBST class and make
class sBST{
  declare private items
private:
  //conut the number of tree
    int treeCount;
  //points to the tree
    sNode*root;
  //find the minimum node function;
    std::string findMin(sNode *ptr);
 //call the insert node text function
    bool insert(std::string text, sNode*& node);
  //remove fuction to remove the text
    bool remove(sNode* text, string text);
//returns true if the node with text value is in the tree.  
    bool isIn();
  //print the function
    void printIt(sNode* node) const;
  //clear the function
    void clear(sNode* node);


public: 
  //constructor
     sBST();
  //destructor
    ~sBST();
  //call insert function
    bool insert(std::string text);
  //call remove function
    bool remove(std::string text);
 //call isIn function 
    bool isIn(std::string text) const;
  //call print It function 
    void printIt() const;
  //count the number of the nodes in a tree
    int count() const;
  //empty the tree;
    void clear();
};



