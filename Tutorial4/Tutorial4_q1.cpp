#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee(string n = " ", int ID = 0, string dp = " ", string p = " ")
    {
        name = n;
        idNumber = ID;
        department = dp;
        position = p;
    }

    void setName(string n)
    {
        name = n;
    }
    void setID(int ID)
    {
        idNumber = ID;
    }
    void setDep(string dp)
    {
        department = dp;
    }
    void setPos(string pos)
    {
        position = pos;
    }

    string getName()
    {
        return name;
    }
    int getID()
    {
        return idNumber;
    }
    string getDep()
    {
        return department;
    }
    string getPos()
    {
        return position;
    }
};

int main()
{
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3;
    emp3.setName("Joy Rogers");
    emp3.setID(81774);
    emp3.setDep("Manufacturing");
    emp3.setPos("Engineer");

    cout << "Name\t\tid Number\tDepartment\tPosition" << endl;
    cout << emp1.getName() << "\t" << emp1.getID() << "\t\t" << emp1.getDep() << "\t" << emp1.getPos() << endl;
    cout << emp2.getName() << "\t" << emp2.getID() << "\t\t" << emp2.getDep() << "\t\t" << emp2.getPos() << endl;
    cout << emp3.getName() << "\t" << emp3.getID() << "\t\t" << emp3.getDep() << "\t" << emp3.getPos() << endl;

    return 0;
}