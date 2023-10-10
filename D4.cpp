#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <algorithm>


using std::cin;
using std::cout;
using std::string;


void Cignore_max() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Clears input buffer, better than using fflush(stdin) and std::ws in getline()
}
string uppercase_for_loop(string normal_text) {
    for (int i = 0; i < normal_text.length(); i++) {                 //Two different method same results
        normal_text[i] = toupper(normal_text[i]);                    // toupper() method via array for loop
    }

    //#transform(name.begin(), name.end(), name.begin(), ::toupper); // transform() method directly ---need <algorithm> header file---

    return normal_text;
}

void Time_Table_Generator(int tables_max) {
    for (int i = 1; i <= tables_max; i++) {
        for (int j = 1; j < 11; j++)
        {
            cout << i << " x " << j << " = " << i * j << "\n";
        }
        cout << "\n";
    }
}
string Fullname(string s1, string s2, string s3) {
    return s1 + " " + s2 + " " + s3;
}

string UPP(string name1);                                           // Declare functions and use later on
string UPP(string name1, string name2);                             // Declare functions and use later on
string UPP(string name1, string name2, string name3);               // Declare functions and use later on

int main()
{
    srand(time(NULL));                                              // Random Numbers Generate. Use % to limit maximum number
    int random_numbers;
    random_numbers = rand() % 100 + 1;
    cout << "Here's a random number from (1-100) = " << random_numbers << "\n\n";


    int tt;                                                         // Void Functions
    cout << "Upto how many tables do you need : ";
    cin >> tt;
    Time_Table_Generator(tt);


    string fname, mname, lname;                                     // Type Functions
    cout << "Please enter first name : ";
    cin >> fname;
    cout << "Please enter middle name : ";
    cin >> mname;
    cout << "Please enter last name : ";
    cin >> lname;
    cout << "hello " << Fullname(fname, mname, lname) << "\n\n";


    cout << UPP(fname) << "\n";                                     // Function Overload
    cout << UPP(fname, mname) << "\n";
    cout << UPP(fname, mname, lname) << "\n\n";


    



    return 0;
}


string UPP(string name1) {
    return uppercase_for_loop(name1);
}
string UPP(string name1, string name2) {
    return uppercase_for_loop(name1) + " " + uppercase_for_loop(name2);
}
string UPP(string name1, string name2, string name3) {
    return uppercase_for_loop(name1) + " " + uppercase_for_loop(name2) + " " + uppercase_for_loop(name3);
}