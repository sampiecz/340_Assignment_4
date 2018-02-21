/***********************************************************
 CSCI 340 - Assignment 4 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: February 22, 2018
 
 Purpose: 
 ************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using std::string;
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::setw;

#include "assignment4.h"
int main() {
    Queue q;
    string op;
    int val = 0;
 
   cout << "operation -- size front end" << endl;
   cin >> op;
   while ( !cin.eof() ) {
        if ( op == "push" ) {
            cin >> val;
            q.push( val );
            cout << op << " " << val << "    -- ";
        }
        else if ( op == "pop" ) {
            q.pop();
            cout << op << "       -- ";
        }
        else {
            cerr << "Error input: " << op << endl;
            return 1;
        }
        cout << setw(3) << q.size() << setw(5) << q.front() << setw(5) << q.back() << endl;
        cin >> op;
    }

    while ( !q.empty() )
        q.pop();

    return 0;
}


/***************************************************************
 Empty method 

 Use: Says wether or not the object is empty. 

 Parameters: No parameters. 

 Returns: A bool stating wether or not the object is empty.
***************************************************************/
bool Queue::empty() const
{
    if (s1.empty() && s2.empty())
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

 Returns: Sum of s1 & s2 
***************************************************************/
int Queue::size() const
{
    return s1.size() + s2.size();
}

/***************************************************************
 Front method 

 Use: Returns the front object in the qArray. If the object is
 empty it throws an error. 

 Parameters: No parameters. 

 Returns: qArray[qFront] so the front object in the array.
***************************************************************/
int Queue::front() 
{
    if(s2.empty())
    {
        s2.swap(s1);
    }

    return s2.top();
}

/***************************************************************
 Back method 

 Use: Returns the back item in the array. If it doesn't exist
 it throws an error.  

 Parameters: No parameters. 

 Returns: qArray[qBack] the back item of the array.
***************************************************************/
int Queue::back()
{
    return s1.top(); 
}

/***************************************************************
 Push method 

 Use: Pushes a new item to the Queue object. 

 Parameters: Reference to a constant template called val. 

 Returns: No return.
***************************************************************/
void Queue::push(const int& val)
{
    s1.push(val);    
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
    if(s2.empty())
    {
        s2.swap(s1);
    }

    s2.pop();
}
