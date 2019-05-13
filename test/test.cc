//COMPILE: g++ test.cc -std=c++11
#include <vector>
#include <iostream>
#include <time.h>

#include "./../inc/sort/sort.h"
#include "./../cclib-common/inc/util/util.h"

using namespace std;

using namespace cclib;
using namespace cclib::algorithm;

inline vector<int> getStackVectorValue() {
    vector<int> vectorValue;
    vectorValue.push_back(4);
    vectorValue.push_back(12);
    vectorValue.push_back(3);
    vectorValue.push_back(115);
    vectorValue.push_back(15);
    vectorValue.push_back(11);
    vectorValue.push_back(2);
    return vectorValue;
}
inline void coutVectorValue(vector<int> value) {
    cclib::common::util::printVectorValue(value);
}

void insertionSortTest(Sort<int>* sortClass) {
    vector<int> sortValue = getStackVectorValue();
    sortClass->insertionSort(sortValue);
    coutVectorValue(sortValue);
}

void shellSortTest(Sort<int>* sortClass) {
    vector<int> sortValue = getStackVectorValue();
    sortClass->shellSort(sortValue);
    coutVectorValue(sortValue);
}

void heapSortTest(Sort<int>* sortClass) {
    vector<int> sortValue = getStackVectorValue();
    sortClass->heapSort(sortValue);
    coutVectorValue(sortValue);
}

int timeComplexityCalculate(clock_t startTime, clock_t endTime) {
    return endTime - startTime;
}

int main(int argc, char const *argv[])
{
    /* code */
    Sort<int>* sortClass = new Sort<int>();
    // clock_t start,end;
    // start = clock();
    // insertionSortTest(sortClass);
    // end = clock();
    // cout << "insertion sort time spend: " << timeComplexityCalculate(start, end) << endl;
    heapSortTest(sortClass);
    delete sortClass;
    sortClass = NULL;
    return 0;
}
