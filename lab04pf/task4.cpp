#include <iostream>
using namespace std;

void checkresult(int marks);


main(){
int number;
cout << "Enter yur MARKS: ";
cin >> number;
 checkresult (number);
}
 void checkresult (int marks){
        if (marks >= 50){
                   cout <<"passed"<<endl;
               }

         if(marks<50){
         cout << "Failed"<<endl;
      }
}