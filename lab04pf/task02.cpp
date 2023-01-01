#include <iostream>
using namespace std;

void add (int num1, int num2);
main (){

int num1, num2;
 cout << "Enter Number 1: ";
 cin >> num1;
cout << "Enter Number 2: ";
 cin >> num2;
add(num1,num2);

int num3, num4;
 cout <<" Enter Number 3: ";
 cin >> num3;
cout << "Enter Number 4: ";
 cin >> num4;
add(num3,num4);
}
void add (int num1, int num2){
  int sum = num1 + num2 ;
   cout << "Sum is: "<< sum << endl; 
}
