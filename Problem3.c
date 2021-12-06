#include<stdio.h>

#include<string.h>

#define MAX_LENGTH 100 //assuming this is the maximum lenght of the sequence.increase this if need be



int is_palindrome(char *sequence, int seq_length){
int ispalin=1; //Assuming the sequence is palindrome
char rev_sequence[MAX_LENGTH]; //variable to keep reverse of the sequence
int j=0; //variable to keep current index of reverse sequence
for (int i = seq_length-1; i >= 0; i--){
rev_sequence[j]=sequence[i];
j++;
}

rev_sequence[j]='\0'; //ending the sequence with null character to make it a string
for (int i = 0; i < seq_length; i++){
if (sequence[i]!=rev_sequence[i]){// if any character mismatches sequence is not palindrome as reverse does not match the sequence
ispalin=0;
break;
}

}
return ispalin;
}

int main(){
char sequence[MAX_LENGTH];
printf("Enter the sequence: ");
scanf("%s",sequence); // taking input from user from stdio
if (is_palindrome(sequence,strlen(sequence))){ //is_palindrome takes 2 arguements one is sequence and other is length of the sequence
printf("%s is a palindrome\n",sequence);
}
else{
printf("%s is not palindrome\n",sequence);
}

return 0;

}