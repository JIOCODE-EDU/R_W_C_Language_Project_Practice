// Write a Program to create a Student Record System for 5 students using Encapsulation.
// Consider the below-mentioned attributes in the Student class:
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_email
// - stu_college

#include <iostream>

using namespace std;

class Student{
  private:
  int stu_id;
  string stu_name;
  int stu_age;
  string stu_course;
  string stu_city;
  string stu_email;
  string stu_college;

  public:

  // setter 

  void setData(int stu_id , string stu_name,
  int stu_age,
  string stu_course,
  string stu_city,
  string stu_email,
  string stu_college){
    this->stu_id = stu_id;
    this->stu_name = stu_name;
    this->stu_age = stu_age;
    this->stu_course = stu_course;
    this->stu_city = stu_city;
    this->stu_email = stu_email;
    this->stu_college = stu_college;
  }

  // getter

  void getData(){
    cout << "\n Student ID.  : " << stu_id;
    cout << "\n Student Name.   : " << stu_name;
    cout << "\n Student Age.   : " << stu_age;
    cout << "\n Student Course.   : " << stu_course;
    cout << "\n Student City.  : " << stu_city;
    cout << "\n Student Email.   : " << stu_email;
    cout << "\n Student College.  : " << stu_college;
    cout << "\n =================================" ;
  }
};


int main(){

  Student s[5];

  for(int i = 0; i < 1; i++){

    int id , age;
    string name , course , email , city , college;

    cout << "\n Enter Value for Student" << i + 1 << endl;

    cout << "Student ID: ";
    cin >> id;

    cout << "Student Name: ";
    cin >> name;

    cout << "Student Age: ";
    cin >> age;

    cout << "Student Course: ";
    cin >> course;

    cout << "Student City: ";
    cin >> city;

    cout << "Student Email: ";
    cin >> email;

    cout << "Student College: ";
    cin >> college;

    s[i].setData(id , name , age , course , city , email , college);
  }

  cout << "\n ===== student data records =====\n";

  for(int i = 0; i < 1; i++){
    s[i].getData();
  }

  return 0;
}
