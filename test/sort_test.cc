//COMPILE: g++ sort_test.cc -std=c++11

#include "./../inc/algorithm/sort/sort.h"
#include "./../cclib-common/inc/util/util.h"
#include "./../inc/adt/vector.h"

using namespace cclib;
using namespace cclib::algorithm;
using namespace cclib::adt;

inline Vector<int> getStackVectorValue() {
    Vector<int> vectorValue;
    vectorValue.push_back(4);
    vectorValue.push_back(12);
    vectorValue.push_back(3);
    vectorValue.push_back(115);
    vectorValue.push_back(15);
    vectorValue.push_back(11);
    vectorValue.push_back(2);
    // vectorValue.push_back(22);
    cclib::common::util::printVectorValue(vectorValue);
    return vectorValue;
}

std::vector<int> getStackVectorValue1() {
    std::vector<int> vectorValue;
    vectorValue.push_back(4);
    vectorValue.push_back(12);
    vectorValue.push_back(3);
    vectorValue.push_back(115);
    vectorValue.push_back(15);
    vectorValue.push_back(11);
    vectorValue.push_back(2);
    // vectorValue.push_back(22);
    cclib::common::util::printVectorValue(vectorValue);
    return vectorValue;
}

void insertionSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->insertionSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void shellSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->shellSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void heapSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->heapSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void mergeSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->mergeSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void quickSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->quickSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void bubbleSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->bubbleSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void selectSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->selectSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void insertSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->insertSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void countSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->countSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

void radixSortTest(Sort<int>* sortClass) {
    Vector<int> sortValue = getStackVectorValue();
    sortClass->radixSort(sortValue);
    cclib::common::util::printVectorValue(sortValue);
}

// int timeComplexityCalculate(clock_t startTime, clock_t endTime) {
//     return endTime - startTime;
// }

int main(int argc, char const *argv[])
{
    /* code */
    // clock_t start,end;
    // start = clock();
    // insertionSortTest(sortClass);
    // end = clock();
    // cout << "insertion sort time spend: " << timeComplexityCalculate(start, end) << endl;

    Sort<int>* sortClass = new Sort<int>();
    mergeSortTest(sortClass);
    delete sortClass;
    sortClass = NULL;
    return 0;
}
