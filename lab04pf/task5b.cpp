#include <iostream>
using namespace std;

void iseligible(int age);
main(){
int age;
age= 18;
cout << "Enter your age: ";
cin >> age;
 iseligible (age);
} 
void iseligible(int age){
if(age>=18){
  cout << "You Are Eligible" ;
   }
 if(age<18){
   cout << "You are not eligible" ;
   }
}
