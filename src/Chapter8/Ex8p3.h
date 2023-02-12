
#ifndef __EX8P3_H_
#define __EX8P3_H_

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
   switch(argc - 1)
   case 2: case 3: case 4:
   {
      for (int i{}; i < argc; i++)
         {
            cout << "Argument " << i << " is " << argv[i] << endl;
         };
      break;
   default:
      cout << "You have input the incorrect amount of input arugments." << endl;
      cout << "Please input between 2 and 4 input arguments" << endl;
   };
};

#enddefine

