#include <iostream>
using namespace std;

 void totalprice (float num1, float num2, float num3);
    main(){

      float num1;
      float num2;
      float num3; 
     cout<< "Enter Number oF Red Roses: ";
      cin >> num1;
      cout<< "Enter Number oF White Roses: ";
      cin >> num2;
      cout<< "Enter Number oF Tulips: ";
      cin >> num3;
      totalprice (num1, num2, num3);
}
   void totalprice (float num1, float num2, float num3){
       float price;
    price = (num1 * 2.00) + (num2 * 4.10) + (num3 * 2.50);
    cout << " Price Without Discount is :" << price << endl;
      if (price > 200){
     price = price - (price*20/100);
        cout << " Price After Discount is: "<< price <<endl;
     }
}
        
         
               
            
       