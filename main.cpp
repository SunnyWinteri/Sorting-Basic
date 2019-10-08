#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
int main(){
	int n = 10000;
	int *arr = SortTestHelper::generateRandomArray(n,0,n);
	int *arr2 = SortTestHelper::copyIntArray(arr, n);
	SortTestHelper::testSort("Selection Sort",selectionSort,arr,n);
	SortTestHelper::testSort("Insertion Sort",insertionSort,arr2,n);

	//selectionSort(arr,n);
	//SortTestHelper::printArray(arr, n);
	//SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
	//delete[] arr;
/*
	for(int i = 0 ; i < n ; i ++)
		cout << arr[i] << " ";
	cout << endl;
*/
	
/*
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionSort(a , 10);
    for(int i = 0 ; i < 10 ; i ++)
    {
        cout << a[i] <<" ";    
    }
	cout << endl;

	float b[5] = {5.5,4.4,3.3,2.2,1.1};
	selectionSort(b , 5);
	for(int i = 0 ; i < 5 ; i ++)
    {
        cout << b[i] <<" ";    
    }
	cout << endl;
*/
	return 0;
}

