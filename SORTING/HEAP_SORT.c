# include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;


    int left = 2*i+1;

    int right = 2*i+2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, i);
    }
}

void heap_sort(int a[], int N)
{
    int i;
    for(i=N/2-1;i>=0;i--)
    {
        heapify(a, N, i);
    }

    for(i=N-1;i>=0;i--)
    {
        swap(&a[i], &a[0]);
        heapify(a, i, 0);   
    }
}

void display(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int a[] = {3,4,9,5,2};
    int n = sizeof(a) / sizeof(a[1]);

    int i;

    for (i = n/2-1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    printf("Heap Elements: - ");
    display(a, n);

    heap_sort(a, n);

    printf("Sorted Heap Elements: - ");
    display(a, n);
}