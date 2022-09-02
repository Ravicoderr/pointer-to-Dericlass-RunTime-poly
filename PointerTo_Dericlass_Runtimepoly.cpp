#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;

        cout << "displaying base class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    base *baseclass_pointer;
    base obj_base;
    derived obj_derived;
    baseclass_pointer = &obj_derived;

    baseclass_pointer->var_base = 5;
    // baseclass_pointer->var_derived = 5;  // will throw an error
    baseclass_pointer->display();

    derived *derived_classpointer;
    derived_classpointer = &obj_derived;
    derived_classpointer->var_base = 6;
    derived_classpointer->var_derived = 7;
    derived_classpointer->display();

    return 0;
}