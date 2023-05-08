cmake_minimum_required(VERSION 3.24)
project(sortingAlgorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(sortingAlgorithms main.cpp selectionSort.h quickSort.h quickSort.h mergeSort.h heapSortv1.h heapSortv2.h countingSort.h bubbleSort.h gnomeSort.h shakerSort.h)
