#include <iostream>
using namespace std;

    void totalHolidays(int holidays);
    main(){
  
    int holidays;
    cout << "Enter Holidays: " ;
    cin >> holidays;
      totalHolidays (holidays);
}
    void totalHolidays(int holidays){  
         int workingdays;
         int time;
         int difference; 
    workingdays = 365 - holidays;
     time = (workingdays*63)+(holidays*127);
     difference = 30000 - time;
       cout << "TOTAL TIME IS :" << difference;
   }   
        
         
               
            
       