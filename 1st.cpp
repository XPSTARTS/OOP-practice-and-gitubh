#include <iostream>
#include <cmath>
#include <string>
using namespace std;
   
   class employee{
    
    int id,salary;
    public:
    static int counter;
    void setdata(){
      cout<<"Enter employee id : ", cin>>id;
      cout<<"Enter salary of employee with id \" "<<id<<" \" :", cin>>salary;
    }
    void getdata()
    {
      cout<<"Employee with id: "<<id<<" have a salary: "<<salary<<" $"<<endl;  
    }
   };



int main(){
   employee amazon[3];
   for(int i=0;i<3;i++)
   {
    amazon[i].setdata();
   }
   cout<<endl;
   cout<<endl;
   for(int i=0;i<3;i++)
   {
   amazon[i].getdata();
   }
return 0;
}