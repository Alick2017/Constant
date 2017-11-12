// Constant.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>;
using namespace std;
 
/*#define LENGTH 10   
 *#define WIDTH  5
 *#define NEWLINE '\n'
 
 *int main()
 *{
 
 * int area;  
   
 * area = LENGTH * WIDTH;
 *  cout << area;
 *  cout << NEWLINE;
 * return 0;
}*/


int main()
{
   const int  LENGTH = 11;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}

