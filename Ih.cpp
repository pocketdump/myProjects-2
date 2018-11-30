//Inode.h backup 

//File: INode.h
//Author: Varisara Muangrat
// Project 2 CMSC 341
//Section: 03
//Email: varisam1@umbc.edu
#ifndef _INODE_H_
#define _INODE_H_
#include "DNode.h"
class INode {

    public:
        //Data: pointer to data-level node, points to first node in the list
        DNode *m_dNode;
        //length of innerLists
        int m_numInner;
        //default constructor
        INode();
        //copy constructor
        INode(DNode data);
        const INode& operator=(const INode& rhs);
        int getSize();
        void add(const Int341& data);
        INode remove(const Int341& data);
        Inode removeAt(int pos);
        INode& operator [](int pos);
        int indexOf(const Int341& data);
        int numItems();
    private:

};
#endif
