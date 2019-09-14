#include <iostream>
class Init
{
    public:
        Init()
        {  std::cout << "Initialize" << std::endl;  }

        ~Init()
        {  std::cout << "Clean up";  }
};

Init init;

int main()
{
    std::cout << "Hello word!\n";
}
