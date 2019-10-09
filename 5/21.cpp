// Greg Bastianelli
// 10-08-2019
// EX 5 Week 5
#include <iostream>
using namespace std;

class Square;
class Triangle;
class Circle;

class Shape{
    public:
        virtual void intersect(Square& b);
        virtual void intersect(Triangle& b);
        virtual void intersect(Circle& b);
};

class Square : public Shape{
    public:
        void intersect(const Square& b) const {
            cout << "collision with Square and Square" << endl;
        }
        void intersect(const Triangle& b) const {
            cout << "collision with Square and Triangle" << endl;
        }
        void intersect(const Circle& b) const {
            cout << "collision with Square and Circle" << endl;
        }
};

class Triangle : public Shape{
    public:
        void intersect(const Square& b) const {
            cout << "collision with Triangle and Square" << endl;
        }
        void intersect(const Triangle& b) const {
            cout << "collision with Triangle and Triangle" << endl;
        }
        void intersect(const Circle& b) const {
            cout << "collision with Triangle and Circle" << endl;
        }
};

class Circle : public Shape{
    public:
        void intersect(const Square& b) const {
            cout << "collision with Circle and Square" << endl;
        }
        void intersect(const Triangle& b) const {
            cout << "collision with Circle and Triangle" << endl;
        }
        void intersect(const Circle& b) const {
            cout << "collision with Circle and Circle" << endl;
        }
};


int main(){
    Shape* sq = new Square();
    Shape* ci = new Circle();

    return 0;
}