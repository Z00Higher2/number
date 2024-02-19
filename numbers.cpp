// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 5A
// Write a program numbers.cpp that defines a function
// bool isDivisibleBy(int n, int d);
// If n is divisible by d, the function should return true, otherwise return false.

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){ // declare the boolean fucntion that determines whether n is divisible by d or not

    if( d == 0 ){
        cout << "No" << endl;
        return false;
    }

    if (n % d == 0){ // if n is divisible by d

        cout << "Yes" << endl; // prints yes 
        return true; // return true

    } else{

        cout << "No" << endl; // prints no
        return false; // returns false;

    }
    

    return false; // return false
}


int main() {

    int num_1, num_2;

    cout << "Enter the first number: ";
    cin >> num_1;

    cout << "Enter the second number: ";
    cin >> num_2;

    cout << isDivisibleBy(num_1, num_2) << endl;

    return 0;

}