#include <iostream>
using namespace std;

void reverse (string choice);
main (){
   
   string trueFalse;
   cout << "Enter TRUE or FASLSE to Reverse: ";
   cin >> trueFalse;
   reverse (trueFalse);
   

}
 void reverse (string choice) {
        if(choice == "true"){
      cout << "false" ;
     }
          if(choice == "false"){
      cout << "true" ;
     }
    
  }
 




