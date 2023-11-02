#include <iostream>
using namespace std;
/*
Kent Jones
M5LAB2 -
CSC-134
11/1/23
The program will ask the user to enter the width and length of a rectangle. It
will then calculate the area. Finally it will display all three values in well
formatted output.
*/

// Declaring functions
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() 
{
  // Declaring variables
  double length, width, area; // The rectangle's length, width, and area

  // Get the rectangle's length.
  length = getLength();

  // Get the rectangle's width.
  width = getWidth();

  // Get the rectangle's area.
  area = getArea(length, width);

  // Display the rectangle's data.
  displayData(length, width, area);
  return 0;
}

double getLength() 
{
  double length;
  cout << "Enter Length: ";
  cin >> length;
  return length;
}

double getWidth() 
{
  double width;
  cout << "Enter Width: ";
  cin >> width;
  return width;
}

double getArea(double length, double width) 
{ 
   return length * width; 
}

void displayData(double length, double width, double area) 
{
  cout << "Rectangle's Length: " << length << endl;
  cout << "Rectangle's Width: " << width << endl;
  cout << "Area of the rectangle: " << area << endl;
}