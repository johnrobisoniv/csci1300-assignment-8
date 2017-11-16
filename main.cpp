#include "voters.h"
#include "candidates.h"
#include "managers.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main () {

  vector<Candidate> candidates;
  vector<Voter> voters;
  vector<Manager> managers;


  string managers_password;
  int numVoters;
  char add = 'y';

  // Phase 1: Building the ballot
  cout << "Hi administrator. We hope you have integrity - otherwise this process is corrupted." << endl;
  cout << "What is the manager's password?" << endl;
  cin >> managers_password; // to go into manager::manager_password;
  cout << "How many voters today?" << endl;
  cin >> numVoters;
  cout << "Do you want to add a candidate? 'y' for yes, 'n' for no:" << endl;
  cin >> add;

  cout << "candidates size:: " << candidates.size();

  while (add == 'y') {
    // Local variable
    Candidate newCandidate;

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


  // Phase 2: Voting!
  int numCandidates = candidates.size();

  cout << "candidates size:: " << candidates.size();

  // Now it is time for the voters to vote
  int voterCount = 0;
  while (voterCount < numVoters) {

    string voterName;

    cout << "Would Voter #" << voterCount + 1 << " please step up to the terminal?" << endl;
    cout << "What is your name?" << endl;
    cin >> voterName;
    Voter newVoter(voterCount, voterName);


    cout << "Thanks, " << voterName << ". Now it's time to vote on our candidates!" << endl;

    int candidateCount = 0;
    while (candidateCount < numCandidates) {
      Candidate currentCandidate = candidates[candidateCount];
      string candidateName = currentCandidate.getName();
      int vote;
      string reason;

      if (candidateCount == 0) {
        cout << "First you will be voting on " << candidateName  << ", up for the position of " << currentCandidate.getPositionApplied() << "." << endl;
      } else {
        cout << "Next you will be voting on " << candidateName  << ", up for the position of " << currentCandidate.getPositionApplied() << "." << endl;
      }

      cout << "Based on your experience with " << candidateName << ", how much should they be making per year?" << endl;
      cin >> vote;
      cout << vote << endl;
      currentCandidate.addVote(vote);

      cout << "Thanks! Can you write a bit about why they deserve that salary?" << endl;
      cout << "(Managers will only see this is there is a major discrepancy between " << endl;
      cout << "their proposed salary and the average of those collected.)" << endl;
      cin >> reason;


      currentCandidate.setReason(reason, voterCount);

      candidateCount++;
    }

    voterCount++;
  }

  cout << "Now all the voting is done. Please notify the manager." << endl;

  string pass_entry;
  cout << "Please enter the manager's password to view the average salary as voted:" << endl;
  cin >> pass_entry;

  int attempt = 1;
  bool unlocked = false;

  while (attempt <= 3) {
    if (pass_entry == managers_password) {
      unlocked = true;
      attempt = 4;

    } else {
      cout << "Wrong password. Try " << 3 - attempt << " more times..." << endl;
      cin >> pass_entry;
      attempt++;
    }
  }

  if (unlocked) {
    // Here comes the average:

    int num_candidates = candidates.size();
    cout << "Working on " << num_candidates << " candidates." << endl;

    int candidate_count = 0;

    while (candidate_count < num_candidates) {
      Candidate current_candidate = candidates[candidate_count];
      current_candidate.writeFile("output.txt");

      cout << "First, candidate " << current_candidate.getName() << endl;

      vector<int> sals = current_candidate.getSalaries();
      int num_votes = sals.size();
      cout << "Num_votes " << num_votes << endl;
      float sum = 0.0;
      int vote_count = 0;

      while (vote_count < num_votes) {

        sum += sals[vote_count];
        vote_count++;
      }

      cout << "The average of voted salaries for candidate " << current_candidate.getName() << " is " << sum  << endl;
      candidate_count++;
    }

    cout << "Thank you!" << endl;
  }


  //
  // Voter x;
  // Candidate y;
  // Manager z;
  //
  // x.setName("Chad");
  // y.setName("Bruce");
  // z.setName("Brandon");
  //
  //
  //
  // voters.push_back(x);
  // candidates.push_back(y);
  // managers.push_back(z);
  //
  //
  //
  // cout << voters[0].getName() << endl;
  //
  // cout << candidates[0].getName() << endl;
  //
  // cout << managers[0].getName() << endl;
}
