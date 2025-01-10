#include <iosteam>
using namespace std;

void sort(int arr[],int size)
{
	for(int i = 0;i < size - 1;i ++ )
	{
		for(int j = 0;j < size - 1 - i;j ++ )
		{
			if(arr[j] > arr[j + 1]){
				swap(arr[j],arr[j + 1];
			}
		}
	}
}

int main()
{
	int arr[] = {12,4,89,43,21,78};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size)
	return 0;
}
