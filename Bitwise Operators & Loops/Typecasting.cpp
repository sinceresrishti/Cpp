// Introduction
// 1. Allows you to change the data type of a variable from one type to another
// 2. Crucial when you need to perform operaions involving different data types, ensuring that the data is handled correctly

// Implicit Typecasting
// 1. Aka, automatic type conversion
// 2. Compiler automatically converts one data type to another during and operation
// 3. This happens when you perform operations involving variables of different data types, and the compiler promotes one type to a larger type to maintain precision

#include <iostream>
using namespace std;

int main(){
    // IMPLICIT CASTING 
    // 1. int to float
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + num2; // Implicit conversion of num1 from int to float
    // cout << result << endl;

    // int num1 = 10;
    // float num2 = 5.5;
    // int result = num1 + num2; 
    // cout << result << endl;


    // // 2. char to int 
    // char ch = 'A';
    // int a = ch + 1; // Implicit conversion from char to int
    // cout << a << endl;

    // char ch = 'A';
    // char a = ch + 1; 
    // cout << a << endl;

    // 3. int to char
    // int a = 97;
    // char ch = a;
    // cout << ch << endl;

    // char g = 'B';
    // int gg = g;
    // cout<<gg<<endl;


    // EXPLICIT TYPECASTING
    // 1. Aka, manual type conversion
    // 2. Allows you to explicitly specify the desired data type during an assignment or operation 
    // 3. You can use the casting operator which is represented by parentheses containing the target type 
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2;
    cout<<result<<endl;

    // 1. double to int
    double pi = 3.1459;
    int intpi = (int)pi; // Explicit conversion from double to int
    cout<<intpi<<endl;

    // 2. float to char
    float floatingNumber = 65.5;
    char charValue = (char)floatingNumber; // Explicit conversion from float to char
    cout<<charValue<<endl;

    // 3. int to float
    // int a = 10;
    // int b = 3.0;
    // float c = a/(float)b; // Explicit conversion from int to float
    // cout<<c<<endl;

    // int a = 10;
    // int b = 3.0;
    // float c = a/b;  // int/int = int
    // cout<<c<<endl;
    
    // BONUS
    // int/int = int 
    // int/float = float 
    // float/int = float 
    
    // float a = 10;
    // int b = 3.0;
    // float c = a/b;  // int/int = int
    // cout<<c<<endl;

    int a = 10;
    int b = 3.0;
    int c = (float)a/b;  // int/int = int
    cout<<c<<endl;

    return 0;

}