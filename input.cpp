// This program reads the data from an input file
#include <fstream>
#include <iostream>
#include <string>

int main() {
  string line;
  int num;

  std::ifstream inputFile; // variable holding connection to the input file
  inputFile.open("output.txt");

  // read and display string data from the file
  inputFile >> line;
  std::cout << "I read the following string: " << line << "\n";

  // read and display two integer values from the file
  inputFile >> num;
  std::cout << "This is the first int: " << num << "\n";
  inputFile >> num;
  std::cout << "This is the second int: " << num << "\n";

  inputFile.close();

  return 0;
}
