#include <iostream>
using namespace std;
/*
Kent Jones
Norris
M6T2 - Rectangles classes and objects
11/29/23
*/

// Rectangle Class
class Rectangle
{
    private:
        double _width;
        double _length;
    public:
        void setWidth(double);
        void setLength(double);
        // *const = does not change the object
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};
// functions of the Rectangle class
void Rectangle::setWidth(double width)
{
    _width = width;
}
void Rectangle::setLength(double length)
{
    _length = length;
}
double Rectangle::getWidth() const
{
    return _width;
}
double Rectangle::getLength() const
{
    return _length;
}
double Rectangle::getArea() const
{
    double area = _width * _length;
    return area;
}

// Box Class
class Box
{
    private:
        double _length;
        double _width;
        double _height;
    public:
        void setLength(double);
        void setWidth(double);
        void setHeight(double);
        // *const = does not change the object
        double getLength() const;
        double getWidth() const;
        double getHeight() const;
        double getVolume() const;
};

// functions of the Box class
void Box::setWidth(double width)
{
    _width = width;
}
void Box::setLength(double length)
{
    _length = length;
}
void Box::setHeight(double height)
{
    _height = height;
}
double Box::getWidth() const
{
    return _width;
}
double Box::getLength() const
{
    return _length;
}
double Box::getHeight() const
{
    return _height;
}
double Box::getVolume() const
{
    double volume = _length *_width * _height;
    return volume;
}

// main()
int main()
{
    // Declare variables
    Rectangle r;
    Box b;
    double Rlength;
    double Rwidth;
    // Box class variables
    double Blength;
    double Bwidth;
    double Bheight;
    bool repeat = true;

    while (repeat == true) // input validation
    {
        cout << "===RECTANGLE===" << endl;
        // Ask for the user's input
        cout << "What is the rectangle's length?" << endl;
        cout << "> ";
        cin >> Rlength;
        cout << "What is the rectangle's width?" << endl;
        cout << "> ";
        cin >> Rwidth;

        if (Rlength <=0 || Rwidth <= 0) // Checks if user input is above or below the range of 1 and 12
        {
            cout << "ERROR! YOUR LENGTH OR YOUR WIDTH CAN NOT BE NEGATIVE!" << endl;
        }
        else // Set values once passed
        {
            r.setLength(Rlength);
            r.setWidth(Rwidth);
            repeat = false;
        }
    }
    // Display user input
    cout << "RECTANGLE LENGTH: " << r.getLength() << endl;
    cout << "RECTANGLE WIDTH: " << r.getWidth() << endl;
    cout << "RECTANGLE AREA: " << r.getArea() << endl;
    cout << "____________________________" << endl;

    // BOX PROGRAM
    repeat = true;
    cout << "===BOX===" << endl;
    while (repeat == true) // input validation
    {
        // Ask for the user's input
        cout << "What is the box's length?" << endl;
        cout << "> ";
        cin >> Blength;
        cout << "What is the box's width?" << endl;
        cout << "> ";
        cin >> Bwidth;
        cout << "What is the box's height?" << endl;
        cout << "> ";
        cin >> Bheight;

        if (Blength <=0 || Bwidth <= 0 || Bheight <=0) // Checks if user input is above or below the range of 1 and 12
        {
            cout << "ERROR! YOUR LENGTH, WIDTH, OR HEIGHT CAN NOT BE NEGATIVE!" << endl;
        }
        else // Set values once passed
        {
            b.setLength(Blength);
            b.setWidth(Bwidth);
            b.setHeight(Bheight);
            repeat = false;
        }
    }
    // Display user input
    cout << "BOX LENGTH: " << b.getLength() << endl;
    cout << "BOX WIDTH: " << b.getWidth() << endl;
    cout << "BOX HEIGHT: " << b.getHeight() << endl;
    cout << "BOX VOLUME: " << b.getVolume() << endl;
}
