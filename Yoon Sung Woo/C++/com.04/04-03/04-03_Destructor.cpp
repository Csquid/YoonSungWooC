#include <iostream>
#include <cstring>

class Person
{
private:
    char* name;
    int   age;
public:
    //Constructor
    Person(const char* myname, int myage)
    {
        int len = strlen(myname) + 1;
        this->name = new char[len];
        strcpy(this->name, myname);
        age = myage;
    }
    void ShowPersonInfo() const
    {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Age:  " << this->age  << std::endl;
    }

    //Destructor
    ~Person()
    {
        delete[] name;
        std::cout << "called destructor!" << std::endl;
    }
};

int main()
{
    Person man1("Lee dong woo", 29);
    Person man2("Jang dong gun", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}