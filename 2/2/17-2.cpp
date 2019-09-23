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
    Date& d = date;
    d.init(28, 06, 1994);
    d.to_str();
    d.add_month(13);
    d.to_str();
    d.add_year(99);
    d.to_str();
    d.add_day(1000);
    d.to_str();

    return 0;
}