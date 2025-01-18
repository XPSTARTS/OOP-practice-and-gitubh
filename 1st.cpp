#include <iostream>
#include <cmath>
#include <string>
using namespace std;

  class Y;

   class X{
    int a;
    public:
    
    friend void prodof( X ,Y);
    void seta(int value){
      a=value;
    }
   };

   class Y{
    int b;
    public:

    friend void prodof(X , Y);

    void setb(int value) {
      b=value;
    }

   };

   void prodof(X p1 , Y p2)
   {
    int prod = p1.a * p2.b;
    cout<<"The Product of the numbers are: "<<prod<<endl;
   }

int main(){

  X num1;
  num1.seta(3);
  Y num2;
  num2.setb(200);
  prodof(num1 , num2 );

return 0;
}