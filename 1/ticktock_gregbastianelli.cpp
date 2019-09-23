/*
Gregory Bastianelli
09/04/2019
CIS 205 Week #1
Notes: This required a bit of troubleshooting. My C++ knowledge is limited.
*/

#include <iostream>
using namespace std;

void ticktock() {
    // iterates from 1 to 100.
    for( int i = 1; i <= 100; i++ ) {
        // init string
        string str;

        // check for Tick or Tock
        if( i % 3 == 0 || i % 5 == 0 ){
            // append str when appropriate
            if( i % 3 == 0 ) str += "Tick";
            if( i % 5 == 0 ) str += "Tock";
        } else {
            // otherwise just output i
            str = to_string(i);
        }
        // clean output
        cout << str << endl;
    }
}

int main () {
    // init
    ticktock();
    return 0;
}

