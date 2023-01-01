#include <iostream>
#include <windows.h>
using namespace std;
 
void gotoxy(int x,int y);
void printMaze();
void playerMove (int x, int y);
main (){
    system ("cls");
   printMaze();
    int x = 3;
    int y = 3;  
  while(true){
    playerMove(x , y);    
     if (y < 8){
       y = y + 1;
       }
     if (y == 8){
           gotoxy (x, y-1);
             cout<< " "; 
                  y=3;           
       }
   } 
gotoxy(0,14);
}

void printMaze(){
  cout << " #################################################" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl; 
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #                                               #" << endl;
  cout << " #################################################" << endl;
 }
   void playerMove (int x, int y){
           gotoxy (x, y-1);
             cout<< " "; 
            
         gotoxy (x,y);
            cout << "p" ;
            Sleep(500);
  }











 






   void gotoxy(int x,int y){
   
      COORD coordinates;
      coordinates.X = x;
      coordinates.Y = y;
      SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
  }  




 




