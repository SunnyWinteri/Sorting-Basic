#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include<iostream>
#include<algorithm>

template<typename T>
void insertionSort(T arr[], int n){
	for(int i = 0 ; i < n ; i ++)
		for(int j = i ; j > 0 && arr[j] < arr[j-1] ; j --)
			swap(arr[j], arr[j-1]);
}


#endif //INSERTIONSORT_H
