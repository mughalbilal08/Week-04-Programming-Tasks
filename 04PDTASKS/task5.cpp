#include <iostream>
#include <windows.h>
using namespace std;
 
void gotoxy(int x,int y);
void name ();
 
main()
 {
     
    gotoxy(35,6);
    name();

gotoxy(0,24);
}

void name(){

  cout << "                                                                                                  " << endl;
  cout << "   #############      ##########    ######             #######       ######                                " <<endl;
  cout << "   ##         ###         ###         ##             ###     ###       ##                        " <<endl;
  cout << "   ##          ###        ###         ##            ###       ###      ##                        " <<endl;
  cout << "   ##           ##        ###         ##            ###       ###      ##                          " <<endl;
  cout << "   ##############         ###         ##            #############      ##                           " <<endl;
  cout << "   ##          ###        ###         ##            #############      ##                          " <<endl;
  cout << "   ##           ###       ###         ##            ###       ###      ##                           " <<endl;
  cout << "   ##          ###        ###         ##     ##     ###       ###      ##      ##                          " <<endl;
  cout << "   ##############      #########     ##########     ###       ###      ##########                                   " <<endl ; 
  cout << "                                                                                                        " <<endl ; 
    }
   void gotoxy(int x,int y){
   
      COORD coordinates;
      coordinates.X = x;
      coordinates.Y = y;
      SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
  }  




 




