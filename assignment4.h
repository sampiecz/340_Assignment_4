/***********************************************************
 CSCI 340 - Assignment 4 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: February 22, 2018
 
 Purpose: Implement the Queue class using STL stacks. 
 ************************************************************/
#ifndef ASSIGNMENT4_H
#define ASSIGNMENT4_H 
#include <stack>

class Queue {
    private:
        std::stack<int> s1, s2;
    public:
        bool empty() const;
        int size() const;
        int front();
        int back();
        void push(const int& val);
        void pop();
};

#endif
