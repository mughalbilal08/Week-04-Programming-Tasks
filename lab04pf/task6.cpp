#include <iostream>
using namespace std;

void add(int number1, int number2);
void multiply(int number1, int number2);
void divide(int number1, int number2);
void substract(int number1, int number2);
 main(){
     int number1;
     int number2;
     char choice;
while (true){
 cout<< "Enter 1st Number: ";
     cin >> number1;
     cout<< "Enter 2nd Number: ";
     cin >> number2;
     cout<< "Enter your Operator (+,-,*,/): ";
     cin >> choice;
  if (choice == '+'){
       add(number1, number2);
   }
if (choice == '*'){
       multiply(number1, number2);
   }
if (choice == '/'){
       divide(number1, number2);
   }
if (choice == '-'){
       substract(number1, number2);
   }
 }   
}
void add(int number1, int number2){
  int sum = number1 + number2;
  cout << "Sum: " << sum <<endl;
}
void multiply(int number1, int number2){
  int multiply = number1 * number2;
  cout << "Multiply: " << multiply <<endl;
}
void divide(int number1, int number2){
  int div = number1 / number2;
  cout << "division: " << div <<endl;
}
void substract(int number1, int number2){
  int subs = number1 - number2;
  cout << "Substarction: " << subs <<endl;
}