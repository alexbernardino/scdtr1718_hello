#include "hello.h"
#include <stdio.h>  //getchar 

int main()  
{
     // declare a local object
     Hello obj;
     // invoke object methods
      obj.set_id(1); 
      obj.run();  
      // pause
      getchar();
} // obj is destroyed here. 

