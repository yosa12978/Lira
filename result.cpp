#include <iostream>
using namespace std;

//пример работы с массивами
//made by yusuf yakubov GITHUB: https://github.com/yosa12978
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bs(int arr[])
{
	for(int i = 0; i < sizeof(arr)-1; i++){
		for (int j = 0; i < sizeof(arr)-i-1; j++){
			if(arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
	}
}

int main()
{
	int mass[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
	cout << "пример работы с массивами || made by yusuf yakubov GITHUB: https://github.com/yosa12978" << endl;
	cout << mass << endl;
	cout << bs(mass) << endl;
	char e;
	cin >> e;
	return 0;
}