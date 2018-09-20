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

*This step assumes that you already ran output and created a file called `output.txt`. The program will throw an error if `output.txt` does not exist.*

```
g++ -std=c++17 input.cpp -o input
./input
```

Running the program will read data from the file, store it in varialbes, and display the values of those variables.
