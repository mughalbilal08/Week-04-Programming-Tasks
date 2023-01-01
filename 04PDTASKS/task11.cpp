#include <iostream>
using namespace std;

void speedMeasure(int speed);
 main (){
   ‌  int speed;
  cout << "Enter Your Speed Limit: ";
  cin >> speed;
  speedMeasure(speed); 
}
 void speedMeasure(int speed){
    if(speed <= 100){
      cout << "Perfect ! You're going good: ";
     }
    if(speed > 100){
      cout << " Halt You will be CHARGED: ";
     }
  }
