#include <iostream>
#include <cmath>
#include <string>
using namespace std;

  // Making a program for a shop
  /*  
  It consist of an Item Number that is an array of size 100
  Item Price that is also an array of size 100
  Date of Manufacture and expiry
  Working: This program asks the user to enter the data and then displays it.
  */

 class shop{

   public:
   int itemNo[100],itemprice[100];
   string manufactdate[100],expirydate[100];
   int counter=0;

   void setdata();
   void getdata();

 };

  void shop :: setdata()
  {
   cout<<"Enter the item number of Product "<<counter+1<<" :";
   cin>>itemNo[counter];
   cout<<"Enter the price of Product "<<counter+1<<" :";
   cin>>itemprice[counter];
   cin.ignore();
   cout<<"Enter the date of manufacutring: ";
   getline(cin,manufactdate[counter]);
   cout<<"Enter the date of Expiry: ";
   getline(cin,expirydate[counter]);
   counter++;
  }
  void shop:: getdata()
  {
   for(int i=0;i<counter;i++)
   {
      cout<<endl<<endl;
      cout<<"Item Number of Product "<<i<<" is: "<<itemNo[i]<<endl;
      cout<<"price of Product "<<i<<" is: "<<itemprice[i]<<" $"<<endl;
      cout<<"Date of manufacture is: "<<manufactdate[i]<<endl;
      cout<<"Date of expiry is: "<<expirydate[i]<<endl;
   }
  }

int main(){
   cout<<"\t*********************************Welcome to the shop management*********************************"<<endl;
   shop s;
   int n;
   cout<<"Enter the number of products: ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
   s.setdata();
   }
   s.getdata();
  
return 0;
}