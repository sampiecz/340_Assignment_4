/***********************************************************
 CSCI 340 - Assignment 4 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: February 22, 2018
 
 Purpose: Implement the Queue class using STL stacks. 
 ************************************************************/
#ifndef ASSIGNMNET4_H
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

/***************************************************************
 Empty method 

 Use: Says wether or not the object is empty. 

 Parameters: No parameters. 

 Returns: A bool stating wether or not the object is empty.
***************************************************************/
bool Queue::empty() const
{
    if (qSize == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/***************************************************************
 Size method 

 Use: Returns Queue's size data member. 

 Parameters: No parameters. 

 Returns: qSize
***************************************************************/
size_t Queue::size() const
{
    return qSize;
}

/***************************************************************
 Front method 

 Use: Returns the front object in the qArray. If the object is
 empty it throws an error. 

 Parameters: No parameters. 

 Returns: qArray[qFront] so the front object in the array.
***************************************************************/
const Queue::front() const 
{
    if (empty())
    {
        throw underflow_error("Underflow_Error from front()");
    }

    return qArray[qFront];
}

/***************************************************************
 Back method 

 Use: Returns the back item in the array. If it doesn't exist
 it throws an error.  

 Parameters: No parameters. 

 Returns: qArray[qBack] the back item of the array.
***************************************************************/
const Queue::back() const
{
    if (empty())
    {
        throw underflow_error("Underflow_Error from back()");
    }
    return qArray[qBack];
}

/***************************************************************
 Push method 

 Use: Pushes a new item to the Queue object. 

 Parameters: Reference to a constant template called val. 

 Returns: No return.
***************************************************************/
void Queue::push(const val)
{
    if (qSize == qCapacity)
    {
        if (qCapacity == 0)
        {
            reserve(1);
        }
        else
        {
            reserve(qCapacity * 2);
        }
    }

    qBack = (qBack + 1) % qCapacity;
    qArray[qBack] = val; 
    ++qSize;
}

/***************************************************************
 Pop method 

 Use: If empty thow underflow error. Otherwise pop the next
 object off the Queue ADT. 

 Parameters: No parameters. 

 Returns: No return.
***************************************************************/
void Queue::pop()
{
    if (empty())
    {
        // You left off here
        throw underflow_error("Underflow_Error on empty().");
    }

    qFront = (qFront + 1) % qCapacity;
    --qSize;
}

#endif
