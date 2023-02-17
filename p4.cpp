// Class Name: CSC 255 (Datastructures).
// Project: Program 4
// Author: Christian Ochei and Habtamu Wario

#include "p4.h"
#include <string>
#include <iostream>
using namespace std;

// Author: Christian Ochei
sNode::sNode(string text){
    // Initialize this node with default values
    this->text = text;
    left = nullptr;
    right = nullptr;
    h = 0;
}


// Author: Christian Ochei and Habtamu Wario
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

// Author: Christian Ochei
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

//Author habtamu heyi
bool sBST::remove(sNode* p, string text) {
    bool rc = false;
    if (p) {
        // Check if the node passed is less than the root
        if (text < p->text) {
            // If so, remove left through recursion
            rc = remove(p->left, text);
        }
        // Else if the node value to be deleted is greater than that of the root node
        else if (text > p->text) {
            // Remove the right child value
            rc = remove(p->right, text);
        }
        // If the tree has only a right child
        else if (p->left == nullptr) {
            sNode* temp = p->right;
            delete p;
            p = temp;
            rc = true;
        }
        // If the tree has only a left child
        else if (p->right == nullptr) {
            sNode *temp = p->left;
            delete p;
            p = temp;
            rc = true;
        }
        else {
            // If the tree has two children
            sNode *temp = p->right;
            while (temp->left) {
                temp = temp->left;
            }

            p->text = temp->text;
            rc = remove(p->right, temp->text);
        }
    }
    return rc;
}
//Author; habtamu heyi
bool sBST::isIn(sNode* p, string text)  {
    // If the node is null, then the text is not in the tree
    if (!p) {
        return false;
    }

    // If the text is less than the current node's text, search the left subtree
    if (text < p->text) {
        return isIn(p->left, text);
    }
    // If the text is greater than the current node's text, search the right subtree
    else if (text > p->text) {
        return isIn(p->right, text);
    }
    // If the text matches the current node's text, then it's in the tree
    else {
        return true;
    }
}

bool sBST::isIn(string text) const {
    // Recursively check if the text is in the tree, starting from the root node
    return isIn(root, text);
}

// Author: Christian Ochei and Habtamu Wario
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
// Author: Christian Ochei and Habtamu Wario
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
// Author: Christian Ochei
// Public methods
sBST::sBST(){
    // Initialize tree with zero items
    treeCount = 0;
    root = nullptr;
}
// Author: Christian Ochei and Habtamu Wario
sBST::~sBST(){
    // Recursively destroy all nodes
    clear(root);
}
// Author: Christian Ochei
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
// Author: Habtamu Wario
bool sBST::remove(string text){
    return false;
}
// Author: Habtamu Wario
bool sBST::isIn(string text) const{
    return false;
}

// Author: Christian Ochei
void sBST::printIt() const{
    // Recursively prints node
    printIt(root);
}
// Author: Christian Ochei
int sBST::count() const{
    // Returns tree count
    return treeCount;
}

// Author: Christian Ochei
void sBST::clear(){
    // Recursively clear all nodes in this Tree
    clear(root);

    // Clears the Node and resets variables
    treeCount = 0;
    root = nullptr;
}
