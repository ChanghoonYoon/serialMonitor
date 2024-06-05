#include <stdio.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int n);
void selectionSort(int arr[], int n);

int main()
{
    int arr[] = { 64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}

void selectionSort(int arr[], int n);