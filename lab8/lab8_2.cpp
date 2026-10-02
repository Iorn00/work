#include <iostream>
using namespace std;

// abstract class
class Shape{
    public:
    virtual void draw() = 0;
};

// implement && Derived
class Rectangle: public Shape{
    public:   
    void draw() override{
        cout << "Drawing a Rectangle!" << endl;
    }
};

class Circle: public Shape{
    public:
    void draw() override{
        cout << "Drawing a Circle!" << endl;
    }
};

int main(){
    // Shape s;
    Rectangle rect;
    Circle circle;
    rect.draw();
    circle.draw();
    Shape* shapeptr = &rect;
    shapeptr -> draw();
    shapeptr = & circle;
    shapeptr -> draw();
    
    return 0;
}