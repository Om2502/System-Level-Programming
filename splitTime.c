#include<stdio.h>

//function declaration

void split_time(long, int*, int*, int*);

int main(){

int n, hr = 0, min = 0, sec = 0;

printf("Enter Seconds : ");

scanf("%d", &n);

//check if entered seconds is -ve, do nothing

if(n < 0) {

printf("Seconds cannot be -ve, Please enter non negative value");

}

else{

//calling split_time function

split_time(n, &hr, &min, &sec);

printf("Converted format: %d hour %d mins %d secs", hr, min, sec);

}

return 0;

}

//split_function definition

void split_time(long total_sec, int* hr, int* min, int* sec){

int remaing_sec = 0;

//3600 secs in 1 hour

*hr = total_sec/3600;

//total_sec mod 3600 will give remaining seconds

remaing_sec = total_sec%3600;

//60 secs in 1 min

*min = remaing_sec/60;

//remaing_sec mod 60 will give remaining seconds

*sec = remaing_sec%60;

}