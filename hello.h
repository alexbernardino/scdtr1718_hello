#ifndef HELLO_H
#define HELLO_H

class Hello  
{
private: 
   int id;   //data
public:  
   void run();   //function
   void run(int, int); //overloaded
   void set_id(int v) {
      if(v>0)  id = v;
      else     id = 1;
   }
};

#endif  //HELLO_H 

