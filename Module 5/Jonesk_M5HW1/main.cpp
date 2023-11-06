#include <iostream>
#include <cmath>
using namespace std;
/*
Kent Jones
M5HW1 - GOLD
CSC-134
11/6/23
The program contains the following programs;
1. Calculates the average rainfall for three months.
2. Calculates the volume of a three dimensional hypperrectangle.
3. A program that asks the user to enter a number within the range of 1 through 10.
4. Geometry Calculator that calculates the Area of a Circle, Rectangle, and Triangle.
5. A program that asks the user for the speed of a vehicle (in miles per hour) and how many
hours it has traveled.
*/

int main()
{
    // Declaring functions
    void avgRainfall();
    void hyperrectangle();
    void inputValidation();
    void geoCalculator();
    void vehicleSpeed();

    // Declaring variables
    int choice;
    cout << "===H5HW1===" << endl;
    cout << "Choose a program." << endl
    << "1. Average Rainfall" << endl
    << "2. Volume of a hyperrectangle" << endl
    << "3. input Validation" << endl
    << "4. Geomatry Calculator" << endl
    << "5. Speed of a vehicle" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1)
    {
        avgRainfall();
    }
    else if (choice == 2)
    {
        hyperrectangle();
    }
    else if (choice == 3)
    {
        inputValidation();
    }
    else if (choice == 4)
    {
        geoCalculator();
    }
    else if (choice == 5)
    {
        vehicleSpeed();
    }
    else
    {
        cout << "Please enter a valid choice!" << endl;
        main();
    }
    return 0;
}

void avgRainfall()
{
    // Declaring variables
    string month1, month2, month3;
    double m1Rainfall, m2Rainfall, m3Rainfall, avgRainfall;

    // Get user input
    cout << "===Average Rainfall===" << endl;
    cout << "Enter Month: ";
    cin >> month1;
    cout << "Enter Rainfall for " << month1 << ": ";
    cin >> m1Rainfall;
    cout << "Enter Month: ";
    cin >> month2;
    cout << "Enter Rainfall for " << month2 << ": ";
    cin >> m2Rainfall;
    cout << "Enter Month: ";
    cin >> month3;
    cout << "Enter Rainfall for " << month3 << ": ";
    cin >> m3Rainfall;

    // Calculate and display values
    avgRainfall = (m1Rainfall + m2Rainfall + m3Rainfall) / 3.0;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avgRainfall << " inches." << endl;
}
void hyperrectangle()
{
    // Declaring Variables
    double length, width, height, volume;
    cout << "===Hyperrectangles===" << endl;

    //Get user input.
    do // Input validation that no measurement is negative
        {
            cout << "Enter Length: ";
            cin >> length;
            cout << "Enter Width: ";
            cin >> width;
            cout << "Enter Height: ";
            cin >> height;
            if (length < 0 || width < 0 || height < 0)
                {
                    cout << "ERROR! A value is negative!" << endl;
                }
        }
    while (length < 0 || width < 0 || height < 0);

    // Once passed, calculate and display answer
    volume = length * width * height;
    cout << "The volume of your rectangle is: " << volume;
}

void inputValidation()
{
    // Declare Variables
    int userNum;

    // Prompt the user to input a value (1-10)
    cout << "===Input Validation===" << endl;
    cout << "Enter a number between 1 through 10: ";
    cin >> userNum;
    switch (userNum)
    {
        case 1:
            cout << "The Roman numeral version of 1 is I." << endl;
        case 2:
            cout << "The Roman numeral version of 2 is II." << endl;
        case 3:
            cout << "The Roman numeral version of 3 is III." << endl;
        case 4:
            cout << "The Roman numeral version of 4 is IV." << endl;
        case 5:
            cout << "The Roman numeral version of 5 is V." << endl;
        case 6:
            cout << "The Roman numeral version of 6 is VI." << endl;
        case 7:
            cout << "The Roman numeral version of 7 is VII." << endl;
        case 8:
            cout << "The Roman numeral version of 8 is VIII." << endl;
        case 9:
            cout << "The Roman numeral version of 9 is IX." << endl;
        case 10:
            cout << "The Roman numeral version of 10 is X." << endl;
        default:
            cout << "Please enter a number within the range." << endl;
    }
}

void geoCalculator()
{
    // Declare variables
    int choice;

    // Main menu
    cout << "===Geography Calculator===" << endl;
    cout << "Choose a program." << endl
    << "1. Area of a Circle" << endl
    << "2. Area of a Rectangle" << endl
    << "3. Area of a Triangle" << endl
    << "4. Quit" << endl;
    cout << "> ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            {
                // Declaring variables
                double r, area;
                const double PI = 3.14;
                cout << "==AREA OF A CIRCLE===" << endl;
                cout << "Enter Circle's Radius: ";
                cin >> r;
                area = PI*(r * r);
                cout << "The Area of a Square is: " << area << ".";
                break;
            }
        case 2:
            {
                // Declaring variables
                double length, width, area;
                cout << "===AREA OF A RECTANGLE===" << endl;
                cout << "Enter Length: ";
                cin >> length;
                cout << "Enter Width: ";
                cin >> width;

                area = length * width;
                cout << "The Area of a Rectangle is: " << area << ".";
                break;
            }

        case 3:
            {
                // Declaring variables
                double base, height, area;
                cout << "===AREA OF A TRIANGLE===" << endl;
                cout << "Enter Base: ";
                cin >> base;
                cout << "Enter Height: ";
                cin >> height;

                area = (0.5) * height * base;
                cout << "The Area of a Triangle is: " << area << ".";
                break;
            }
        case 4:
            cout << "Goodbye!" << endl;
            main();
        default:
            cout << "Please enter a number within the range." << endl;
    }
}

void vehicleSpeed()
{
    // Declaring variables
    double speed, hoursDriven;

    // Prompt the user for vehicle speed and hoursDriven.
    cout << "===Vehicle Speed===" << endl;
    do
    {
        cout << "What is the speed of the vehicle in mph?: ";
        cin >> speed;
        cout << "How many hours has it traveled?: ";
        cin >> hoursDriven;
        if (speed < 0)
                {
                    cout << "ERROR! This program only calculates forward momentum. Not backwards!" << endl;
                }
        else if (hoursDriven < 1)
        {
            cout << "ERROR! Hours Driven must be at least 1!" << endl;
        }
    }
    while (speed < 0 || hoursDriven < 1);
    cout << "Hour\t\t" << "Distance Traveled" << endl;
    cout << "-------------------------------"<< endl;
    for (int i = 1; i <= hoursDriven; i++)
    {
        double distance = speed * i;
        cout<< i << "\t\t" << distance << endl;
    }
    cout << "-------------------------------"<< endl;
}

