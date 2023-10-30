#include <iostream>
#include <cmath>
using namespace std;
/*
Kent Jones
M5T2 - Void and return functions
Norris
10/30/23
*/

// Declaring functions
int square(int);
void print_answer(int num, int numSquared);

int main()
{
    // Declaring Variables

    cout << "M5T2: Functions" << endl;
    cout << "Number\t\tSquared" << endl;
    for (int num = 1; num <= 10; num++) // range from one to ten
    {
        print_answer(num, square(num));
    }

}
int square(int num) // Takes an int, and returns the square of that int (value returning)
{
    float answer = num * num;
    return answer;
}

void print_answer(int num, int numSquared) // Prints one line of the answer (void)
{
    cout << num << "^" << num << "\t\t" << numSquared << endl;
}
