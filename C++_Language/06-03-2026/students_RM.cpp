#include <iostream>

using namespace std;

class Student
{
public:
  string name;
  int roll;
  float gpa;

  Student(string n = "", int r = 0, float g = 0.0)
  {
    name = n;
    roll = r;
    gpa = g;
  }

  void display() const
  {
    cout << "Name: " << name << ", Roll: " << roll << ", GPA: " << gpa << endl;
  }
};

class StudentRecordManager
{
private:
  Student students[100];
  int count = 0;

public:
  void addStudent(const Student &s)
  {
    if (count < 100)
    {
      students[count] = s;
      count++;
    }
    else
    {
      cout << "Record is full!\n";
    }
  }

  void displayAll() const
  {
    for (int i = 0; i < count; i++)
    {
      students[i].display();
    }
  }

  void searchByRoll(int r) const
  {
    for (int i = 0; i < count; i++)
    {
      if (students[i].roll == r)
      {
        students[i].display();
        return;
      }
    }
    cout << "Student with roll " << r << " not found.\n";
  }
};

int main()
{
  StudentRecordManager manager;

  manager.addStudent(Student("Alice", 1, 3.5));
  manager.addStudent(Student("Bob", 2, 3.8));
  manager.addStudent(Student("Charlie", 3, 3.2));

  cout << "\n All Students Records\n";
  manager.displayAll();

  cout << "\nSearch for student with roll 2:\n";
  manager.searchByRoll(3);

  return 0;
}
