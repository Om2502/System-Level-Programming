#include<stdio.h>                  //Importing the required header file


struct Country_codes{              //Declaration of struct to store the country name along with its dialing code
        int dialing_code;              //Declaration of integer variable dialing_code
        char country[25];              //Declaration of char variable country
}C[20];                            //Initialize of array of structure Country_codes

void code_initialize(){            //Function to insert and initialize country code along with its country
        for(int i=0;i<20;i++){
                scanf("%s %d",&C[i].country,&C[i].dialing_code);
        }
}


int main()
{  int code,flag=0;                //Declaration of integer variable code and flag
   code_initialize();              //Function call to function code_initialize to enter the values of code and country name
   printf("Enter the international dialing code of your wish:");        
   scanf("%d",&code);              //User input of international dialing code to search

   for(int i=0;i<20;i++){
        if(C[i].dialing_code==code){   //Checking whether there is a match
                printf("The country name is:%s",C[i].country);  //If yes print the country name belonging to the code
                flag=1;                                         //Update flag value to 1
                break;                                          //Break the loop
           }
   }    

        if(flag==0){                   //If no match found print the following statement
                printf("The given international dialing code doesn't exist!!!'");
        }
                
        return 0;
}