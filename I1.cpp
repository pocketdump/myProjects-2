//INode Backup 
//File: INode.cpp
//Author: Varisara Muangrat
// Project 2 CMSC 341
//Section: 03
//Email: varisam1@umbc.edu
#include "INode.h"
using namespace std;

//Default Constructor
INode::INode(){
    m_dNode = NULL;
    m_numInner = 0;
}

//Copy Constructor
INode::INode(INode other){
    m_dNode = other.m_dNode; //now points to data-level node passed in
    m_numInner = other.m_numInner;
}

//destructor
INode::INode(){

}

//assignment operator
const INode& INode::operator=(const INode& rhs){

  if(this == &rhs){
        return *this;
    }
    //member variables
    m_numInner = rhs.m_numInner;
    m_dNode = rhs.m_dNode;
    return *this

}
//return size
int INode::getSize(){
    return m_numInner;
}

void INode::add(const Int341& data){
    DNode *item = new DNode;
    DNode *current = m_dNode;

    //check if equal to null
    if(m_dNode == NULL){

        //DNode *item = new DNode;
        item->m_data = data;
        m_dNode = item; //set data-level pointer equal to item pointer

    } //check if items exist, compare the values and use pointers

        for(int i = 0; i < m_numInner; i++){
            //if data is less thatn what m_dNode is pointing to
            if( data < m_dNode->m_data){
                m_dNode = item;
                current = item;
                item->m_data = data;
                item->m_next = current;
                }
            }
            if(data > m_dNode->data){

            }
        }

//remove
INode INode::remove(const Int341& data){

}
//remove item at positon
INode::removeAt(int pos){

}
//overloaded operator
INode::INode& operator [](int pos){

}
//index of (first occurence)
int INode::indexOf(const Int341& data){}
//returns number of items
int INode::numItems(){}

