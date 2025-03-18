#include <sortingalgos.hpp>

void algorithms::bubbleSort(std::vector<int> &f_vector)
{
    for(int i = 0; i < f_vector.size(); ++i){
        for(int j = i; j < f_vector.size(); ++j){
            if(f_vector[j] < f_vector[i])
                std::swap(f_vector[i] , f_vector[j]);
        }
    }
}

void algorithms::insertionSort(std::vector<int> &f_vector)
{
    for(int i = 1; i < f_vector.size(); ++i){
        int key = f_vector[i];
        int j = i - 1;

        while(j >= 0 && f_vector[j] > key){
            f_vector[j + 1] = f_vector[j];
            j--;
        }

        f_vector[j + 1] = key;
    }
}

void algorithms::mergeSort(std::vector<int> &f_vector, int f_start, int f_end)
{
    if(f_start < f_end){
        int mid = f_start + (f_end - f_start) / 2;

        mergeSort(f_vector, f_start, mid);
        mergeSort(f_vector, mid + 1, f_end);

        merge(f_vector, f_start, mid, f_end);
    }
}

void algorithms::merge(std::vector<int> &f_vector, int f_start, int mid, int f_end)
{
    int lefthalfLenght = mid - f_start + 1;
    int rightHalfLength = f_end - mid;

    std::vector<int> leftArray(lefthalfLenght);
    std::vector<int> rightArray(rightHalfLength);

    for(int i = 0 ; i < lefthalfLenght; ++i)
        leftArray[i] = f_vector[f_start + i];
    
    for(int j = 0 ; j < rightHalfLength; ++j)
        rightArray[j] = f_vector[mid + j + 1];
    
    int globalIndex = f_start;
    int leftIndex = 0;
    int rightIndex = 0;

    while(leftIndex < lefthalfLenght && rightIndex < rightHalfLength){
        if(leftArray[leftIndex] <= rightArray[rightIndex]){
            f_vector[globalIndex] = leftArray[leftIndex];
            leftIndex ++;
        }else{
            f_vector[globalIndex] = rightArray[rightIndex];
            rightIndex ++;
        }
        globalIndex ++;
    }

    while(leftIndex < lefthalfLenght){
        f_vector[globalIndex] = leftArray[leftIndex];
        leftIndex ++;
        globalIndex ++;
    }

    while(rightIndex < rightHalfLength){
        f_vector[globalIndex] = rightArray[rightIndex];
        rightIndex ++;
        globalIndex ++;
    }
}


bool algorithms::BinarySearch(int number, std::vector<int> &f_vector, int start, int end)
{
    while (start <= end){
        int mid = start + (end - start) / 2;
        if(f_vector[mid] == number) return true;
        if(f_vector[mid] < number) start = mid + 1;
        else if(f_vector[mid] > number) end = mid - 1;
    }

    // this is recuirsion solution that is not good with large number or large arrays as the danger of error Stack Overflow.
    /*if(end >= start){
        int middle = start + (end - start) / 2;
        if(f_vector[middle] == number){
            return true;
        }
        if(f_vector[middle] > number){
            return BinarySearch(number, f_vector, start, middle - 1);
        }
        return BinarySearch(number, f_vector, middle + 1, end);
    }*/

    return false;
}
