#include <iostream>
#include <string>

using namespace std;

class Admin
{
private:
  int manager_salary;
  int employee_salary;

protected:
  int total_staff;
  double total_annual_revenue;

public:
  string company_name;

  Admin()
  {
    company_name = "GRB PVT LTD";
    manager_salary = 60000;
    employee_salary = 30000;
    total_staff = 150;
    total_annual_revenue = 5000000;
  }

  void can_terminate()
  {

    cout << "Admin has Authority to terminate employee." << endl;
  }

protected:
  void show_manager_salary()
  {
    cout << "Manager Salary : " << manager_salary << endl;
  }

  void show_employee_salary()
  {
    cout << "Employee Salary : " << employee_salary << endl;
  }
};



class Manager : public Admin
{
public:
  void Manager_Access()
  {
    cout << "\nManager Access\n";

    cout << "Company Name: " << company_name << endl;

    cout << "Total Staff: " << total_staff << endl;

    cout << "Annual Revenue: " << total_annual_revenue << endl;

    show_manager_salary();
    show_employee_salary();
    can_terminate();
  }
};

class Employee : public Admin{
  public:

  void Employee_Access(){
      cout << "\nEmployee Access\n";

    cout << "Company Name: " << company_name << endl;

    cout << "Total Staff: " << total_staff << endl;

    cout << "Annual Revenue: " << total_annual_revenue << endl;

    show_employee_salary();
  }
};


int main(){
  Manager m;
  Employee e;

  m.Manager_Access();
  e.Employee_Access();

  return 0;
}