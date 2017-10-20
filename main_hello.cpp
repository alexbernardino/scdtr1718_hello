#include "hello.h"
#include <stdio.h>  //getchar 

int main()  
{
     // declare a local object
     Hello obj;
     // invoke object methods
      obj.set_id(2); 
      obj.run(2,3);  
      // pause
      getchar();
} // obj is destroyed here. 

