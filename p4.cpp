// Class Name: CSC 255 (Datastructures).
// Project: Program 4
// author: Christian Ochei and Habtamu Wario

#include "p4.h"
#include <string>
#include <iostream>
using namespace std;

// author: Christian Ochei and Habtamu Wario
sNode::sNode(string text){
    // Initialize this node with default values
    this->text = text;
    left = nullptr;
    right = nullptr;
    h = 0;
}
// author: Christian Ochei and Habtamu Wario
string sBST::findMin(sNode * ptr){
    string minVal;
    // If this node has a left then, minimum has not been reached
    if (ptr->left){
        // Recurse findMin at left node until there is no more left
        minVal = findMin(ptr->left);
    }else{
        // If this node does not have a left child then
        minVal = ptr->text;
    }
    return minVal;
}
// author: Christian Ochei
bool sBST::insert(string text, sNode*& node){
    bool retVal;
    if (node){
        int compare = text.compare(node->text);
        if (compare > 0){
            // insert at right
            retVal = insert(text,node->right);
        }else if (compare < 0){
            // insert at left
            retVal = insert(text,node->left);
        }else{
            // Text matches so false gets returned
            retVal = false;
        }
    }else{
        // If we are at an invalid node, replace this nullptr with a new node containing text
        sNode* newNode = new sNode(text);
        node = newNode;
        retVal = true;
    }
    return retVal;
}
// author: Christian Ochei and Habtamu Wario
void sBST::printIt(sNode* node) const{
    if (node){
        // If this node exists, recursively print this node, with its left
        // and right children
        printIt(node->left);
        // print out this node if its valid
        cout << node->text << endl;
        printIt(node->right);
    }
}
// author: Christian Ochei and Habtamu Wario
void sBST::clear(sNode * node){
    // If this node exists, recursively destroy this node, together with
    // its left and right children
    if (node){
        clear(node->left);
        clear(node->right);
        // delete this node if it is valid
        delete node;
    };
}
// author: Christian Ochei and Habtamu Wario
// Public methods
sBST::sBST(){
    // Initialize tree with zero items
    treeCount = 0;
    root = nullptr;
}
// author: Christian Ochei and Habtamu Wario
sBST::~sBST(){
    // Recursively destroy all nodes
    clear(root);
}
// author: Christian Ochei
bool sBST::insert(string text){
    bool couldInsert;

    // Recursively insert
    couldInsert = insert(text,root);

    // increment tee count if text was able to be inserted
    if (couldInsert){
        treeCount ++;
    }
    return couldInsert;
}
// author: Christian Ochei and Habtamu Wario
bool sBST::remove(string text){
    return false;
}
// author: Christian Ochei and Habtamu Wario
bool sBST::isIn(string text) const{
    return false;
}

// author: Christian Ochei and Habtamu Wario
void sBST::printIt() const{
    // Recursively prints node
    printIt(root);
}
// author: Christian Ochei and Habtamu Wario
int sBST::count() const{
    // Returns tree count
    return treeCount;
}

// author: Christian Ochei
void sBST::clear(){
    // Recursively clear all nodes in this Tree
    clear(root);

    // Clears the Node and resets variables
    treeCount = 0;
    root = nullptr;
}
