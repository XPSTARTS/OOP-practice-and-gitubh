#include <iostream>
#include <cmath>
#include <string>
using namespace std;
  // Program for static variable and functions
  /*Static vatiable by default value is 0 (it start from zero).
    static variable has a syantax as shown in the program.
    Its a variable that is declared in Dynamic memory means it cannot be vary from function to function.
  */
 /*  Static functions displays or workwith static function.
     Same uses as static variable.
 */

  class student{
    public:
    static int rollNo;
    void setdata()
    {
      
      cout<<"FIrst Student name is Abdul Moid and their roll number is: "<<rollNo<<endl;
      cout<<"FIrst Student name is Abdul Momin and their roll number is: "<<rollNo+2<<endl;
      cout<<"FIrst Student name is Abdullah dilawar and their roll number is: "<<rollNo+4<<endl;
    }
  };
   int student::rollNo=1;

   class employee{
    public:
    static int employeeid;
    
   static void setdata(void)
    {
        cout<<"Employee Shoaib Ahmed has an id "<<employeeid<<endl;
        cout<<"Employee Muneeb Ahmed has an id "<<employeeid+3<<endl;
        cout<<"Employee Ijaz Ahmed has an id "<<employeeid+100<<endl;
    }

   };

   int employee :: employeeid=65;

int main(){
   student s;
   s.setdata();
   employee e;
   e.setdata();
return 0;
}