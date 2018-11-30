//INode Backup 
//File: INode.cpp
//Author: Varisara Muangrat
// Project 2 CMSC 341
//Section: 03
//Email: varisam1@umbc.edu
#include "INode.h"
#include "Int341.h"
#include "DNode.h"
#include <stdexcept>
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
const INode& INode::operator=(const INode& rhs) {

	if (this == &rhs) {
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
    DNode *current = m_dNode; //current pointer

    //check if equal to null
    if(m_dNode == NULL){
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
				m_dNode->m_next = item; 
				item->m_data = data;
				m_dNode = item; 
				current = item; 
				item->m_next = current; 
				
            }
}

//remove
INode INode::remove(const Int341& data){
	//return value type is Int341 to be stored here 
	Int341 rval; 
	//outer list
	for (list<list<Int341>>::iterator outerList = it.begin(); outerList != it.end(); outerList++) {
		list<Int341> innerL = *outerList; //innerlist using outer list
		for (list<Int341>::iterator innerList = lt.begin(); innerList!= lt.end(); innerList++) {
			//move pointers around, in order 
			if (innerList->m_next.m_data == data.m_data) {
				innerList->m_next = innerList->m_next->m_next; 
			}
			if (innerList->m_data == data.m_data) {
				rval = data.m_data;
			}
		}
	}
	return rval; 
	consolidate(); 
}

//remove item at positon
INode::removeAt(int pos){
	int counter = 0; 
	Int341 rpos; //return pos, value Int341  
	//out of bounds handling 
	if(pos > m_numInner || pos < 0){
		throw out of range("out of range");
	}else{
	//initialize both iterators to begin()
		list<list<Int341>>::iterator outerList = it.begin();
		list<Int341>::iterator innerList = Lt.begin();
		//
		while (counter <= pos) {
			list<Int341> &innerList = *outerList;
			counter += innerList.size();
			
			if (counter> pos) {
				
				int findList = counter - pos;
				int posit = innerList.size() - findList;
				innerIndex = Lt.begin();
				advance(Lt, posit);
				rpos = *Lt;
				//remove 
				innerList.erase(lt);
			}
			outerIndex++;
		}
		consolidate();
		return rpos;
	}

}
//overloaded operator
INode::INode& operator [](int pos){ //find at position
	int counter = 0;
	Int341 item;
	//error bounds checking 
	if(pos > m_numInner || pos < 0){
		throw out_of_range("Out of range");
	}else{
		for (list<list<Int341>>::iterator outerL = it.begin(); outerL!= it.end(); outerL++) {
			list<Int341> &innerList = *outerIndex;
			counter += innerList.size();
			if (counter > pos){ //find pos from list 
				int findList = counter - pos;
				int post = innerList.size() - findList;
				//initialize and go to position of the inner list which corresponds to pos of sqList
				list<Int341>::iterator innerIndex = innerList.begin();
				advance(innerIndex, post);
				&item = *innerIndex;
				return item;
			}
		}
	}
}

//index of (first occurence)
int INode::indexOf(const Int341& data){
	int found = 0;
	int i = -1;
	for (list<list<Int341>>::iterator outerL =it.begin(); outerL!= it.end(); it++) {
		list<Int341> innerL= *outerIndex;
		for (list<Int341>::iterator innerL= lt.begin(); innerL!= lt.end(); lt++) {
			
			if (innerIndex->m_data == data.m_data) {
				i = found;
				return found;
			}
			found++;
		}
	}
	return found;
}
//returns number of items
int INode::numItems(){
	int countC = 0;
	for (list<list<Int341>>::iterator outerL = it.begin(); outerL != it.end(); it++) {
		list<Int341> innerL = *outerIndex;
		for (list<Int341>::iterator innerL = lt.begin(); innerL != lt.end(); lt++) {
			count++; 
		}
	}
	return count; 
}

