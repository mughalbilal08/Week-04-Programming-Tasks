#include <iostream>
using namespace std;

void pass(int marks);
void fail(int marks);

main(){
int number;
cout << "Enter yur MARKS: ";
cin >> number;
 pass(number);
 fail (number);

}
 void pass (int marks){
        if (marks >= 50){
                   cout <<"passed"<<endl;
               }
}
 void fail(int marks){
         if(marks<50){
         cout << "Failed"<<endl;
      }
}