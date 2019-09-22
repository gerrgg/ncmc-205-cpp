/*
Greg Bastianelli
http://gerrg.com/resume
22-09-2019
OBJ: Complete and testDate.  Reimplement it with ‘‘number of days after 1/1/1970’’ repre-sentation.
*/
#include "date.cpp"

int main()
{
    Date date;
    date.init(28, 06, 1994);
    date.to_str();
    date.add_month(13);
    date.to_str();
    date.add_year(99);
    date.to_str();
    // date.add_day(1000);
    date.to_str();

    return 0;
}