/*
Greg Bastianelli
09-14-2019
17.13 - Add init and clean up without modifiying the main function.
*/

#include <iostream>
class Init
{
    public:
        Init()
        {  std::cout << "Initialize" << std::endl;  }

        ~Init()
        {  std::cout << "Clean up";  }
};

// global variables are constructed before main and deconstructed after.
Init init;

int main()
{
    std::cout << "Hello word!\n";
}
