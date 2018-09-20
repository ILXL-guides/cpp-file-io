// This program reads the data from an input file
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string line;
  int num;

  ifstream inputFile; // variable holding connection to the input file
  inputFile.open("output.txt");

  // read and display string data from the file
  inputFile >> line;
  cout << "I read the following string: " << line << endl;

  // read and display two integer values from the file
  inputFile >> num;
  cout << "This is the first int: " << num << endl;
  inputFile >> num;
  cout << "This is the second int: " << num << endl;

  inputFile.close();

  return 0;
}
