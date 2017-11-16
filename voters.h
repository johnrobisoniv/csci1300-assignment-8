// Name: John Hoopes
// Recitation 110: Monika Tak
// Homework Assignment 8

#ifndef VOTER_H
#define VOTER_H

#include <iostream>
using namespace std;

// This class will represent the people* who will
// interact with the computer to share their opinion
// on the candidates.
class Voter {
  public:
    // Constructor / Destructor Methods
    Voter();
  //  Voter(string nom);
    Voter(int voter_index, string nom);
    ~Voter();

    // Getter / Setter Methods
    void setName(string nom);
    string getName();
    void readFile(string passe_hash, string input_file); // ?? read!



  private:
    // Data members
    string voter_name;
    string voter_position;
    string description_of_candidate;
    string voter_passcode;
    int voter_id; // iterator, unique for each voter
    string role; // "manager" or "colleague"
    bool voted;

};

#endif // VOTER_H
