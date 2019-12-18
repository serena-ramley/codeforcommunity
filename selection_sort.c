/******************************************************************************

                            Selection Sort Algorithm
                            Vancouver Code for Community
                            Taught by Serena Ramley, Fall 2018

*******************************************************************************/

#include <stdio.h>

// Function declarations
void printarray(int[],int);
int getlength(int[]);
void swaparray(int[],int,int);
int findsmallest(int,int[],int);

int main()
{
    int list[] = {5,3,1,2,6,4};
    
    int length = sizeof(list)/sizeof(int);
    
    printf("Original list: ");
    printarray(list,length);
        
    for (int start=0; start < length; start++)
    {
        int smallest_i = findsmallest(start,list,length);
        swaparray(list,smallest_i,start);
        printarray(list,length);
    }

    return 0;
}

void printarray(int array[],int length)
{
    
    for (int i=0; i<length;i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

void swaparray(int array[], int index_a, int index_b)
{
    int temp = array[index_a];
    array[index_a] = array[index_b];
    array[index_b] = temp;
    return;
}

int findsmallest(int start_position, int array[], int length)
{
    int smallest_value = array[start_position];
    int smallest_index = start_position;
    
    for (int index=start_position; index<length; index++)
    {
        if (array[index] < smallest_value)
        {
            smallest_value = array[index];
            smallest_index = index;
        }
    }
    return smallest_index;
}
