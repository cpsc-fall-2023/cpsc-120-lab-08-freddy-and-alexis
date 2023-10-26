// Alexis Flores
// afloress201@csu.fullerton.edu
// @afloress201
// Partners:@freddyflores24

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  bool is_first{true};
  double sum = 0;
  for (std::string& argument : arguments) {
    if (is_first == true) {
      is_first = false;
    } else {
      sum = sum + std::stod(argument);
    }
  }

  // Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double average{sum / (static_cast<int>(arguments.size()) - 1)};
  std::cout << "average = ";
  std::cout << average << "/n";
  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
