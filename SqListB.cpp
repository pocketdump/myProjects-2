//File: SqList.cpp
//Author: Varisara Muangrat
// Project 2 CMSC 341

#include "SqList.h"
#include "INode.h"
#include <list>
#include <iterator>
using namespace std;

//default constructor
SqList::SqList(){
    m_numInner = 0;
    m_numTop = 0;
}
 //copy constructor,exact replica
SqList::SqList(const SqList& other){
  //using size to iterate through inner list
    //copy over member variables
    m_numInner = other.m_numInner;
    m_numTop = other.m_numTop;
    list<INode>m_iList = other.m_iList;
    //copy sq list : iterate over top list
    for(list<INode>::iterator topList = m_iList.begin();topList != m_iList.end();++topList){
        //iterate over each top node by dereferencing nodes
        for(list<INode>::iterator inner = topList->begin(); inner != topList->end(); inner++\
){
            //only copy elements within range of pointers
            for(int i = 0; i < m_numInner; i++){
                m_DNode = DNode()
            }
        }
    }

}
//overloaded assignment operator
const SqList& SqList::operator=(const SqList& rhs) {
    if(this == &rhs){
        return *this;
    }
    //member variables
    m_numInner = rhs.m_numInner;
    m_numTop = rhs.m_numTop;
    m_iList = rhs.m_iList; //doesnt seem right?
    return *this

}

//destructor
SqList::~SqList(){
}
//insert
void SqList::add(const Int341& data){
// loop through top list of INodes, choose which node to call Inode's add on
}
//consolidate
void SqList::consolidate(const Int341& data){
    //traverse through top list
    //for(topList = m_iList.begin();topList != m_iList.end(); topList++){
    //check if empty
    }

}
//remove
Int341 SqList::remove(const Int341& data){}
//remove item at positon
Int341 SqList::removeAt(int pos){}
//overloaded operator
Int341& operator SqList::[](int pos){}
//index of (first occurence)
int SqList::indexOf(const Int341& data){}
//returns number of items
int SqList::numItems(){}
//debugging member function
void SqList::dump(){}
//debugging member function
void SqList::inspector(){}

