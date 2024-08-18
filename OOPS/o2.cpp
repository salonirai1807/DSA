#include <iostream>

using namespace std;

//                                        STATIC DATA MEMBER

/* Static data members are class members that are declared using static keywords.
   Only one copy of that member is created for the entire class and is shared by all the objects of that 
   class, no matter how many objects are created.
*/

class employee{
    
    string name;
    
    public:

    static int count;
    static int x;

    void setdata(void){
        cout<<"Enter Name of Employee : ";
        cin>>name;
        count++;
    }
    void getdata(void){
        cout<<"Name of Employee no."<<count<<" is : "<<name<<endl<<endl;
    }

    static int random() {
        return x;
    }
};

int employee :: count = 0;              // By Default Value is 0.
int employee :: x = 5;


int main()
{
    employee e1,e2,e3;
    
    e1.setdata();
    e1.getdata();
    
    e2.setdata();
    e2.getdata();
    
    e3.setdata();
    e3.getdata();

    cout<<"No. of Employees : "<<employee::count<<endl;
    cout<<"Value of x is : "<<employee::random()<<endl;

    return 0;
}