#include <fstream>
#include <iostream>

int main() {
  std::ifstream inputfile;
  inputfile.open("array_output.txt");
  int size = 0;
  inputfile >> size; // identify the number of elements and use it to define the array size

  // Store data into array
  int arr_values[size];
  for (int i = 0; i < size; i++)
    inputfile >> arr_values[i];

  // Display data stored in the array
  for (int i = 0; i < size; i++)
    std::cout << arr_values[i] << "\n";
    
  inputfile.close();
  return 0;
}
