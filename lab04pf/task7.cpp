#include <iostream>
using namespace std;

void printName (string name);
main (){
 string userName; 
 while(true){
     cout << "Enter your name: ";
     cin >> userName;
     printName(userName);
}

}
 void printName (string name){
    cout << "Your Name Is " << name << endl ;
}
