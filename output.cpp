// This program writes a string and 2 integer
// values to a file
#include <fstream>
#include <iostream>

int main() {
  std::ofstream outputFile; // variable holding connection to an output file
  outputFile.open("output.txt");

  // write data to the output file (1 string and 2 integers)
  outputFile << "Hello!\n";
  outputFile << 0 << " " << 1 << "\n";

  outputFile.close();
  return 0;
}
