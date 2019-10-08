#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include<iostream>
#include<algorithm>

template<typename T>
void insertionSort(T arr[], int n){

/*
	for(int i = 1 ; i < n ; i ++)
		for(int j = i ; j > 0 && arr[j] < arr[j-1] ; j --)
			swap(arr[j], arr[j-1]);
*/

	// 改进版
	for(int i = 1; i < n; i++){
		T e = arr[i]; // 拷贝一份当前的数组的值，寻找元素arr[i]合适的插入位置
		int j; // j保存元素e应该插入的位置
		for(j = i; j > 0 && arr[j-1] > e; j --)
			arr[j] = arr[j-1];
		arr[j] = e;
	}
		
}


#endif //INSERTIONSORT_H
