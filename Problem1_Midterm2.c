//Om Gautam
//Pather #: 002-57-0102
#include<stdio.h>
//this function is to swap two elements using pointer
void swap_double( double *a, double *b )
{
        double _t = *a;
        *a = *b;
        *b = _t;

}
void sort_numeric( double *a, char c )//the array gets sorted
{
        int i, j;
    int size=11;
        for( i = 0; i < size; i++ ) {//two nested loop to sort the array
                for( j = 1; j < size - i;j++ ) {
                        if( (*(a + j - 1)) > (*(a + j)) && (c=='A'|| c=='a'))//ascenidng order
                                swap_double( (a + j - 1), (a + j) );
            else if(( *(a + j - 1)) < (*(a + j)) && (c=='D'||c=='d')) //descending order
                                swap_double( (a + j - 1), (a + j) );
                }
        }
}
int main(){
    double arr[11]={10,0.25,-2342.0,12123,3.145435,6,6,5.999,-2,-5,-109.56};
    printf("Sort in asscending order:   A or a\n");
    printf("Sort in descending order:   D or d\n");
    char c;
    scanf("%c",&c);
    sort_numeric(arr,c);
    printf("after sorting\n");
    int i;
    for(i=0;i<11;i++)
        printf(" %lf",arr[i]);
}