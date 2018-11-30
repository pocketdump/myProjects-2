//Backup Dnode.h Backup 
//File: DNode.h
//Author: Varisara Muangrat
// Project 2 CMSC 341
//Section: 03
//Email: varisam1@umbc.edu

#ifndef _DNode_H_
#define _DNode_H_
#include "Int341.h"

class DNode {
	
    public:
		//default constructor
		DNode();
		//copy constructor
		DNode(DNode myData);
        
    private:
        //data stored inside Int341 object as an int
        Int341 m_data;
        //pointer to next data-level node
        DNode *m_next;

};

#endif

