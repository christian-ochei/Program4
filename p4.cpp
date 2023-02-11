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


sBST::findMin(sNode * ptr){
    string minVal;
    if (ptr->left){
        minVal = findMin(ptr->left);
    }else{
        minVal = ptr->text;
    }
}

sBST::insert(){

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
    treeCount ++;
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
