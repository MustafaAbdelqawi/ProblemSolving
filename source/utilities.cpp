//
//  utilities.cpp
//  Playing
//
//  Created by PirloSasa on 27.12.23.
//

#include <iostream>
#include<vector>
#include "utilities.hpp"
#include <datatypes.hpp>

int utils::add(int& a,int& b){
    return a+b;
}
void utils::printString(const std::string& f_name){
    std::cout<<f_name<<std::endl;
}

void utils::insertNewValue(std::vector<types::uint8>& f_vector, int f_newValue){
    f_vector.emplace_back(f_newValue);
    if(f_vector.size() == 1){
        return;
    }
    
    for (types::uint8 i = 0; i < f_vector.size(); i++) {
        if(f_vector[i] > f_newValue)
            std::swap(f_vector[i], f_vector[f_vector.size()-1]);
    }
}

int utils::getMaximumNumberInArray(const int f_array[], int f_size){
    if(f_size < 1)
        throw std::runtime_error("Empty array...");
    int result=f_array[0];
    for (uint8_t i = 0; i < f_size; ++i) {
        result = (f_array[i] > result)?f_array[i]:result;
    }
    return result;
}

// this function is based on index 1,2,3,4,5,6,    unlike the array
int utils::getFiboAtIndex(int&& f_index)
{	
    if(f_index == 1) return 0;
	if(f_index == 2) return 1;
	int prev = 1;
	int before = 0;
	unsigned long long curr;
	while(f_index >= 2){
		curr = before + prev;
		before = prev;
		prev = curr;
		f_index --;
	}
	return curr;
}

std::vector<std::vector<int>> flipMatrix(std::vector<std::vector<int>>&& f_matrix){
	std::vector<std::vector<int>> result;
	for(int i = 0; i < f_matrix[0].size() ; ++i){
		std::vector<int> row;
		for(int j = f_matrix.size() - 1; j >= 0 ; --j)
		{
			row.push_back(f_matrix[j][i]);
		}
		result.push_back(row);
	}
	return result;
}
