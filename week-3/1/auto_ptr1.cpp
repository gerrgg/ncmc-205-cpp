/* 
Greg Bastianelli
http://gerrg.com/resume
22-09-2019
OBJ: Add code to function foo() in auto_ptr1.cpp to demonstrate if p1 == p2.
*/

#include<iostream>
#include <sstream>
#include<memory>        // for auto_ptr

using namespace std;

void foo()
{

    auto_ptr<int> p1(new int(42));
    auto_ptr<int> p2 = p1;

    cout << "p1: " << &p1 << '\n';
    cout << "p2: " << &p2 << '\n';
}

int main()
{
    foo();
    return 0;
}

