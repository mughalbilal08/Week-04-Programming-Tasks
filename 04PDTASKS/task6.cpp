#include <iostream>
#include <windows.h>
using namespace std;
 
void gotoxy(int x,int y);
void name ();
void name2 ();
void name3 ();
void name4 ();
void name5 ();
 
main()
 {
     
    gotoxy(10,30);
    name();
    gotoxy(10,40);
    name2();
    gotoxy(10,50);
    name3();
    gotoxy(10,60);
    name4();
    gotoxy(10,70);
    name5();
gotoxy(0,24);
}

void name(){
 cout<< "                                   "<< endl;
 cout<< "           #######                    "<< endl;
 cout<< "         ###     ###                   "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "        #############                  "<< endl;
 cout<< "        #############                  "<< endl;
 cout<< "        ###       ###                 "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "                                   "<< endl; 
    }
 
  void name2 (){

 cout<< "                                   "<< endl;
 cout<< "     #####         #####                 "<< endl;
 cout<< "      ###           ###                 "<< endl;
 cout<< "      ###           ###                  "<< endl;
 cout<< "      ###   #####   ###                       "<< endl;
 cout<< "      ###   ## ##   ###                      "<< endl;
 cout<< "      ###   ## ##   ###                     "<< endl;
 cout<< "      ###   ## ##   ###                      "<< endl;
 cout<< "      ###   ## ##   ###                     "<< endl;
 cout<< "      ######## ########                                "<< endl;
 cout<< "                                   "<< endl;


    
}

    void name3(){
 cout<< "                                   "<< endl;
 cout<< "           #######                    "<< endl;
 cout<< "         ###     ###                   "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "        #############                  "<< endl;
 cout<< "        #############                  "<< endl;
 cout<< "        ###       ###                 "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "        ###       ###                  "<< endl;
 cout<< "                                   "<< endl; 
  }
     
   void name4(){
 cout<< "                                   "<< endl;
 cout<< "         ##########                            "<< endl;
 cout<< "            ####                          "<< endl;
 cout<< "            ####                           "<< endl;
 cout<< "            ####                          "<< endl;
 cout<< "            ####                          "<< endl;
 cout<< "            ####                          "<< endl;
 cout<< "            ####                          "<< endl;
 cout<< "         ##########                           "<< endl;
 cout<< "                                 "<< endl;
  }
 
   void name5(){      

cout <<"       #################        " <<endl;
cout <<"      ######                      " <<endl;
cout <<"       #######                 " <<endl;
cout <<"          ############             " <<endl;
cout <<"                 ######     " <<endl;
cout <<"               #######        " <<endl;
cout <<"      ################     " <<endl;
cout <<"      ############### " << endl;
  }

void gotoxy(int x,int y){
   
      COORD coordinates;
      coordinates.X = x;
      coordinates.Y = y;
      SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
  }  




 




