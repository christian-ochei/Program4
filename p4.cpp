//
// Created by 12145 on 2/11/2023.
//

#include "p4.h"
#include <string>
#include <iostream>
using namespace std;

sNode::sNode(string text){
    this->text = text;
    left = nullptr;
    right = nullptr;
    h = 0;
}


string sBST::findMin(sNode * ptr){
    string minVal;
    if (ptr->left){
        minVal = findMin(ptr->left);
    }else{
        minVal = ptr->text;
    }
    return minVal;
}

bool sBST::insert(string text, sNode*& node){
    bool retVal = false;
    if (node){
        int compare = text.compare(node->text);
        if (compare > 0){
            retVal = insert(text,node->right);
        }else if (compare < 0){
            retVal = insert(text,node->left);
        }else{
            retVal = false;
        }
    }else{
        sNode* newNode = new sNode(text);
        node = newNode;
        retVal = true;
    }
    return retVal;
}

sBST::remove(){

}

sBST::isin(){

}

void sBST::printIt(sNode* node) const{
    if (node){
        printIt(node->left);
        printIt(node->right);
        cout << node->text << endl;
    }
}

void sBST::clear(sNode * node){
    if (node){
        clear(node->left);
        clear(node->right);
        delete node;
    };
}

// Public methods
sBST::sBST(){
    treeCount = 0;
    root = nullptr;
}

sBST::~sBST(){
    clear(root);
}

bool sBST::insert(string text){
    bool couldInsert;
    couldInsert = insert(text,root);
    if (couldInsert){
        treeCount ++;
    }
    return couldInsert;
}

bool sBST::remove(string text){
    treeCount --;
}

bool sBST::isin(string text){

}

void sBST::printIt() const{
    printIt(root);
}

int sBST::count() const{
    return treeCount;
}


void sBST::clear(){
    clear(root);
    treeCount = 0;
    root = nullptr;
}
