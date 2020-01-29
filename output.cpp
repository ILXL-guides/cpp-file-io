// This program writes a string and 2 integer
// values to a file
#include <fstream>
#include <iostream>

int main() {
  std::ofstream output_file; // variable holding connection to an output file
  output_file.open("output.txt");

  // write data to the output file (1 string and 2 integers)
  output_file << "Hello!\n";
  output_file << 0 << " " << 1 << "\n";

  output_file.close();
  return 0;
}
