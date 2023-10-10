

// This a quick look document to revisit topics when needed
// More like personal short notes!

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>


namespace value_i {
    int x = 2;
    int y = 3;
    int z = 4;
}

using std::cin;
using std::cout;
using std::string;

typedef string text_t;                                              //. Same thing ie defining type for a keyword
using numbers_t = int;                                              //. Same thing

int main() {

    cout << "Hello World!" << '\n';                                 //[cout]-see output to print output [endl] ends line new line begins
    cout << "Hello \n";                                             //*Escape sequences \n,t,\ n-new line t-tab \-print[\]symbol
    cout << "Nice to meet you" << '\n';


    int x, y, z;                                                    //variables type int,double(float),char,string,bool
    x = 1, y = 2, z = 3;
    cout << x << y << z << '\n';
    cout << y << "\n";
    cout << z << '\n';

    const double PI = 3.14159265359;                                //constant makes a variable value never change ie.constant value
    const int minutes_per_hour = 60;
    cout << "There are " << minutes_per_hour << " minutes per hour" << "\n\n";


    string name;                                                    //*[cin]-see input ask user for some input, always need <string> library
    int age;
    cout << "Your age ? ";
    cin >> age;
    cout << "What is your full name : ";                            // use getline function to take input with spaces
    getline(cin >> std::ws, name);                                  // use getline with std::ws to remove any blank spaces
    cout << "Hii " << name << " you are " << age << "\n\n";


    // . Basic data types like number string boolean floats doubles are remember easily
    // . Doubles are more precise than floats but uses double space than floats 8 bytes


    int sum = value_i::x + y;                                       //*Arithmetic Operators + - * /  
    sum--;
    sum++;                                                          //Modulus(Remainder) % ++Increment by 1 --Decrement by 1
    cout << sum << "\n";


    sum *= 3;                                                       //Assignment operators = += -= *= /=
    cout << sum << "\n";


    cout << (x < 3 && x < 10) << '\n';                              //Logical Operators and or not
    cout << (x > 3 || x > 10) << '\n';                              //and && or || not !
    cout << !(x < 3 && x < 10) << "\n\n";                           //not reverses the result


    int correct_que = 13;                                           //*type conversion -- precede value with new data type (new_type)variable
    int total_que = 20;
    double score = (double)correct_que / total_que * 100;
    cout << score << "%\n\n";


    cout << std::max(4, 19) << "\n";                                //*Math many functions in cmath library except max and min are std
    cout << std::min(4, 19) << "\n";
    cout << sqrt(121) << "\n";
    cout << log10(1000) << "\n";
    cout << pow(2, 5) << "\n";
    cout << abs(-7) << "\n";
    cout << tan(M_PI / 4) << "\n";
    cout << round(12.19768) << "\n";
    cout << floor(12.1) << "\n";
    cout << ceil(12.1) << "\n\n";


    text_t sample_text = "Hi Mom";                                  //* Syntax ---> typedef type keyword; using keyword = type;
    cout << sample_text << "\n";                                    // Typedef is mainly replaced with USING keyword.
    numbers_t sample_number = 1;                                    // Naming convention when using typedef is 'keyword_t'
    cout << sample_number << "\n\n";


    cout << sample_text.length() << "\n";                           //* String Methods
    sample_text.clear();
    cout << name.empty() << "\n";                                   // Returns boolean value 1 or 0
    cout << name.append("-added text by system") << "\n";
    cout << name.at(1) << "\n";
    cout << name.insert(0, "Its a me ") << "\n";
    cout << name.find("s") << "\n";
    cout << name.erase(0, 3) << "\n\n";




    if (age >= 18)                                                  //* CONTROL FLOW
    {                                                               // if, else if, else, ternary operator, switch-case, while loops, do while loops, for loops.
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

    string final_age = (age >= 18) ? "You are adult" : "Hehe silly child!";
    cout << final_age << '\n';
    int odd_even = 8;
    odd_even % 2 ? cout << "ODD\n" : cout << "EVEN\n";
    cout << (odd_even % 2 ? "ODD" : "EVEN") << "\n";

    int month;
    cout << "What month number you wanna know ? ";
    cin >> month;

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
    cout << "\n";

    string surname;

    while (surname.empty()) {
        cout << "Please enter you're surname : ";
        std::getline(cin, surname);
    }


    cout << "hello" << name << surname << " " << "\n\n";




    return 0;
}
