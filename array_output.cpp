#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream outputfile;
  outputfile.open("array_output.txt");

  int arr_values[5] = {3, 6, 2, 1, 5};
  outputfile << 5 << "\n"; // indicate how many elements will be saved
  for (int i = 0; i < 5; i++)
    outputfile << arr_values[i] << "\n";

  outputfile.close();
  return 0;
}
