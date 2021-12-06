#include<conio.h>
#include<stdio.h>

int p; /* p will hold lenght of input */
char pswd[100];/*password that will be entered*/
char c; /* taking input from user one by on character*/
int l=-1; /* index variable */
int score=0;/* counter variable used for count of pswd length*/

void main(){
clrscr();
printf("input the password plz do not give spaces between \n");

do{
c= getchar() ; /* taking input from user using getchar(),it will read one by one character*/
pswd[l]=c;/* writing c at index l of pswd*/
l++;
}

while(c!='\n');
p=strlen(pswd);

if(p<10){
int r=10-p;/* finding how much less than 10 the pswd is*/
score=-1*(r*5);/*deducing 5 points per missing character*/
printf(" score = %d \n",score);

if((-1*(score))>=30)/* since we have to consider magnitude of deduction so considered -score*/
printf("password is unsafe! plz reset");
else
printf("safe password");
}

if(p>10){
int r=p-10;/* finding how much greater than 10 the pswd is*/
score=r*5;
printf(" score = %d \n",score);
if(score>30)
printf("password is unsafe! plz reset");
else
printf("safe password");
}

if(p==10)
printf("safe password");
getch();
}   