#include<iostream>
using namespace std;

void printMaximum(int num1,int num2,int num3) {
        if(num1 >= num2 && num2 >= num3) {
            cout << "Maximum is:" << num1 << endl;
        }
        else if(num2 >= num1 && num2 >= num3) {
            cout << "Maximum is:" << num2 << endl;
        }
        else {
            cout << "Maximum is:" << num3 << endl;
        }

    }

void printMaximum(int n1,int n2, int n3) {
    int ans = max(n1,n2);
    int finalans = max(ans,n3);
    cout<< "final ans is: " << finalans << endl;
}


int main(){

    // printMaximum(2,3,8);
    
    return 0;
}