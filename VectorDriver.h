/* File: VectorDriver.h
 * Athr: Finley McIlwaine
 * Date: October 14, 2018
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// This function adds ten random numbers of type short
// to the end of the input vector.
void add_numbers(vector<short> &data) {
	// Declare our random short variable.
	short randomShort;

	// Loop to add random numbers to the vector.
	for (ulong i = 0; i < 10; i++)
	{
		// Generate a random number.
		randomShort = rand() % 100 + 1;

		// Copy the random number to the end of the vector.
		data.push_back(randomShort);
	}
}

// This prints the elements at even indices in a vector.
// If the vector is empty, it prints <empty>.
void print_even(const vector<short> &data) {
	// Test if empty.
	if (data.empty()) {
		// Is empty. Print <empty>.
		cout << "<empty>";
	}
	else {
		// Is not empty. Print elements at even indices.
		cout << "<" << data.at(0);
		for (ulong i = 2; i < data.size(); i += 2)
		{
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// This function returns true if value is a member of data, false otherwise.
bool is_present(const vector<short> &data, short value) {
	// Initialize our iterator
	std::vector<short>::const_iterator iter = data.begin();

	// Test each element of the vector.
	while (iter != data.end()) {
		// Returns true if dereferenced iterator == value,
		// otherwise increment iter.
		if (*iter == value) { return true; }
		iter++;
	}

	// No match found, return false.
	return false;
}
