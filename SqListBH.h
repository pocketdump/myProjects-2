//File: SqList.h
//Author: Varisara Muangrat
// Project 2 CMSC 341
//Section: 03
//Email: varisam1@umbc.edu
#ifndef _SQLIST_H_
#define _SQLIST_H_
#include "INode.h"
#include <list>

class SqList {
    public:
    //default constructor
    SqList();
    //copy constructor
    SqList(const SqList& other);
    //overloaded assignment operator
    const SqList& operator=(const SqList& rhs);

    //MAY OR MAY NOT BE REQUIRED
    ~SqList();
    //insert
    void add(const Int341& data);
    
    //Consolidate shouldn't take parameters
    //It should go through the INode List and manually
    //Compare sizes and consolidate if needed.
    void consolidate();
    
    //remove
    Int341 remove(const Int341& data);
    //remove item at positon
    Int341 removeAt(int pos);
    //overloaded operator
    Int341& operator[](int pos);
    //index of (first occurence)
    int indexOf(const Int341& data);
    //returns number of items
    int numItems();
    //debugging member function
    void dump();
    //debugging member function
    void inspector();
    //Student Defined Member Funcs
    //returns number of data-level items
    //int getNumDataItems(){
        //iterate through inner list, length is from pointer to pointer


    private:

    //templated list object
    list<INode>m_iList;

    //keep track of number of top-level lists
    int m_INode_size;
    //keep track of number of data-level lists
    int m_DNode_size;
};
#endif
