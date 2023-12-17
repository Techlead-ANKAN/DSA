# include <stdio.h>
# include <stdlib.h>

    // bubble_sort
void bubble_sort(int arr[], int size)
{
    int i, step;
    for(step=0;step<size;step++)
    {
        for(i=0;i< size - step - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

// binary search only on sorted arrays
int binary_search(int arr[], int key, int high, int low)
{

    while(low <= high)
    {
    int mid = low + (high - low)/2;
    
        if (arr[mid] == key)
            return mid;
        else if(key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int a[] = {3,8,4,5,9,7,6};
    int size = sizeof(a)/sizeof(a[1]);
    int key = 4;

    bubble_sort(a, size);

    int res = binary_search(a, key, (size-1), 0);
    if(res == -1)
        printf("Key not found");
    else
        printf("Key found at index: %d", res);


}
