#include <iostream>
#include <fstream>

using namespace std;

int y = 99;

void myFunction(int age, string name) {
    cout << "\nHello from within myFunction!\n";
    cout << "\nMy age is: " << age << endl;
    cout << "\nMy name is: " << name << endl;
}

int add(int numberOne, int numberTwo) {
    return (numberOne + numberTwo);
}

int calculateLeastCommonMultiple(int numberOne, int numberTwo) {

    // int y = 3;
    // cout << "\ny is: " << y << endl;

    int x = 1;
    while( (x % numberOne != 0) || (x % numberTwo != 0)) {
        x++;
    }
    return x;
}

int main() {

    // cout << "\ny is: " << y << endl;

    // int x = 5;

    // cout << "\nThe value of x is: " << x << endl;

    // x = calculateLeastCommonMultiple(x, 12);

    // while(true) {
    //     cout << endl << add(x,2) << endl;
    // }

    // cout << "\nThe value of x is: " << x << endl;

    // ofstream outputFile;
    // outputFile.open("README.md");

    // for (int i = 1; i <= 10; i++) {
    //     outputFile << i << std::endl; // Write the number and a newline to the file
    // }

    ifstream inputFile;
    inputFile.open("README.md");
    int number;

   // This is a standard C++ pattern for reading a file until the end
    while (inputFile >> number) {
        std::cout << number << std::endl;
    }

   inputFile.close();


    
    cout << endl;
    return 0;
}