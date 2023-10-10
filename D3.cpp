#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <algorithm>


using std::cin;
using std::cout;
using std::string;

void Cignore_max() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
    int age;
    cout << "Whats your age : ";
    cin >> age;

    if (age >= 18)                                                  //* CONTROL FLOW
    {                                                               //if, else if, else.
        cout << "You are a adult\n";
    }
    else if (age <= 18)
    {
        cout << "You are a child\n";
    }
    else if (age == 0)
    {
        cout << "You ain't born bro\n";
    }

    string final_age = (age >= 18) ? "Adult" : "Silly Child";       //ternary operator
    cout << final_age << '\n';

    int odd_even = 8;
    odd_even % 2 ? cout << "ODD\n" : cout << "EVEN\n";
    cout << (odd_even % 2 ? "ODD" : "EVEN") << "\n";

    int month;                                                      //Switch-Case
    cout << "What month number you wanna know ? ";
    cin >> month;
    Cignore_max();                                                  //# Important function right there
    switch (month)
    {
    case 1:
        cout << "Its Jan";
        break;
    case 2:
        cout << "Its Feb";
        break;
    case 3:
        cout << "Its March";
        break;
    case 4:
        cout << "Its April";
        break;
    case 5:
        cout << "Its May";
        break;
    case 6:
        cout << "Its June";
        break;
    case 7:
        cout << "Its July";
        break;
    case 8:
        cout << "Its August";
        break;
    case 9:
        cout << "Its Sept";
        break;
    case 10:
        cout << "Its Oct";
        break;
    case 11:
        cout << "Its Nov";
        break;
    case 12:
        cout << "Its Dec";
        break;

    default:
        cout << "It ain't a month";
        break;
    }
    cout << "\n\n";



    string location;                                                //while loop
    while (location.empty()) {
        cout << "Please enter your location : ";
        getline(cin, location);
    }
    cout << location << "\n\n";



    int number;                                                     //do while loop
    do {
        cout << "Enter a positive number : ";
        cin >> number;
    } while (number < 0);
    cout << number << "\n\n";



    for (int i; i < 10; i++)                                        //for loop
    {
        cout << i << "\n";
    }
    cout << "\n\n";



    int array[] = { 1,2,3,4,5 };
    for (int i : array)                                             //foreach loop, only for iterable data set ie arrays,vectors,etc.
    {
        cout << i << " ";
    }
    cout << "\n\n";



    for (int i = 0; i < 20; i++) {                                  //break and continue
        if (i == 10) {
            continue;
        }
        if (i == 17) {
            break;
        }
        cout << i;
    }
    cout << "\n\n";



    for (int i = 1; i <= 7; i++) {                                  //nested loops
        for (int j = 1; j < 11; j++)
        {
            cout << i << " x " << j << " = " << i * j << "\n";
        }
        cout << "\n";
    }
    //Tables generator



    return 0;
}
