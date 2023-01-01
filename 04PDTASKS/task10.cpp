#include <iostream>
using namespace std;

 void flyingDetails (string name, float price);
main (){
  
 string country;
 float ticketprice;
 cout << "Enter Country Name: ";
 cin >> country;
 cout << "Enter ticket Price In Dollars: ";
 cin >> ticketprice;
    flyingDetails (country,ticketprice);
}
  void flyingDetails (string name, float price){
      float discount;
   if(name == "pakistan"){
       discount = price - (price * 5/100);
     cout << "price is: " << discount ;
  }
    if(name == "ireland"){
       discount = price - (price * 10/100);
     cout << "price is: " << discount ;
   }
 if(name == "india"){
       discount = price - (price * 20/100);
     cout << "price is: " << discount ;
   }
 
 if(name == "endland"){
       discount = price - (price * 30/100);
     cout << "price is: " << discount ;
   }
 
 if(name == "canada"){
       discount = price - (price * 45/100);
     cout << "price is: " << discount ;
   }
 
} 
 
 
 




