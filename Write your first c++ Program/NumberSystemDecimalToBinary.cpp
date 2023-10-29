// Decimal to binary conversion
// DIVISION METHOD:
// 1. Divide no. by 2
// 2. Store remainder (That will be a bit in binary number)
// 3. Repeat above steps with the Quotient untill quotient is less than 2
// 4. Reverse the bits so obtained

#include <iostream>
#include <cmath>
using namespace std;

// int decimalToBinaryMethod1(int n){
//     // Division Method
//     while(n>0){
//       int bit = n%2;
//       cout<< bit<<endl;
//       n = n/2;
//     }
//     return 0;
// }
// int main(){
//       int n;
//       cin>>n;
//       decimalToBinaryMethod1(n);
//       cout<<binary<<endl;
//     return 0;
// }



// int decimalToBinaryMethod1(int n){
//     // Division Method
//     int binaryno = 0;
//     int i = 0;
//     while(n>0){
//       int bit = n%2;
//       // cout<< bit<<endl;
//       binaryno = bit*pow(10, i++)+binaryno;
//       n = n/2;
//     }
//     return binaryno;
// }
// int main(){
//       int n;
//       cin>>n;
//       int binary = decimalToBinaryMethod1(n);
//       cout<<binary<<endl;
//     return 0;
// }


// NUMBER SYSTEM 
// 10    Rem -> 0101
// ans=0 , i=0
// ans = (digit*10 pow(i)) + ans
// 1. 0 * 10 pow(0) + 0 = 
// 2. 1 * 10 pow(1) + 0 = 10
// 3. 0 * 10pow(2) + 10 = 10
// 4. 1 * 10pow(3) + 10 = 1010

// BITWISE METHOD:
// 1.Obtain bit with bitwise AND operation (i.e. N&1)
// 2. Right shift N by 1 (N = N>>1)
// 3. Repeat above steps till N>0.
// 4. Reverse the bits so obtained

int decimalToBinaryMethod2(int n){
  int binaryno = 0;
  int i = 0;
  while(n>0){
    int bit = (n & 1);
    binaryno = bit*pow(10, i++) + binaryno;
    n = n >> 1;
  }
  return binaryno;
}

 int main(){
      int n;
      cin>>n;
      // decimalToBinaryMethod1(n);
      int binary = decimalToBinaryMethod2(n);
      cout<<binary<<endl;
    return 0;
}


// Binary To Decimal Conversion
// 1. Multiple each digit with it's place value
// 2.Add up all place value
// 3. Sum is the Decimal number.
// eg. 10
// 1010
// 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 23

int binaryToDecimal(int n){
  int decimal = 0;
  int i =0;
  while(n){
    int bit = n%10;
    decimal = decimal + bit*pow(2,i++);
    n /+ 10;
  }
  return decimal;
}