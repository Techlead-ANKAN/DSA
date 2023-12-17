# include <stdio.h>
# include <stdlib.h>

// Improved Bubble Sort
void imp_bubble_sort(int arr[], int size)
{
    int i,step, count = 0, flag;
    for(step = 0; step < size - 1; step++)
    {
        flag = 0;
        for(i = 0; i < size - step - 1; i++)
        {   
            count ++;
            if (arr[i] > arr[i+1])
            {
                flag = 1;
                int temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    if (flag == 0)
        break;
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
    imp_bubble_sort(a1, 10);
    printf("Sorted Array --> ");
    display(a1, 10);

    printf("\n\n");

    printf("Original Array --> ");
    display(a2, 10);
    imp_bubble_sort(a2, 10);
    printf("Sorted Array --> ");
    display(a2, 10);

    printf("\n\n");

    printf("Original Array --> ");
    display(a3, 10);
    imp_bubble_sort(a3, 10);
    printf("Sorted Array --> ");
    display(a3, 10);

}