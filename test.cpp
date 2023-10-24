#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d\n",*(p+i));
	}
	//int arr[10] = {};
	//printf("%p\n", arr);
	//printf("%p\n", arr+1);
	//printf("%p\n", &arr);
	//printf("%p\n", &arr+1);
	return 0;
}