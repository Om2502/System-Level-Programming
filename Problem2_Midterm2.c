//Om Gautam
//Pather #: 002-57-0102
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int myCompare(const void* a, const void* b){// Defining comparision function
        return strcmp(*(const char**)a, *(const char**)b);//rules for the comparision
}
void sort_alphabetic(const char* arr[], int n){//Sorting function
        qsort(arr, n, sizeof(const char*), myCompare);//quicksort fuction to sort the array
}
int main(){ // Get the array of names that need to be sorted
        const char* arr[]
                = { "Sysytems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};
        int n = sizeof(arr) / sizeof(arr[0]);
        int i;
        sort_alphabetic(arr, n); // Sort the names
        printf("Sorted array is\n");//// Print the names
        for (i = 0; i < n; i++)
                printf("%d: %s \n", i, arr[i]);
        return 0;
}