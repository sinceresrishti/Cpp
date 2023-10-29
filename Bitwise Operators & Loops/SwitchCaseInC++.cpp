// Alternative to long if-else statements
// Expression must have integral values

#include <iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
    int op;
    cout<<"What operations you want to do?"<<endl;
    cin>>op;
    float ans = 0;
    // op 0 -> add, 1 -> sub, 2 -> *, 3 -> div, invalid operation
    // if(op == 0){
    //     ans = a + b;
    // }
    // else if(op == 1){
    //     ans = a - b;
    // }
    // else if(op == 2){
    //     ans = a*b;
    // }
    // else if(op == 3){
    //     ans = a/b;
    // }
    // else{
    //     cout<<"Invalid operation"<<endl;
    // }
    // cout<<"Your ans is: "<<ans<<endl;


    // SWITCH CASE
    switch(op){
        case 0:
          cout<<"Add case"<<endl;
          ans = a + b;
          break;
        case 1:
          cout<<"Sub case"<<endl;
          ans = a - b;
          break;
        case 2:
          cout<<"mul case"<<endl;
          ans = a*b;
          break;
        case 3:
          cout<<"div case"<<endl;
          ans = a/b;
          break;
        default:
          cout<<"Invalid operation"<<endl;
          return 0;
    } 
    
       cout<<"Your ans is: "<<ans<<endl;

    return 0;
}

// INTEGRAL DATA TYPES
// => Data Types that represents whole no.
// => that do not store fractional values
// eg. int, char, long, long long & their unsigned values