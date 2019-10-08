#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include<iostream>
#include<algorithm>
// 使用模板
template<typename T>
void selectionSort(T arr[], int n){
	for(int i = 0 ; i < n ; i ++){
		// find minIndex in [i,n)
		int minIndex = i;		
		for(int j = i + 1 ; j < n ; j ++)
			if( arr[j] < arr[minIndex] )
				minIndex = j;
		swap(arr[i] , arr[minIndex]);					
	}
}
#endif // SELECTIONSORT_H
