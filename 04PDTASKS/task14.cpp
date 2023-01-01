#include <iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string namestdntd1, float ecatMarksstdnt1, string namestdnt2, float ecatMarksstdnt2);
main(){
 printMenu();
  string name;
  int matricMarks,  interMarks,  ecatMarks;
  int matricMarks2,  interMarks2,  ecatMarks2;
  string name2;
  cout << "Enter first Name: ";
  cin >> name;
  cout << "Enter second Name: ";
  cin >> name2;
  cout << "Enter first student Matric Marks: ";
  cin >> matricMarks;
  cout << "Enter second student Matric Marks: ";
  cin >> matricMarks2;
  cout << "Enter first Inter Marks : ";
  cin >> interMarks;
  cout << "Enter second Inter Marks : ";
  cin >> interMarks2;
  cout << "Enter first student Ecat Marks : ";
  cin >> ecatMarks;
  cout << "Enter second student Ecat Marks : ";
  cin >> ecatMarks2;    
  calculateAggregate(name, matricMarks, interMarks, ecatMarks); 
  calculateAggregate(name2, matricMarks2, interMarks2, ecatMarks2); 
  compareMarks(name,ecatMarks,name2,ecatMarks2);

}
    void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks){
         float aggregate;           
     aggregate = ((matricMarks/1100)*30)+ ((interMarks/550)*30)+((ecatMarks/400)*40);
      cout << "Your total Agregate is : " << aggregate << endl ;
     }
  void compareMarks(string namestd1, float ecatMarksstdnt1, string namestdnt2, float ecatMarksstdnt2){
         if (ecatMarksstdnt1 > ecatMarksstdnt2){
        cout << "Roll no. first is:" << ecatMarksstdnt1<< endl;
        }  
         if (ecatMarksstdnt2 > ecatMarksstdnt1){
        cout << "Roll no. second is:" << ecatMarksstdnt2<< endl;
        }
  }
 void printMenu(){
cout <<"                                              " <<endl;
cout <<"  ******************************************  " <<endl;                                     
cout <<"  *         University Admission           *  " <<endl;
cout <<"  *          Management System             *  " <<endl;
cout <<"  ******************************************  "<<endl;
cout <<"                                                "<< endl;
 }