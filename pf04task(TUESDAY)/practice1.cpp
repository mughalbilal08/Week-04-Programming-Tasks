#include <iostream>
using namespace std;

  void ifEven(int number); 
main(){
 int number;
 while(true){
 cout << "Enter Your Number: " ;
 cin >> number;
 ifEven (number);
 } 
} 
  void ifEven(int number){
 if(number % 2 == 0){
  cout << "Number is Even" << endl;
 }
 if(number % 2 != 0){
  cout << "Number is Odd" << endl ;
 }
}
 