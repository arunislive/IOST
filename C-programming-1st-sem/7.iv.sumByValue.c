// SUm of value in arr
#include <stdio.h>

int sumByValue(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumByValue(arr, size); // Passing the array by value
    printf("Sum is %d", sum);
    return 0;
}