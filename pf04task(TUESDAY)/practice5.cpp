#include <iostream>
using namespace std;

void addition (float number1, float number2);
void substraction (float number1, float number2);
void multiplication (float number1, float number2);
void division (float number1, float number2);
 
  main()
{
 int num1;
 int num2;
 char choice;
     while(true){
  cout << "Enter 1st Number: ";
  cin >> num1;
  cout << "Enter 2nd Number: ";
  cin >> num2;
  cout << "Enter your Choice (+,-,*,/): ";
  cin >> choice; 
    if (choice == '+'){
       addition (num1,num2);
      }
    if (choice == '-'){
       substraction (num1,num2);
      } 
    if (choice == '*'){
       multiplication (num1,num2);
      }
    if (choice == '/'){
       division (num1,num2);
     } 
  }
} 
  void addition (float number1, float number2){
      int sum;
      sum = number1 + number2;
      cout << "Sum is: " << sum << endl;
     }       
  void substraction (float number1, float number2){
      int subs;
      subs = number1 - number2;
      cout << "Substraction is: " << subs << endl;
     }
  void multiplication (float number1, float number2){
      int product;
      product = number1 * number2;
      cout << "Multiplication is: " << product << endl;
     }
  void division (float number1, float number2){
      int div;
      div = number1/number2;
      cout << "Division is: " << div << endl;
     
} 
  
       