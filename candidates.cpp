
#include "candidates.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


Candidate::Candidate() {

}
Candidate::Candidate(string nom) {
  candidate_name = nom;
}

void Candidate::setName(string nom) {
  candidate_name = nom;
}
string Candidate::getName() {
  return candidate_name;
}
void Candidate::setCurrentSalary(int c_salary) {
  current_salary = c_salary;
}
int Candidate::getCurrentSalary() {
  return current_salary;
}

void Candidate::setPositionApplied (string pos_applied) {
  prospective_position = pos_applied;
}

string Candidate::getPositionApplied() {
  return prospective_position;
}

void Candidate::addVote (int salary_vote) {
  suggested_salaries.push_back(salary_vote);
  int size = suggested_salaries.size();
  int count = 0;
  for (int i = 0; i < size; i++) {
    cout << "Suggested salaries at" << i << ": " << suggested_salaries[i] << endl;

  }
}

void Candidate::setReason(string voter_reason, int voter_index) {
  voter_reasons.push_back(voter_reason);
}

vector<int>& Candidate::getSalaries() {
  cout << suggested_salaries.size();
  return suggested_salaries;
}

// void Candidate::calcAverage() {
//
//   int length = suggested_salaries.size();
//   float count = 0.0;  // float to prep for averaging
//   int sum = 0;
//
//   while (count < length) {
//     sum += suggested_salaries[count];
//     count++;
//   }
//
//   avg_suggested_salary = sum / length;
//
//
// }
// float Candidate::getAverage() {
//   return avg_suggested_salary;
// }

void Candidate::writeFile(string output_file) {
  ofstream outfile;
  outfile.open(output_file);

  if (outfile.is_open()) {
    cout << "OPEN!" << endl;
  } else { cout << "Error opening outfile." << endl; }
}

Candidate::~Candidate() {

}
