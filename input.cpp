// This program reads the data from an input file
#include <fstream> // Include fstream to access file-related functions
#include <iostream>
#include <string>

int main() {
  std::string line;
  int num;

  std::ifstream input_file; // Create an input filestream that will load data from a file
  input_file.open("output.txt"); // Open a file given a filename

  // read and display string data from the file
  input_file >> line; // Use the extraction operator to retrieve data and store it to a variable
                      // The type of data retrieved is based on the variable's data type.
  std::cout << "I read the following string: " << line << "\n"; // You can use the data stored in the variable accordingly

  // read and display two integer values from the file
  input_file >> num;
  std::cout << "This is the first int: " << num << "\n";
  input_file >> num;
  std::cout << "This is the second int: " << num << "\n";

  input_file.close(); // Close the file to avoid corruption

  return 0;
}
