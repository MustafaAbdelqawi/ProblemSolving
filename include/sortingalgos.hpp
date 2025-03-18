#pragma once

#ifndef sortingalgos_hpp
#define sortingalgos_hpp

#include <iostream>
#include <vector>

namespace algorithms{
    void bubbleSort(std::vector<int>& f_vector);

    void insertionSort(std::vector<int>& f_vector);

    void mergeSort(std::vector<int>& f_vector, int f_start, int f_end);

    void merge(std::vector<int>& f_vector, int f_start, int mid, int f_end);

    bool BinarySearch(int number, std::vector<int>& f_vector, int start, int end);
}

#endif /* sortingalgos_hpp */


