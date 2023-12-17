# include <stdio.h>
# include <stdlib.h>

void sequential_search(int a[], int key, int size)
{
    int i, flag = 0;
    for(i=0;i<size;i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
if (flag == 1)
    printf("Key found");
else
    printf("Key not found");

}

int main()
{
    int arr[] = {1,2,4,3,6,5,7,9,5,1,3,2,45,1};
    int size = sizeof(arr) / sizeof(arr[1]);
    int search_element = 45;

    sequential_search(arr, search_element, size);
}