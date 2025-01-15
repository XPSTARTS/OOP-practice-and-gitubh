#include <iostream>
#include <cmath>
#include <string>
using namespace std;
  
  /*
  Making an program that print complex number and helps to learn about passing object as arguments.
  */
   class complex{
     int a , b;
     public:
     void setdata(int v1 , int v2)
     {
       a=v1;
       b=v2;
       
     }

     void getdata(complex r, complex i)  // where printcomplex is class name and we're passing objects in class functions as arguments
     {
         a=r.a+i.a;
         b=r.b=i.b;
     }

     void print()
     {
      cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
     }

   };


int main(){ 
  complex c1,c2,c3;

   c1.setdata(1,2);
   c1.print();

   c2.setdata(3,8);
   c2.print();

   c3.setdata(10,22);
   c3.print();

return 0;
}