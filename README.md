# Reading and Writing to files in C++
The `<fstream>` header provides most functionalities we will need to write and read data from files. Don't forget to include it to use it's objects and functions.

## Writing files ##
We use the `ofstream` object to write data to a file. You simply declare this variable then call its `open` function and pass the name of the file you want to store data in.

```cpp
ofstream outputfile;
outputfile.open("output.txt");
```

You can use the insertion operator (<<) with the `ofstream` object to write data to the file. It's syntax is very similar to how we use `cout`. We are only using the name of the `ofstream` object instead; `outputfile` in this particular example.

```cpp
outputfile << "Hello" << endl;
```

Don't forget to close the file to ensure that all data is stored properly.

```cpp
outputfile.close();
```

You can try compiling and running `output.cpp` to see an example of how this works.

```
g++ -std=c++17 output.cpp -o output
./output
```

After running the program, you will notice that it produces a new file called `output.txt` that contains the data we wrote in the program.

## Reading files ##
We use the `ifstream` object to read data from a file. You simply declare this variable then call its `open` function and pass the name of the file you want to read data from.

```cpp
ifstream inputfile;
inputfile.open("output.txt");
```

You can use the extraction operator (>>) with the `ifstream` object to read data from a file. It's syntax is very similar to how we use `cin`. We are only using the name of the `ifstream` object instead; `inputfile` in this particular example. The code below will extract the first string from the file and store it inside of the variable `line`. We can display its value using `cout`.

```cpp
string line;
inputfile >> line;
cout << line;
```

Don't forget to close the file to ensure that the data does not get corrupted.

```cpp
inputfile.close();
```

You can try compiling and running `input.cpp` to see an example of how this works.

*This step assumes that you already ran `output` and created a file called `output.txt`. The program will throw an error if `output.txt` does not exist.*

```
g++ -std=c++17 input.cpp -o input
./input
```

Running the program will read data from the file, store it in varialbes, and display the values of those variables.

# Working with arrays
Arrays are often useful when working with files. They allow us to store all values in an array then later write them to a file. Similarly, you can read values from a file and store them into an array.

# Writing array values to files
The example below shows how we iterate through an array and write its contents into a file. If you notice, it looks almost exactly like displaying an array's values to the screen, but we write it to the output filestream instead.

```cpp
ofstream outputfile;
outputfile.open("array_output.txt");

int arr_values[5] = {3, 6, 2, 1, 5};
outputfile << 5 << "\n"; // indicate how many elements will be saved
for (int i = 0; i < 5; i++)
  outputfile << arr_values[i] << "\n";

  outputfile.close();
```

You can try compiling and running `array_output.cpp` to see an example of how this works.

```
g++ -std=c++17 array_output.cpp -o array_output
./array_output
```

After running the program, you will notice that it produces a new file called `array_output.txt` that contains the data we wrote in the program.

# Storing values from files into arrays
The example below shows how we load data from a file and store it into an array. The limitation of arrays is that you need to define its size before using it. This example assumes that the first line of the data (output.txt) contains the number of elements and the rest are the values.

Also, take note of the data type the array contains. In the example below, `arr_values` is an integer array, so when we extract values from the inputfile, it knows that it should retrieve an integer value so it can be stored into an integer-sized container.

```cpp
  ifstream inputfile;
  inputfile.open("array_output.txt");
  int size = 0;
  inputfile >> size; // identify the number of elements and use it to define the array size

  // Store data into array
  int arr_values[size];
  for (int i = 0; i < size; i++)
    inputfile >> arr_values[i];

  // Display data stored in the array
  for (int i = 0; i < size; i++)
    cout << arr_values[i] << "\n";
    
  inputfile.close();
```

You can try compiling and running `array_input.cpp` to see an example of how this works.

*This step assumes that you already ran `array_output` and created a file called `array_output.txt`. The program will throw an error if `array_output.txt` does not exist.*

```
g++ -std=c++17 array_input.cpp -o array_input
./array_input
```
