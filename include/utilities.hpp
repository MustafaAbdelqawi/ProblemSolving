//
//  utilities.hpp
//  Playing
//
//  Created by PirloSasa on 27.12.23.
//

#ifndef utilities_h
#define utilities_h
namespace utils{

void insertNewValue(std::vector<int>& f_vector, int f_newValue);

int getMaximumNumberInArray(const int f_array[], int f_size);

int add(int& a, int& b);

void printString(const std::string& f_str);

int getFiboAtIndex(int&& f_index);
}

std::vector<std::vector<int>> flipMatrix(std::vector<std::vector<int>>&& f_matrix);
#endif /* utilities_h */
