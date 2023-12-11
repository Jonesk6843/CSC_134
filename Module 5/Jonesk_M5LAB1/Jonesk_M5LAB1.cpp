#include <iostream>
#include <string>
using namespace std;
/*
Kent Jones
M5LAB1
CSC-134
10/23/23
*/

// declaring functions
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_kitchen();
void choice_open_fridge();
void choice_livingRoom();
void choice_go_upstairs();
void choice_hallway();
void choice_room_1();
void choice_room_2();
void choice_open_toybox();
void choice_room_3();

int main()
{
    cout << "M5T1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu()
{
    // Declaring variables
    string choice;

    // Presenting choice
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it and go home" << endl;
    cout << "Choose: ";
    cin >> choice; // User Input
    if (choice == "1")
    {
        choice_front_door();
    }
    else if (choice == "2")
    {
        choice_back_door();
    }
    else if (choice == "3")
    {
        choice_go_home();
    }
    else
    {
        cout << "Don't just stand there..." << endl;
        main_menu();
    }
}

void choice_front_door()
{
    // Declare choice Variable
    string choice;

    // Present Choices
    cout << "Try the front door." << endl;
    cout << "It's locked." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_back_door();
    }
    else if (choice == "2")
    {
        choice_go_home();
    }
    else
    {
        cout << "You have to choose..." << endl;
        choice_front_door();
    }
}

void choice_back_door()
{
    cout << "The back door is slightly ajar." << endl;
    string choice;
    cout << "Do you:" << endl;
    cout << "1. Go in." << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1")
    {
        choice_kitchen();
    }
    else if (choice == "2")
    {
        choice_go_home();
    }
    else
    {
        cout << "Don't just stand there..." << endl;
        choice_back_door(); // recursion
    }
}

void choice_kitchen()
{
    // Declaring variables
    string choice;

    // Presenting choice
    cout << "Antique copper pots and pans hang from hooks, their surfaces gleaming in the soft, "
    << "filtered sunlight that pours through lace-curtained windows. The wooden floor creaks gently underfoot, adding to the sense of nostalgia." << endl;
    cout << "There's a rusty fridge in the corner." << endl;
    cout << "Do you:" << endl;
    cout << "1. Open the fridge" << endl;
    cout << "2. Go into the living room" << endl;
    cout << "3. Forget it and go home" << endl;
    cout << "Choose: ";
    cin >> choice; // User Input
    if (choice == "1")
    {
        choice_open_fridge();
    }
    else if (choice == "2")
    {
        choice_livingRoom();
    }
    else if (choice == "3")
    {
        choice_go_home();
    }
    else
    {
        cout << "Don't just stand there..." << endl;
        choice_kitchen();
    }
}

void choice_open_fridge ()
{
    // Declare choice Variable
    string choice;

    // Present Choices
    cout << "Gross! There's so many disgusting molded dishes and canned goods that have been in this fridge for some time!" << endl;
    cout << "Nothing more to see here...unless you're hungry" << endl;
    cout << "Do you:" << endl;
    cout << "1. Close the Fridge" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_kitchen();
    }
    else if (choice == "2")
    {
        choice_go_home();
    }
    else
    {
        cout << "You have to choose..." << endl;
        choice_open_fridge();
    }
}

void choice_livingRoom()
{

    // Declare choice Variable
    string choice;

    // Present Choices
    cout << "You're in a living room. The air is thick with the scent of aged wood and history." << endl;
    cout << "A window, draped in heavy, moth-eaten curtains, offers a glimpse of the overgrown garden outside. The pale moonlight seeps through the glass, painting the room with a ghostly glow." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go upstairs" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_go_upstairs();
    }
    else if (choice == "2")
    {
        choice_go_home();
    }
    else
    {
        cout << "You have to choose..." << endl;
        choice_livingRoom();
    }
}

void choice_go_upstairs()
{
    // Declare choice Variable
    string choice;

    // Present Choices
    cout << "You walk up the rickity staircase. Each stair creaking louder than the last." << endl;
    cout << "You stand in a hallway with three rooms." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check room 1" << endl;
    cout << "2. Check room 2" << endl;
    cout << "3. Check room 3" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_room_1();
    }
    else if (choice == "2")
    {
        choice_room_2();
    }
    else if (choice == "3")
    {
        choice_room_3();
    }
    else
    {
        cout << "You have to choose..." << endl;
        choice_hallway();
    }
}
void choice_hallway()
{
    // Declare Variables
    string choice;

    // Present Choices
    cout << "You stand in a hallway with three rooms. It's a lot dustier than you thought..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check room 1" << endl;
    cout << "2. Check room 2" << endl;
    cout << "3. Check room 3" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_room_1();
    }
    else if (choice == "2")
    {
        choice_room_2();
    }
    else if (choice == "3")
    {
        choice_room_3();
    }
    else
    {
        cout << "Don't Just stand there..." << endl;
        choice_hallway();
    }
}
void choice_room_1()
{
    // Declare choice Variable
    string choice;

    // Present Choices
    cout << "The air is damp, and the walls are coated with faded, peeling floral wallpaper that seems"
        << "to tell tales of bygone eras. A rusty, clawfoot bathtub with ornate feet takes center stage, its enamel chipped in places, revealing the history of countless baths." << endl;
    cout << "1. Turn around" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_hallway();
    }
    else
    {
        cout << "You have to choose..." << endl;
        choice_room_1();
    }
}

void choice_room_2()
{
    // Declare choice Variable
    string choice;

    // Present Choices
    cout << "It appears to be a child's room." << endl;
    cout << "There's toys strung about on the floor, drawing of a forgotten family, and broken crayons." << endl;
    cout << "Right beside the kiddy bed, there is a closed trunk with the faded word, ''Toys'' written on it." << endl;
    cout << "Do you:" << endl;
    cout << "1. Open the chest" << endl;
    cout << "2. Go back into the hallway" << endl;
    cout << "3. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_open_toybox();
    }
    else if (choice == "2")
    {
        choice_hallway();
    }
    else if (choice == "3")
    {
        choice_go_home();
    }
    else
    {
        cout << "Don't just stand there..." << endl;
        choice_room_2();
    }
}

void choice_open_toybox()
{
    cout << "THERE'S SPIDER'S IN THE TOY CHEST!!!! SOME ARE CRAWLING ON YOUR ARM!" << endl;
    choice_go_home();
}
void choice_room_3()
{
    // Declare choice Variable
    string choice;

    // Present Choices
    cout << "The room is cozy, with walls adorned in delicate, vintage floral patterns,"
    << " their colors muted by time. A sense of tranquility permeates the space, as if the room itself has a lifetime of stories to tell." << endl;
    cout << "Nothing more to see here..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go back into the hallway" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice; // User Choice
    if (choice == "1")
    {
        choice_hallway();
    }
    else if (choice == "2")
    {
        choice_go_home();
    }
    else
    {
        cout << "Don't just stand there..." << endl;
        choice_room_3();
    }
}
void choice_go_home() {
    cout << "This adventure is getting too spooky for you. So you decide to high tail it out of there." << endl;
}
