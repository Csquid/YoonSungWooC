#include <iostream>

class A
{
public:
    A()
    { }
    void fct()
    {
        std::cout << "A_Fct()" << std::endl;
    }
    void A_Obj()
    {
        std::cout << "A_Object()" << std::endl;
    }
    ~A()
    { }
};

class B : public A
{
public:
    B()
    { }
    void fct()
    {
        std::cout << "B_Fct()" << std::endl;
    }
    void B_Obj()
    {
        std::cout << "B_Object()" << std::endl;
    }
};

class C : public B
{
public:
    C()
    { }
    void fct()
    {
        std::cout << "C_Fct()" << std::endl;
    }
    void C_Obj()
    {
        std::cout << "C_Object()" << std::endl;
    }
};

int main()
{
    A* aObj = new A();
    // B* bObj = new A();
    // C* cObj = new A();
    
    A* aaObj = new B();
    B* bbObj = new B();
    // C* ccObj = new B();

    A* aaaObj = new C();
    B* bbbObj = new C();
    C* cccObj = new C();

    aObj->A_Obj();

    aaObj->A_Obj();
    // aaObj->B_Obj();
    bbObj->A_Obj();
    bbObj->B_Obj();

    aaaObj->A_Obj();
    // aaaObj->B_Obj();
    // aaaObj->C_Obj();

    bbbObj->A_Obj();
    bbbObj->B_Obj();
    // bbbObj->C_Obj();

    cccObj->A_Obj();
    cccObj->B_Obj();
    cccObj->C_Obj();
}