#include<stdio.h>

int main() {
   int inum, qty;
   float price, amt;
   char date[8];
   printf("Enter the item number: ");
   scanf("%d", &inum);
   printf("Enter the unit price: ");
   scanf("%f", &price);
   printf("\nEnter quantity: ");
   scanf("%d", &qty);
   printf("\nEnter the date (dd/mm/yy): ");
   scanf("%s", date);
   amt = price * qty;
   printf("\nItem\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
   printf("%d\t$%9.2f\t%d\t%s\t$%11.2f\n", inum, price, qty, date, amt);
   return 0;
}