#include <iostream>
using namespace std;

void calculatebill (string day, int amount);
main (){
  int amount;
  string day;
 cout << "Enter Amount: ";
 cin >> amount;
 cout << "Enter day: ";
 cin >> day;
  calculatebill(day,amount);
}
  void calculatebill (string day, int amount){
     float discount;
     if (day== "sunday"){
  discount = amount- (amount*10/100);
  cout << "Amount is: "<< discount;
   } 
     if (day != "sunday"){
    discount = amount - (amount*5/100);
     cout << "Amount is: "<< discount;
  }
}
   
