#include <ctime>
#include <iostream>
class Date
{
    private:
        int days_since_epoch;

    public:
        Date()
        {
            days_since_epoch = std::time(0) / 60 / 60 / 24;
            std::cout << days_since_epoch << " days since unix epoch" << std::endl;
        }
};

int main() {
    Date();
}
