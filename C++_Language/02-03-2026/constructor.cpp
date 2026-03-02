#include <iostream>
#include <vector>
using namespace std;

class DiamondCompany
{
private:
  int comp_id;
  string comp_name;
  int comp_staff_quantity;
  int comp_revenue;
  int comp_import_raw_diamond;
  int comp_export_diamond;
  string comp_ceo;

public:
  DiamondCompany(int id, string name, int staff, double revenue, int import_raw, int export_dia, string ceo)
  {
    comp_id = id;
    comp_name = name;
    comp_staff_quantity = staff;
    comp_revenue = revenue;
    comp_import_raw_diamond = import_raw;
    comp_export_diamond = export_dia;
    comp_ceo = ceo;
  }

  void display(){

    cout << "\n======== Diamond Company Details ========";
    cout << "Company Id : " << comp_id <<endl;
    cout << "Company Name : " << comp_name <<endl;
    cout << "Company Staff Quantity : " << comp_staff_quantity <<endl;
    cout << "Company  Revenue: " << comp_revenue <<endl;
    cout << "Company Import Row Diamond : " << comp_import_raw_diamond <<endl;
    cout << "Company Export Diamond : " << comp_export_diamond <<endl;
    cout << "Company CEO : " << comp_ceo <<endl;

  }
};


int main(){
  int n;
  cout << "Enter number of Diamond Companies : ";
  cin >> n;

  vector<DiamondCompany> companies;

  for(int i = 0; i < n; i++){
    int id , staff , import_raw , export_dia;
    string name , ceo;
    double revenue;

    cout << "\n Enter Details of Company" << endl;

    cout << "Company Id: ";
    cin >> id;

    cout << "Company Name: ";
    cin >> name;

    cout << "Company Staff Queantity : ";
    cin >> staff;

    cout << "Company Revenue : ";
    cin >> revenue;

    cout << "Company Import Raw Diamond : ";
    cin >> import_raw;

    cout << "Company Export Diamond : ";
    cin >> export_dia;

    cout << "Company CEO Name : ";
    cin >> ceo;

    DiamondCompany obj(id , name  , staff , revenue , import_raw , export_dia , ceo);

    companies.push_back(obj);

  }

  for(int i = 0; i < n; i++){
    companies[i].display();
  }

  return 0;
}