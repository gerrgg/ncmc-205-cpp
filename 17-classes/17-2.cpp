/*
Greg Bastianelli
09-14-2019
17.2 - Complete and testDate.  Reimplement it with ‘‘number of days after 1/1/1970’’ repre-sentation.
*/

#include <ctime>
#include <iostream>
class Date
{
    private:
        int days_since_epoch;

    public:
        Date()
        {
            // get seconds since 1-1-1970, convert to days.
            days_since_epoch = std::time(0) / 60 / 60 / 24;
            std::cout << days_since_epoch << " days since unix epoch" << std::endl;
        }
};

int main() {
    Date();
}
