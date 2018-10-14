/* File: VectorDriver.cpp
 * Athr: Finley McIlwaine
 * Date: October 14, 2018
 *
 * Desc: Exemplifies the use of the STL with vectors,
 *       iterators, and algorithms.
 */

#include "pch.h"
#include "VectorDriver.h"
#include <algorithm>

int main() {
	cout << "\n   ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "    ..::  E N D   S A M P L E  C O D E  ::.." << endl << endl;

	// Testing my add_numbers function.
	// Create and display empty vector.
	vector<short>testVector(0);
	cout << "Testing add_numbers() function:" << endl;
	cout << "Empty vector:                    ";
	print(testVector);
	cout << endl;

	// Call add_numbers and display result
	add_numbers(testVector);
	cout << "After first add_numbers() call:  ";
	print(testVector);
	cout << endl;

	// Call add_numbers again and display result
	add_numbers(testVector);
	cout << "After second add_numbers() call: ";
	print(testVector);
	cout << endl;

	// Testing my print_even function
	// Clear testVector and print to test empty print.
	testVector.clear();
	cout << "\nTesting print_even() function:" << endl;
	cout << "Empty vector:                ";
	print_even(testVector);
	cout << endl;

	// Test print_even with vector = <0, 1, 2, 3, 4, 5>
	testVector = { 0, 1, 2, 3, 4, 5 };
	cout << "Vector = {0, 1, 2, 3, 4, 5}: ";
	print_even(testVector);
	cout << endl;

	// Testing my is_present function
	// Test with empty vector, value = 2
	testVector.clear();
	cout << "\nTesting is_present() function:" << endl;
	cout << "Empty vector, value = 2:                ";
	// Here we implement a simple print expression for is_present results.
	cout << ((is_present(testVector, 2) == false) ? "FALSE" : "TRUE");
	cout << endl;

	// Test is_present with vector = <0, 1, 2, 3, 4, 5>, value = 2
	testVector = { 0, 1, 2, 3, 4, 5 };
	cout << "Vector = {0, 1, 2, 3, 4, 5}, value = 2: ";
	cout << ((is_present(testVector, 2) == false) ? "FALSE" : "TRUE");
	cout << endl;

	// Test is_present with vector = <0, 1, 2, 3, 4, 5>, value = 6
	cout << "Vector = {0, 1, 2, 3, 4, 5}, value = 6: ";
	cout << ((is_present(testVector, 6) == false) ? "FALSE" : "TRUE");
	cout << endl;

	// Test sorting with iterators.
	// Make a vector of five random numbers
	testVector = { -6, 90, 29, -38, 0 };
	cout << "\nTesting sort() with iterators:" << endl;
	cout << "Unsorted: ";
	print(testVector);
	cout << endl;

	// Initialize begin() and end() iterators.
	std::vector<short>::iterator iterBegin = testVector.begin();
	std::vector<short>::iterator iterEnd = testVector.end();

	// Save unsorted vector
	vector<short>unsorted = testVector;

	// Call sort
	sort(iterBegin, iterEnd);

	// Output result
	cout << "Sorted:   ";
	print(testVector);
	cout << endl;

	// Simple test if sums are equal in sorted and unsorted
	bool sumEqual = (compute_sum(unsorted) == compute_sum(testVector));
	cout << "Sum of elements of unsorted and sorted vectors equal?: " << (sumEqual ? "YES" : "NO") << endl;
	cout << endl;

  system("pause");
  return 0;
};
