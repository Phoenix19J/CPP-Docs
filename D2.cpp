#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <algorithm>


using std::cin;
using std::cout;
using std::string;

namespace value_i {
    int x = 2;
    int y = 3;
    int z = 4;
}

typedef string text_t;                                              //. Same thing ie defining type for a keyword
using numbers_t = int;                                              //. Same thing


int main()
{
    const double PI = 3.14159265359;                                //*constant makes a variable value never change ie.constant value
    const int minutes_per_hour = 60;
    cout << "There are " << minutes_per_hour << " minutes per hour" << "\n\n";


    int x, y, z;
    x = 1, y = 2, z = 3;
    int sum = value_i::x + value_i::y;                              //*Arithmetic Operators + - * /  
    cout << sum-- << "\n";
    cout << sum++ << "\n";                                          //Modulus(Remainder) % ++Increment by 1 --Decrement by 1
    cout << sum << "-Sum\n";
    int multi = x * y * z;
    cout << multi << "-Multi\n";


    sum *= 3;                                                       //Assignment operators = += -= *= /=
    cout << sum << "-Sum*3\n\n";


    cout << (x < 3 && x < 10) << '\n';                              //*Logical Operators and or not __BOOL VALUES__
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
    cout << sample_text.empty() << "\n";                            // Returns boolean value 1 or 0
    cout << sample_text.append("-added text by system") << "\n";
    cout << sample_text.at(1) << "\n";
    cout << sample_text.insert(0, "Its a me ") << "\n";
    cout << sample_text.find("s") << "\n";
    cout << sample_text << "--Final Sample Text\n";
    cout << sample_text.erase(0, 30) << sample_text.append("Hi Mom") << "\n\n";



    return 0;
}
