#include <iostream>
using namespace std;

void checkIfEven(int number);
void checkIfOdd(int number);

main (){

 int number;
 while(true){
cout << "Enter your Number: ";
 cin >> number;
  checkIfEven(number);
  checkIfOdd(number);
  }
}
void checkIfEven(int number){
if(number % 2 == 0){
 cout <<"It is Even: ";
  }
}
void checkIfOdd(int number){
if(number % 2 !=0){
 cout <<"It is ODD: ";
 }
}