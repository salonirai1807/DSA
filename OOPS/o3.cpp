#include <iostream>

using namespace std;

// INHERITANCE

class human {
    private:
    int age;

    protected:
    int height;

    public:
    int weight;

    void setHeight(int h) {
        this -> height = h;
    }

    int getAge() {
        return this->age;
    } 
};

class male : public human {

    public:
    string complexion;

// Protected members can't be accessed anywhere except the scope of that class or its child class.
    int getHeight() {
        return this->height;
    }

};

// TYPES OF INHERITANCE

class animal{
    public:

    void walk() {
        cout<<"Walking..."<<endl;
    }
};

// 1. Single Inheritance

class dog : public animal{
    public:

    void bark() {
        cout<<"Barking..."<<endl;
    }
};

// 2. Multi-Level Inheritance

class puppy : public dog{
    public:

    void sleep() {
        cout<<"Sleeping..."<<endl;
    }
};

// 3. Multiple Inheritance

class man {
    public:

    void eat() {
        cout<<"Eating..."<<endl;
    }
};

class hybrid : public animal, public man {
    public:

    void run() {
        cout<<"Running..."<<endl;
    }
};

// 4. Hierarchical Inheritance

class labra : public puppy {
    public:

    void frnd() {
        cout<<"Being Friendly..."<<endl;
    }
};

class pug : public puppy {
    public:

    void cute() {
        cout<<"Being Cute..."<<endl;
    }
};


// Inheritance Ambiguity

class A{
    public:

    void func() {
        cout<<"I'm A..."<<endl;
    }
};

class B{
    public:

    void func() {
        cout<<"I'm B..."<<endl;
    }
};

class C : public A, public B{
    
};


int main() {
    male m1;

    m1.weight=75;
    m1.setHeight(180);

    cout<<"Weight of m1 is : "<<m1.weight<<endl;
    cout<<"Height of m1 is : "<<m1.getHeight()<<endl<<endl;

    cout<<"Single Inheritance"<<endl;
    dog d1;
    d1.walk();
    d1.bark();
    cout<<endl;

    cout<<"Multi-Level Inheritance"<<endl;
    puppy p1;
    p1.walk();
    p1.bark();
    p1.sleep();
    cout<<endl;

    cout<<"Multiple Inheritance"<<endl;
    hybrid h1;
    h1.walk();
    h1.eat();
    h1.run();
    cout<<endl;

    cout<<"Hierachichal Inheritance"<<endl;
    labra l1;
    l1.frnd();
    l1.sleep();

    pug pp1;
    pp1.cute();
    pp1.sleep();
    cout<<endl;


    // Inheritance Ambiguity Resolution

    C c1;
    c1.A :: func();
    c1.B :: func();

    return 0;
}