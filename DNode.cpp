//File: DNodeBackup.cpp
//Author: Varisara Muangrat
// Project 2 CMSC 341
//Section: 03
//Email: varisam1@umbc.edu
#include <stdexcept>
using namespace std;

#include "DNode.h"

//Default Constructor
DNode::DNode(){
    m_next = NULL;
};

//Copy Constructor
DNode::DNode(DNode myData); {
    m_data = myData.m_data;
    m_next = NULL;
};
