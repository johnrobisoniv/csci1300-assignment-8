// Name: John Hoopes
// Recitation 110: Monika Tak
// Homework Assignment 8

#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <vector>
#include <string>
using namespace std;


// This class's objects will represent
// the people* being evaluated by the voters.
// They will not interact with the computer,
// and are ideally absent for this process.
class Candidate {
  public:
    // Constructor / Destructor Methods
    Candidate();
    Candidate(string nom);
    Candidate(string nom, string pos_applied, int current_sal); // admin input
    ~Candidate();

    // Getter / Setter Methods
    void setName(string nom);
    string getName();
    void setCurrentSalary(int c_salary);
    int getCurrentSalary();
    void setPositionApplied(string pos_applied);
    string getPositionApplied();
    void addVote(int salary_vote);
    void setReason(string voter_reason, int voter_index);
    vector<int>& getSalaries();
    // void calcAverage(); // or float?
    // float getAverage();
    void writeFile(string output_file);


    // Data members
    string candidate_name;
    string current_position;
    string prospective_position;
    int current_salary;
    vector<int> suggested_salaries;
    vector<string> voter_reasons;
    float avg_suggested_salary;


};


#endif // CANDIDATE_H
