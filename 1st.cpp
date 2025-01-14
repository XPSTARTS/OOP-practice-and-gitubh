#include <iostream>
#include <cmath>
#include <string>
using namespace std;
   
    // CLass Demonstrating the use of Access Modifiers in C++
   class students{
     private:
     string PhoneNo; //Declaring Private variables
     string address,GfName;   

     public:
     string RollNo;
     string name,year;

     void setdata()  //We have to initialize all the private members here because we cannot do this in main or outside this function.
     {
        
     cout<<"Enter your Phone Number: ";
     cin>>PhoneNo;
     cin.ignore();
    cout<<"Enter your address: ";
    getline(cin,address);
    cout<<"Enter your GfName: ";
    getline(cin,GfName);
     }
     void getdata(){
        cout<<"Name of the student is: "<<name<<endl;
        cout<<"Student is in the Class: "<<year<<endl;
        cout<<"Enrollment of the student is: "<<RollNo<<endl;
        cout<<"Address of the student is: "<<address<<endl;
        cout<<"Name of his Girlfriend is: "<<GfName<<endl;
        cout<<"His Contact Number is: "<<PhoneNo<<endl;
     }
   };

  

int main(){
     students s1;
    cout<<"Enter your name: ";
    getline(cin,s1.name);
     cout<<"Enter your Class/Section: ";
    getline(cin,s1.year);
     cout<<"Enter your Enrollment Number: ";
     cin>> s1.RollNo; 
     cin.ignore();
s1.setdata();
s1.getdata();
    
    
return 0;
}