#include <iostream>
#include <cmath>
#include <string>
using namespace std;
   
     class binarycheck{
     private:
     string s;
     public:
      
      void setdata();
      void getdata();
      void ones_compliment();
  

     };
     void binarycheck :: setdata()
     {
      cout<<"Enter the binary number: ";
      cin>>s;
     }
     void binarycheck ::  getdata()
     {
        for(int i=0; i<s.length();i++)
        {
         if(s.at(i)!='0' && s.at(i)!='1')
         {
            cout<<"Enter number is not binary!"<<endl;
            return ;
         }    
        }
         cout<<"Enter number is binary!"<<endl;
     }

     void binarycheck ::  ones_compliment()
     {
      bool flag=true;
        for(int i=0; i<s.length();i++)
        {
         s.at(i) = (s.at(i) == '0') ? '1' : '0';
        }
        if(flag)
        {
         cout<<"One's Compliment of the binary number is: ";
          for(int i=0; i<s.length();i++)
          {
            cout<<s.at(i);
          }
        }
     }

  

int main(){
   binarycheck b;
   b.setdata();
   b.getdata();
   b.ones_compliment();
    
    
return 0;
}