// Name: John Hoopes
// Recitation 110: Monika Tak
// Homework Assignment 8

#include "voters.h"
#include "candidates.h"
#include <iostream>
#include <vector>
using namespace std;


int main () {


  // Initialize program - get candidates

  vector<candidate> candidates;
  vector<voter> voters;
  vector<manager> managers;

  string managers_password;
  int numVoters;
  char add = 'y';

  cout << "Hi administrator. We hope you have integrity - otherwise this process is corrupted." << endl;
  cout << "What is the manager's password?" << endl;
  cin >> managers_password; // to go into manager::manager_password;
  cout << "How many voters today?" << endl;
  cin >> numVoters;
  cout << "Do you want to add a candidate? 'y' for yes, 'n' for no:" << endl;

  // The administrator adds as many candidates as there are
  // Maybe everyone gets reviewed quarterly?
  // This 'average salary' could be a performance indicator ...
// Perhaps if the candidate's suggested salary is >= 15% below
// what it is the management team can see the (nameless) written reviews of the
// voters ?
  while (add == 'y') {
    // Local variable
    candidate newCandidate();

    // Create variables to store candidate info
    // for this iteration of the loop
    string candidateName;
    string pos_applied;
    int current_salary;

    // Collect candidate info
    cout << "What is the candidate's name?" << endl;
    cin >> candidateName;
    cout << "What position has the candidate applied for?" << endl;
    cin >> pos_applied;
    cout << "What is the candidate's current salary?" << endl;
    cin >> current_salary;

    // Set candidate info in newCandidate object
    newCandidate.setName(candidateName);
    newCandidate.setPositionApplied(pos_applied);
    newCandidate.setCurrentSalary(current_salary);

    // Add newCandidate object to candidates vector
    candidates.push_back(newCandidate);

    // Prompt to re-enter loop or not
    cout << "Do you want to add a candidate? 'y' for yes, 'n' for no:" << endl;
    cin >> add;

  }

  int numCandidates = candidates.size();

  // Now it is time for the voters to vote
  int voterCount = 0;
  while (voterCount < numVoters) {

    voter newVoter();
    string voterName;

    cout << "Would Voter #" << voterCount + 1 << " please step up to the terminal?" << endl;
    cout << "What is your name?" << endl;
    cin >> voterName;
    cout << ""

    // code more here -
    // putting voter's info into
    // the candidate object and
    // into the voter object

    int candidateCount = 0;
    while (candidateCount < numCandidates) {

      // Loop through each candidate
      // to give the voter a chance to
      // share their opinion on each
      // person

      // add voter's inputs
      // to 'promote' and 'suggested_salaries'
      // vectors in candidate object

      // Also, solicit a written review of the
      // candidate over the prior work period
      // This will only be seen by management
      // if the candidate dramatically underperforms
      // relative to their salary.

      candidateCount++;
    }

    voterCount++;
  }

  // Now we have all votes counted, right?
    // Iterate through voters
    // and check if 'voted' is true?
    // Maybe just note if people didn't vote?

  // First, write file with two sections:
    // Unencrypted lines with the names of voters
    // of the voters (in the order of their
    // crowd-composed password)

    // Lines encrypted with the password
    // as the public key detailing what
    // each of them voted

  // Then, cout the average for the manager




  return 0;
}
