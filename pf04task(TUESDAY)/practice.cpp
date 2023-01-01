#include <iostream>
using namespace std;

void eligible (int age);
main(){
 int age;
while (true){
 cout << "Enter Your Age: ";
 cin >> age;
 eligible (age);
 }
}
 void eligible (int age){   

if(age >= 18){
 cout << "You are Eligible: " << age << endl;
 } 
  if (age < 18){
  cout << "You are Not Eligible" << age << endl;
 }
}    