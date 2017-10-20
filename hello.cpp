#include "hello.h"
#include <iostream>
using namespace std;

void Hello::set_id(int v)  
{
    //check valid args
    if(v>0)  id = v;
    else      id = 1;
 }
void Hello::run()  {
   cout<<"Hello "<<id<<endl;
}

