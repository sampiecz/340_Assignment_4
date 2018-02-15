/***********************************************************
 CSCI 340 - Assignment 4 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: February 22, 2018
 
 Purpose: 
 ************************************************************/
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
