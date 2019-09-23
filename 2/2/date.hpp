#include <iostream>
#include <sstream>

 class Date {
    int d, m, y;
    int days_in_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

 public:
    void init(int dd, int mm, int yy);
    
    void add_year(int n);
    void add_month(int n);
    void add_day(int n);

    void to_str();
};
