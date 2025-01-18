#include <iostream>
#include <cmath>
#include <string>
using namespace std;

  class Y;

  class X{
    int a;
    friend  void swapnum(X & , Y &);
    public:
    void setvalue(int value)
    {
      a=value;
    }
    void display()
    {
      cout<<"The first value before swapping is: "<<a<<endl;
    }
  };

  class Y{
    int b;
    friend  void swapnum(X & , Y &);
    public:
    void setvalue(int value)
    {
      b=value;
    }
    void display()
    {
      cout<<"The second value before swapping is: "<<b<<endl;
    }
  };

  void swapnum(X &a , Y &b)
  {
    int temp=a.a;
    a.a=b.b;
    b.b=temp;
  }

int main(){
   X num1;
   num1.setvalue(10);
   num1.display();

   Y num2;
   num2.setvalue(100);
   num2.display();

   swapnum(num1 , num2);
   cout<<"After swapping: "<<endl;
   num1.display();
   num2.display();
 

return 0;
}