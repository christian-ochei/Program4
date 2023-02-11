//
// Created by 12145 on 2/11/2023.
//

#include "p4.h"
#include <string>

using namespace std;

sNode::sNode(string text){
    this->text = text;
    left = nullptr;
    right = nullptr;
}

sBST::findMin(sNode * ptr){

}

sBST::insert(){

}

sBST::remove(){

}

sBST::isin(){

}

sBST::printIt(){

}

sBST::clear(sNode * node){
    if (node != nullptr){
        clear(node->left);
        clear(node->right);
        delete node;
    };
}

// Public methods
sBST::sBST(){

}

sBST::~sBST(){

}

bool sBST::insert(string text){

}

bool sBST::remove(string text){

}

bool sBST::isin(string text){

}

void sBST::printIt() const{

}

int sBST::count() const{

}


void sBST::clear(){
    clear(root);
}
