#include<stdio.h>
#include<windows.h>
#include<string>
#include<bits/stdc++.h>


//function to print output in required position
void position(int x,int y)
{
  COORD C;
  C.X=x; C.Y=y;
  SetConsoleCursorPosition(
  GetStdHandle(STD_OUTPUT_HANDLE), C);
}


