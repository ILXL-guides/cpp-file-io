// This program writes a string and 2 integer
// values to a file
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream outputFile; // variable holding connection to an output file
  outputFile.open("output.txt");

  // write data to the output file (1 string and 2 integers)
  outputFile << "Hello!" << endl;
  outputFile << 0 << " " << 1 << endl;

  outputFile.close();
  return 0;
}
