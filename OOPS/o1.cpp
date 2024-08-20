#include <iostream>
#include <string>
#include <cstring>

using namespace std;


/*                                      CLASS & OBJECTS

CLASS - It is a user-defined data type, which holds its own data members and member functions, 
        which can be accessed and used by creating an instance of that class. A class is like 
        a blueprint for an object.
        
      - Data Members - Data members are the data variables and member functions are the functions used 
        & Member       to manipulate these variables and together these data members and member 
        Functions      functions define the properties and behaviour of the objects in a Class.

OBJECT - An Object is an identifiable entity with some characteristics and behaviour. An Object 
         is an instance of a Class. When a class is defined, no memory is allocated but when 
         it is instantiated (i.e. an object is created) memory is allocated.                          

    
Access Modifiers : The access modifiers of C++ allows us to determine which data members of the class are accessible to other classes and functions, and which are not. The 3 types are :- 
                   
            1. Public - accessible from any part of the program.
            2. Private - can only be accessed from within the class. (Default, if not mentioned)
            3. Protected - can be accessed within the class and from the derived class.               */

//  Class # 1

class person {                                         // Class

    private :
    
    int weight;
    
    public :

    // Constructor
    person() {
        cout << "Constructor Called!" << endl;
    }
    
    int height;                                        // Data Members
    string complexion;
    
/*      If we want to access a data member even if it is a private data member,we can do so with 
        the help of getter and setter functions.                                                      */
    
    void setwt(int w);                                // Function Declaration
    
    int getwt(){
        return weight;
    }
    
};

void person :: setwt(int w){
    weight=w;   
}

/*  NOTE :- There are two ways, we can define a function. (i) Inside the Class  (ii) Outside the Class.

    Now if we want the body of a class to look less messy and crowded and want to define Data Functions 
    outside the class body we can do so by (ii) method by using Scope Resolution Operator (::) and 
    specifying the datatype of function and the name of the class.                           */


// Class # 2

class square{
    
    public:
    int side;

    // Parametrised Constructor and 'this' pointer.
    square(int side) {
        this -> side = side;
        cout << "Value of (this) is : " << this <<endl;
    }

    // Copy Constructor
    square(square& temp) {
        this -> side = temp.side;
    }
    
    int perimeter(int side){
        int p=4*side;
        return p;
    }
    
    int area(int side);
    
};

int square :: area(int side){
    return side*side;
}


// Class # 3

class hero {
    public:

    int health;
    char level;
    char *name;

    // Simple Constructor
    hero() {
        cout << "Constructor Called!" << endl;
        name = new char[100];
    }

    // Deep Copy & Shallow Copy

    // Deep Copy
    hero(hero& temp) {                                    // Copy Constructor
        char *ch =  new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void setHealth(int h){
        health = h;
    }
    
    void setLvl(char l){
        level = l;
    }

    void setName(char name[]){
        strcpy(this -> name, name);
    }

    void print() {
        cout << "Name : " << this -> name << endl;
        cout << "Health : " << this -> health << endl;
        cout << "Level : " << this -> level << endl;
    }

    // Destructor
    ~hero() {
        cout << "Destructor Called..." << endl;
    }
};


int main()
{
    person motu;                                       // Object
    
    motu.height=165;
    motu.complexion="Fair";
    
    motu.setwt(90);
    
    cout<<"Height of Motu (in cm) is : "<<motu.height<<endl;
    cout<<"Complexion of Motu is : "<<motu.complexion<<endl;
    cout<<"Weight of Motu (in kg) is : "<<motu.getwt()<<endl<<endl;

    person *patlu = new person;                       // Object allocated/instantiated dynamically.

    (*patlu).height=170;
    (*patlu).setwt(67);

    cout<<"Height of Patlu (in cm) is : "<<(*patlu).height<<endl;        // (OR) patlu -> height
    cout<<"Weight of Patlu (in kg) is : "<<patlu -> getwt()<<endl<<endl;
        
   
    square s1(10);

    cout<<"Address of s1 is : " << &s1 <<endl;   
    cout<<"Side of Square s1 is : "<<s1.side<<endl;
    cout<<"Perimeter of square s1 is : "<<s1.perimeter(s1.side)<<endl;
    cout<<"Area of square s1 is : "<<s1.area(s1.side)<<endl<<endl;

    square s2(s1);

    cout<<"Side of Square s2 is : "<<s2.side<<endl;
    cout<<"Perimeter of square 2 is : "<<s2.perimeter(s2.side)<<endl;
    cout<<"Area of square s2 is : "<<s2.area(s2.side)<<endl<<endl;


    hero h1;

    h1.setHealth(65);
    h1.setLvl('B');
    char name[5] = "Paul";
    h1.setName(name);

    cout << "h1 : " << endl;
    h1.print();
    cout << endl;

    hero h2(h1);
    cout << "h2 : " << endl;
    h2.print();
    cout << endl;

    h1.name[0]= 'K';
    cout << "h1 : " << endl;
    h1.print();
    cout << endl;

    cout << "h2 : " << endl;
    h2.print();
    cout << endl;

    hero *h3 = new hero();
    delete h3;              // In case of dynamic allocation, Destructor should be called manually.
   
    return 0;
}