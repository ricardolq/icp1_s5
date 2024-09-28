#include <stdio.h>
#include <stdlib.h>

void print_array(char *msg, int *array, int n)
{
    printf("%s\n", msg);
    int i;
    for(i=0;i<n;i++)
        printf("%d\t", array[i]);
    printf("\n");
}

void insertion_sort(int *array, int n, int comparison(int, int))
{
    int i, j, key;
    for(j=1; j<=n-1;j++)
    {
        key=array[j];
        i=j-1;
        while(i >=0 && comparison(array[i], key))
        {
            array[i+1]=array[i];
            i=i-1;
        }
        array[i+1]=key;
    }
}
 
int ascending(int a, int b)
{
    return a > b;
}
 
int descending(int a, int b)
{
    return a < b;
}

int main(void)
{
    int i;
    int choice;
    int array[10] = {22,66,55,11,99,33,44,77,88,0};
    print_array("before insertion_sort",array, 10);
    printf("ascending 1: descending 2: quit 3\n");
    printf("enter your choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            insertion_sort(array,10, ascending);
            break;
        case 2:
            insertion_sort(array,10, descending);
            break;
        case 3:
            exit(0);
        default:
            printf("no such option\n");
    }
 
    print_array("after insertion_sort",array, 10);
    return 0;
}
 