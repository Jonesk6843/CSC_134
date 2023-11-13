#include <iostream>
#include <vector>
using namespace std;
/*
Kent Jones
M6T1 - Five Nights in For Loops
CSC-134
11/13/2023

 This program counts the occurrences of the name "Fredbear" over a span of five days.
 The program should prompt the user to input the number of occurrences of "Fredbear" for each day and then calculate the total count.
*/
void arrayVerison()
{
    // Declaring Variables
    const int NIGHTS = 5;
    int fredbearCount[NIGHTS];
    int fredbearSight;

    // Prompt the user for bear sightings
    for (int night = 1; night <= NIGHTS; night++)
    {
        cout << "How many times did Fredbear appear on night " << night << "?" << endl;
        cout << "> ";
        cin >> fredbearSight;
        fredbearCount[night] = fredbearSight;
    }
    cout << "------6:00 AM------" << endl;

    // Display inputted sighting for each night.
    for (int night = 1; night <= NIGHTS; night++)
    {
        cout << "Night " << night << ": " << fredbearCount[night] << endl;
    }
}
void vectorVersion()
{
    // Declaring Variables
    const int NIGHTS = 5;
    vector<int> fredBearCount(NIGHTS, 0); // 5 nights, 0 each <---Requires #include <vector>

    // Prompt the user for bear sightings
    cout << "-----VECTOR-----" << endl;
    for (int night = 1; night <= NIGHTS; night++)
    {
        cout << "How many times did Fredbear appear on night " << night << "?" << endl;
        cout << "> ";
        cin >> fredBearCount[night];
    }
    // Display inputted sighting for each night.
    for (int night = 1; night <= NIGHTS; night++)
    {
        cout << "Night " << night << ": ";
        cout << "Night " << night << ": " << fredBearCount[night] << endl;
    }
}

int main()
{
    arrayVerison();
    vectorVersion();
    return 0;
}
