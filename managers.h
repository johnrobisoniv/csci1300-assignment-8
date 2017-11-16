// Name: John Hoopes
// Recitation 110: Monika Tak
// Homework Assignment 8

#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
using namespace std;

class Manager {
  public:
    // Constructor / Destructor Methods
    Manager();
    Manager(string nom);
    ~Manager();
    void setName(string nom);
    string getName();
    void setPassword(string password);
    bool checkPassword(string test_pass);
    void readFile(string input_file); // ?? read!
    void inputSalary(int m_salary);
    int getSalary();


    // Data members
    int manager_salary;
    string manager_name;
  private:
    string manager_password;
};

#endif // MANAGER_H
