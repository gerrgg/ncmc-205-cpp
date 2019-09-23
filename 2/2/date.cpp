#include "date.hpp"


void Date::init(int dd, int mm, int yy)
{ d = dd; m = mm; y = yy; }

void Date::add_year(int n){
    y = y + n;
}

void Date::add_month(int n){
    int months_left = 12 - m;
    if( n > months_left ){
        this->add_year( n / 12 );
        this->add_month( n % 12 );
    } else {
        m = m + n;
    }
}

void Date::add_day(int n){
    /*
    Add n number of days to the initialized date
    */
    int days_left = 30 - d;
    int& count = n;
    if( count > days_left ){
        this->add_month( count / 30 );
        this->add_day( count % 30 );
    } else {
        d = d + count;
    }
}
void Date::to_str(){
    std::stringstream ss;
    ss << m << "-" << d << "-" << y;
    std::cout << ss.str() << std::endl;
}