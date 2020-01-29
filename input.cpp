// This program reads the data from an input file
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::string line;
  int num;

  std::ifstream input_file; // variable holding connection to the input file
  input_file.open("output.txt");

  // read and display string data from the file
  input_file >> line;
  std::cout << "I read the following string: " << line << "\n";

  // read and display two integer values from the file
  input_file >> num;
  std::cout << "This is the first int: " << num << "\n";
  input_file >> num;
  std::cout << "This is the second int: " << num << "\n";

  input_file.close();

  return 0;
}
