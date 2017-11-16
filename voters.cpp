// Name: John Hoopes
// Recitation 110: Monika Tak
// Homework Assignment 8


#include "voters.h"
#include <iostream>
#include <fstream>
using namespace std;

Voter::Voter() {

}

// Voter::Voter(string nom) {
//   voter_name = nom;
// }

Voter::Voter(int voter_index, string nom) {
  voter_id = voter_index;
  voter_name = nom;
}

// Voter::Voter(int id) {
//   voter_id = id;
// }

void Voter::setName (string nom) {
  voter_name = nom;
}

string Voter::getName () {
  return voter_name;
}


void Voter::readFile (string passe_hash, string input_file) {

  ifstream inFile;
  inFile.open(input_file);

  if (inFile.is_open()) {

    string line;

    while (getline(inFile, line)) {
      // Here we need to decrypt the file
      // using passe_hash ...
      cout << line << endl;
    }
  } else { cout << "File failed to load." << endl; }

}















Voter::~Voter() {

}
