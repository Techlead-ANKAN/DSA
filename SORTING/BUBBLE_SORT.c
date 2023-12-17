# include <stdio.h>
# include <stdlib.h>

// Bubble Sort
void bubble_sort(int arr[], int size)
{
    int i,step, count = 0;
    for(step = 0; step < size - 1; step++)
    {
        for(i = 0; i < size - step - 1; i++)
        {   
            count ++;
            if (arr[i] > arr[i+1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    printf("\nNo.of Comparisions done: - %d\n", count);
}

// display array
void display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);  
}

int main()
{
    int a1[10] = {1,2,3,4,5,6,7,8,9,10};
    int a2[10] = {10,9,8,7,6,5,4,3,2,1};
    int a3[10] = {4,3,5,6,2,1,7,8,9,10};

    printf("Original Array --> ");
    display(a1, 10);
    bubble_sort(a1, 10);
    printf("Sorted Array --> ");
    display(a1, 10);

    printf("\n\n");

    printf("Original Array --> ");
    display(a2, 10);
    bubble_sort(a2, 10);
    printf("Sorted Array --> ");
    display(a2, 10);

    printf("\n\n");

    printf("Original Array --> ");
    display(a3, 10);
    bubble_sort(a3, 10);
    printf("Sorted Array --> ");
    display(a3, 10);

}