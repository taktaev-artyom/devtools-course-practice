// Copyright 2021 Taktaev Artem

#include <vector>

#ifndef MODULES_QSORT_INCLUDE_QSORT_H_
#define MODULES_QSORT_INCLUDE_QSORT_H_

std::vector<double> createRandomVector(int vec_size);
void qSort(std::vector<double> *arr, int left, int right);

#endif  // MODULES_QSORT_INCLUDE_QSORT_H_
