/*
Greg Bastianelli
http://gerrg.com/resume
22-09-2019

Code example unique_ptr2.cpp has some redundant code displaying the contents of objects. 
Write a funciton that displays whether or not the unique_ptr is empty. 
The function call will send the appropriate auto_ptr to the function.
*/

#include <memory>
#include <iostream>

class someObj
{
   public:
	int t;
	someObj(int x)
	{
		t = x;
		std::cout << "someObj created - t = " << t << std::endl;
	}
	
	void someObj::is_empty()
	{
		if(!this)
			std::cout << "objPtr1 is empty" << std::endl;
		else
			std::cout << "objPtr1 is not empty" << std::endl;	
	}

	~someObj()
	{
		std::cout << "someObj destroyed" << std::endl;
	}
};

int main()
{

	std::unique_ptr<someObj> objPtr1(new someObj(32)); // Create a unique_ptr
													// object through raw pointer

	int t1 = objPtr1->t;                            // Access the element
													// through unique_ptr
	std::cout << "t1 = " << t1 <<  std::endl;
	
//	std::unique_ptr<someObj> objPtr2 = objPtr; 		// Compile error- cannot copy
	
	std::unique_ptr<someObj> objPtr2;
	
	objPtr2.is_empty();
	
	objPtr2 = std::move(objPtr1);
	
	std::cout << "move completed..." << std::endl;
		
	if(!objPtr1)
		std::cout << "objPtr1 is empty" << std::endl;
	else
		std::cout << "objPtr1 is not empty" << std::endl;	
	
	if(!objPtr2)
		std::cout << "objPtr2 is empty" << std::endl;
	else
		std::cout << "objPtr2 is not empty" << std::endl;	
		
	return 0;
}
