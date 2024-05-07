#include <iostream>;
using namespace std;

typedef struct employee
{
    int eid;
    string fullName;
    float salary;
};
void employeeFunc()
{
    employee rafi;
    rafi.eid = 20106;
    rafi.fullName = "Rafi Hasan";
    rafi.salary = 308980;

    cout << "Employee Details : "
         << "\n"
         << "Name: " << rafi.fullName << "\n"
         << "Salary: " << rafi.salary;
}
int main()
{
    employeeFunc();
    return 0;
}