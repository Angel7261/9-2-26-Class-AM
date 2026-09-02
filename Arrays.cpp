#include <iostream>

using namespace std;

 void addOneAndPrint(int number) {
    number = number + 1;
    cout << "\nThe number is now: " << number << endl;

 }

 void addOneToArrayAndPrint(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] += 1;
     }
     cout << "\nThe array is now: " << endl;
     for(int i = 0; i , size ; i++) {
        cout << endl << arr[i];
     }
 }
 int main (){
    
    // int myArray[10] = {0,2,4,6,8,10,12,14,16,18};

    // myArray[0] = 5;

    // myArray[5] = 2;

    // cout << "The thing at index 0 is: " << myArray[0] << endl;

    // cout << "The thing at index 5 is: " << myArray[5] << endl;

    // for(int x; x < 10; x++){
    //     cout << myArray[x] << endl;
    // }
    // const int SIZE = 5;
    // int numbers[SIZE];

    // std::cout << "Enter " << SIZE << " numbers: " << std::endl;
    // for (int i = 0;i < SIZE; i++){
    //     cout << "Number " << (i + 1) << ":";
    //     std::cin >> numbers[i];
    // }

    // for (int i = 0; i <SIZE; i++){
    //     std::cout << "Number " << (i+ 1) << ": " << std::endl;
    //     std::cout << numbers[i];
    // }

    int x = 5;

    cout << endl << "The value of x before is: " << x << endl;

    addOneAndPrint(x);

    cout << endl << "The value of x after is: " << x << endl;


    int myArray[3] = {2,4,6};

    cout << endl << "The value of myArray before is: " << endl;
    for(int i = 0; i < 3; i++) {
        cout << endl << myArray[i];
    }

    addOneToArrayAndPrint(myArray, 3);

    cout << endl << "The value of myArray after is: " << endl;
    for(int i = 0; i < 3; i++) {
        cout << endl << myArray[i];
    }

    cout << endl;
    return 0;
 }