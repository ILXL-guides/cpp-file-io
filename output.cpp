// This program writes a string and 2 integer
// values to a file
#include <fstream> // Include fstream to access file-related functions
#include <iostream>

int main() {
  std::ofstream output_file; // Create an output filestream that will direct data into a file
  output_file.open("output.txt"); // Open a file given a filename

  // write data to the output file (1 string and 2 integers)
  output_file << "Hello!\n"; // Use the insertion operator to send data to the file
  output_file << 0 << " " << 1 << "\n"; 

  output_file.close(); // Close the file to ensure all data is written properly
  return 0;
}
