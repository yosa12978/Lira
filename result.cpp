#include <iostream>

//пример работы с массивами
//made by yusuf yakubov GITHUB: https://github.com/yosa12978
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)        
    	for (j = 0; j < n-i-1; j++)  
        	if (arr[j] > arr[j+1])  
            	swap(&arr[j], &arr[j+1]);  
}  
  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
int main()  
{  
	cout << "example made by yusuf yakubov GITHUB: https://github.com/yosa12978" << endl;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    printArray(arr, n); 
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    char e;
	cin >> e;
    return 0;  
}  