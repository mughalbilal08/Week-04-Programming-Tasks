#include <iostream>
using namespace std;

  void maximum(int number1, int number2);
  void minimum(int number1, int number2); 
  void equal(int number1, int number2); 
main(){
 int num1;
 int num2;
 int choice;
 while(true){
 cout << "Enter Your Number 1: " ;
 cin >> num1;
 cout << "Enter Your Number 2: " ;
 cin >> num2;
 cout << "Enter your Choice (1-3): "; 
 cin>> choice; 
 if (choice == 1){
    maximum (num1, num2);
   }
  if (choice == 2){
    minimum (num1, num2);
   }
  if (choice ==3){  
    equal (num1, num2);
   }
 }
} 
 void maximum(int number1, int number2){
    if (number1 > number2){
   cout<< "Greater Number is: " <<number1 << endl;
  }
     if (number1 < number2){
   cout << "Greater Number is: "<<number2 << endl;
  }
      
}
   void minimum(int number1, int number2){
     if (number1 < number2){
   cout<< "Lesser Number is: " <<number1 << endl;
  }
     if (number1 > number2){
   cout << "Lesser Number is: "<<number2 << endl;
  }
} 
  void equal(int number1, int number2){
   if (number1 == number2){
   cout<< "Both Are Equal " <<number1 <<number2 << endl;
  }
     if (number1 != number2){
   cout << "Both are Unequal "<<number1 <<number2 << endl;
  }
}