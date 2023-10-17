#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <algorithm>


using std::cin;
using std::cout;
using std::string;


void Cignore_max() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');      // Clears input buffer, better than using fflush(stdin) and std::ws in getline()
}
string uppercase_for_loop(string normal_text) {
    for (int i = 0; i < normal_text.length(); i++) {                    // Two different method same results
        normal_text[i] = toupper(normal_text[i]);                       // toupper() method via array for loop
    }

    //#transform(name.begin(), name.end(), name.begin(), ::toupper); // transform() method directly ---need <algorithm> header file---

    return normal_text;
}

char ABCarray(char array[], int size_array) {
    for (int i = 0; i < size_array; i++) {
        cout << array[i] << "\t\t";
    }
    return 0;
}
int searchArray(int array[], int array_size, int input_num_find) {
    for (int i = 0;i < array_size;i++) {
        if (array[i] == input_num_find) {
            return i;
        }
    }
    return -1;
}

string Printarray(string array[], int size) {
    for (int i = 0; i < size; i++)
    {
        return array[i];
    }
}

int main()
{
    string cars[5] = { "Dodge","Honda","BMW" };                          //* Arrays -- when manually adding items in a array, its size must be declared!
    int arr[] = { 0,1,8,3,4,7,9,7,10 };

    cars[0] = "Hyundai";

    cout << cars[0] << " ";
    cout << cars[1] << " ";
    cout << cars[2] << " \n\n";

    cars[3] = "Volvo";
    cars[4] = "Maserati";

    cout << sizeof(arr) / sizeof(arr[0]) << " items in a array\n\n";

    cout << sizeof(string) << " bytes --string\n";                      //* sizeof() function is used to show the size of an object/data type/variable/class.
    cout << sizeof(double) << " bytes --double\n";
    cout << sizeof(int) << " bytes --int\n";
    cout << sizeof(char) << " bytes --char\n";
    cout << sizeof(bool) << " bytes --bool\n\n";

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";                                                       //* iterate an array --two methods.
    for (int i : arr) {
        cout << i << "\t";
    }

    cout << "\n\n";
    char ABC[] = { 'A','B','C','D','E','F' };                           //* Passing an array to a function --always need to give its size as a parameter.
    int ABCsize = sizeof(ABC) / sizeof(ABC[0]);                         //? Array has become a *pointer with no idea of its size, hence specify its size.
    ABCarray(ABC, ABCsize);

    int inputnum;                                                       //* Searching an element in an array ie.Linear Search.
    int index;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "\n\nEnter element to search for: ";
    cin >> inputnum;
    index = searchArray(arr, size, inputnum);
    if (index != -1) {
        cout << "Your number is at index : " << index << "\n\n";
    }
    else {
        cout << "Your number was not found in array !\n\n";
    }

    std::sort(arr, arr + size);                                         //* Sorting an array --greater<int>()-- descending order ___Basic Sorting___
    std::sort(arr, arr + size, std::greater<int>());
    for (int i : arr) {
        cout << i << " ";
    }
    cout << "\n\n";


    string foods[10];
    fill(foods, foods + 6, "pizza");                                   //* Fill function--takes 3 parameters.

    int Strsize = sizeof(foods) / sizeof(foods[0]);                     // Prints only filled items in a array, leaves empty ones.
    for (int i = 0; !foods[i].empty(); i++)
    {
        cout << Printarray(foods, Strsize) << "\n";
    }
    cout << "\n\n";


    int matrix[][3] = { {1,2,3},                                        //* 2-D Arrays
                        {4,5,6},
                        {7,8,9} };
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    cout << rows << " " << columns << "\n\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }


    cout << "Address of matrix is " << &matrix << "\n";                 //* Memory Addresses


    return 0;
}
