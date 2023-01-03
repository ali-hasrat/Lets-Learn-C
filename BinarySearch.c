// C program to implement binary search using the recursion

#include <stdio.h>
int binarySearch(int arr[], int l, int h, int item)
{
    int mid;
    if (l > h)
        return -1;
    mid = (l + h) / 2;
    if (arr[mid] == item)
        return mid;
    else if (arr[mid] > item)
        binarySearch(arr, l, mid - 1, item);
    else if (arr[mid] < item)
        binarySearch(arr, mid + 1, h, item);
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int index = 0;
    int item = 0;
    printf("The elements of array are:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter item to search: ");
    scanf("%d", &item);
    index = binarySearch(arr, 0, 5, item);
    if (index == -1)
        printf("Item not found in array\n");
    else
        printf("Item found at index: %d\n", index);
    return 0;
}