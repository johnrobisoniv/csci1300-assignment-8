// Name: John Hoopes
// Recitation 110: Monika Tak
// Homework Assignment 8


#include "managers.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Manager::Manager() {

}

Manager::Manager(string nom) {
  manager_name = nom;
}

void Manager::setName(string nom) {
  manager_name = nom;
}

string Manager::getName () {
  return manager_name;
}

void Manager::setPassword(string password) {
  manager_password = password;
}

bool Manager::checkPassword(string test_pass) {
  if (test_pass == manager_password) {
    return true;
  } else { return false; }
}

void Manager::inputSalary(int m_salary) {
  manager_salary = m_salary;
}

int Manager::getSalary() {
  return manager_salary;
}

Manager::~Manager() {

}
