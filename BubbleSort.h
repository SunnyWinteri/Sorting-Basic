#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
void bubbleSort(T arr[], int n){
	bool swapped;
	do{
		swapped = false;
		for(int i = 1; i < n; i++)
			if(arr[i-1] > arr[i]){
				swap(arr[i-1], arr[i]);
				swapped = true;	
			}
			// 优化, 每一趟Bubble Sort都将最大的元素放在了最后的位置
        	// 所以下一次排序, 最后的元素可以不再考虑	
		n --;
	}while(swapped);
}

template<typename T>
void bubbleSort2(T arr[], int n){
	int newn; //使用newn进行优化
	
	do{
		newn = 0;
		for(int i = 1; i < n; i ++){
			if(arr[i-1] > arr[i]){
				swap(arr[i-1], arr[i]);
				// 记录最后一次的交换位置,在此之后的元素在下一轮扫描中均不考虑
				newn = i;			
			}		
		}
		n = newn;
	}while(newn > 0);
}

template<typename T>
void bubbleSort4(T arr[], int n){
	int newn; //使用newn进行优化
	int i,j;
	T temp;
	do{
		newn = 0;
		for(i = 1; i < n; i ++){
			if(arr[i-1] > arr[i]){
				temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
				// 记录最后一次的交换位置,在此之后的元素在下一轮扫描中均不考虑
				newn = i;			
			}		
		}
		n = newn;
	}while(newn > 0);
}

// baidu
template<typename T>
void bubbleSort3(T arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j],arr[j+1]);
        }
}
#endif
