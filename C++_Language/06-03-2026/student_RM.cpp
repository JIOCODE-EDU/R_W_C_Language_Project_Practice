#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
  char* name;
  int roll;
  float gpa;

public:
  Student()
  {
    name = new char[1];
    name[0] = '\0';
    roll = 0;
    gpa = 0.0;
  }

  Student(const char* n, int r, float g)
  {
    roll = r;
    gpa = g;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
  }

  Student(const Student &s)
  {
    roll = s.roll;
    
    gpa = s.gpa;

    name = new char[strlen(s.name) + 1];
    strcpy(name, s.name);

    cout << "copy constructor called for roll :" << roll << endl;
  }

  Student& operator=(const Student& s)
  {
    if (this != &s)
    {
      delete[] name;
      roll = s.roll;
      gpa = s.gpa;
      name = new char[strlen(s.name) + 1];
      strcpy(name, s.name);
    }
    return *this;
  }

  ~Student()
  {
    delete[] name;
  }

  // getter method

  const char* getName() const
  {
    return name;
  }

  int getRoll() const
  {
    return roll;
  }

  float getGPA() const
  {
    return gpa;
  }

  // display

  void display() const
  {
    cout << "Name: " << name << ", Roll: " << roll << ", GPA: " << gpa << endl;
  }
};

class StudentRecordManager{
private:
  Student* students;
  int capacity;
  int count;

public:
  StudentRecordManager(int cap)
  {
    capacity = cap;
    count = 0;
    students = new Student[capacity];
  }

  ~StudentRecordManager()
  {
    delete[] students;
  }

  // add student

  void addStudent(const Student &s)
  {
    if (count < capacity)
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

  const Student* searchByRoll(int roll) const
  {
    for (int i = 0; i < count; i++)
    {
      if (students[i].getRoll() == roll)
      {
        return &students[i];
      }
    }
    return nullptr;
  }
};

int main()
{

  StudentRecordManager manager(5);

  Student s1("Rahul", 101, 8.7);
  Student s2("Anjali", 102, 7.58);
  Student s3("Vikram", 103, 8.0);

  manager.addStudent(s1);
  manager.addStudent(s2);
  manager.addStudent(s3);

  cout << "\nAll Students Records\n";

  manager.displayAll();

  cout << "\nSearching Students Record via Rollno\n";

  const Student* found = manager.searchByRoll(101);

  if(found != nullptr){
    found -> display();
  }else{
    cout << "Student not found!\n";
  }

  return 0;
}