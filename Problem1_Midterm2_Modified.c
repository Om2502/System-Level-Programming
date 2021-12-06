//Om Gautam
//Pather #: 002-57-0102

// c program to sort array using pointers
#include<stdio.h>
#include<stdlib.h>
void sort_numeric(int n, double* ptr, char id){// function return nothing, takes three arguement
    // variable
    double temp;
    for(int i=0; i<n; i++) {// Sort the numbers using pointers
        for(int j=i+1; j<n; j++){// inner loop
            // id for Ascending order
            if(id == 'A' || id == 'a'){
                if(*(ptr+j) < *(ptr+i)){ // check if previous number is greater than next
                    // swap using temp    
                    temp = *(ptr+i);
                    *(ptr + i) = *(ptr + j);
                    *(ptr + j) = temp;
                }
            }
            // id for Descending order
            else if(id == 'D' || id == 'd'){
                // check if next number is less than previous
                if(*(ptr+j) > *(ptr+i)){
                    // swap using temp
                    temp = *(ptr+i);
                    *(ptr + i) = *(ptr + j);
                    *(ptr + j) = temp;
				}
           }
        }
    }
}


// main method
int main(){
    // pointer
        double *ptr;
        // given array
        double arr[] = { 10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56 };
        
        // number of element in array
        int n = sizeof(arr)/sizeof(arr[0]);
    // allocate dynamic memory to pointer using malloc  
        ptr = (double*) malloc(n * sizeof(double));
        
        // assign arr to ptr
        ptr = arr;
        // id char variable
        char id;
        
        // input for Ascending or Descending
        printf("sort in Ascending order 'A' or 'a'\nsort in Descending order 'D' or 'd'\nEnter : ");
        scanf("%c", &id);
    
    // if valid choice
    if(id == 'A' || id == 'a' || id == 'D' || id == 'd')
    {
        // call function,
        sort_numeric(n, ptr, id);
    
        // print array after sort
        // print message
        printf("Sorted array : \n");
        for(int i=0; i<n; i++)
        {
            printf("%g ", *(arr + i));
        }
    }
    else
    {
        printf("invalid choice !!");   
    }
    
        return 0;
}