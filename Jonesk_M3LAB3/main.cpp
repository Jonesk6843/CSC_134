#include <iostream>
using namespace std;
/*
CSC 134
M3LAB3 -
Kent Jones
9/27/23

Given a number grade 0-100, give the letter grade
*/
int main()
{
    // Declare variables
    int numGrade;
    string letterGrade;

    // Get the number grade
    cout << "Number Grade to Letter Grade" << endl;
    cout << "what is the number grade?: ";
    const int A_GRADE = 90;
    const int B_GRADE = 80;
    const int C_GRADE = 70;
    const int D_GRADE = 60;
    const int F_GRADE = 50 ;
    cin >> numGrade;

    // Convert it to a letter
        // if numGrade is an A
    if (numGrade >= A_GRADE && numGrade < 101)
    {
        letterGrade = "A";
    }
        // if numGrade is an B
    else if (numGrade >= B_GRADE && numGrade < A_GRADE)
    {
        letterGrade = "B";
    }
        // if numGrade is an C
    else if (numGrade >= C_GRADE && numGrade < B_GRADE)
    {
        letterGrade = "C";
    }
        // if numGrade is an D
    else if (numGrade >= D_GRADE && numGrade < C_GRADE)
    {
        letterGrade = "D";
    }
        // if numGrade is an F
    else if (numGrade < F_GRADE)
    {
        letterGrade = "F";
    }
    else
    {
        letterGrade = "NOT A lETTER GRADE";
    }

    // print the results
    cout << "A grade of " << numGrade;
    cout << " is " << letterGrade << endl;

    return 0;
}
