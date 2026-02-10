#include <stdio.h>
#include <math.h>
#include <string.h>
/*Can't Store Info on previous use but I'll update it as soon as i get the gist of it
Still Learning Fundamentals though and will keep learning
Updated Now you can run prompts and store info in it*/
int main() {
  int loop = 1;
  int option;
  double balUSD = 200000;
  double balNGN = 200000;
  double depo, with;
  double *ptr;
  char atmp [70]; //ATM PASSWORD
do{
printf("Welcome To Automation Decentralized Mines\n");
printf("Please Enter You Password: ");
  scanf("%69s", atmp);
   if(strcmp(atmp, "Lawxey8") == 0) {
     printf("Access Granted\n");
     printf("\n");
     printf("Menu\n");
     printf("(1) Balance (USD and NGN)\n");
     printf("(2) Deposit USD\n");
     printf("(3) Deposit NGN\n");
     printf("(4) Withdraw USD\n");
     printf("(5) Withdraw NGN\n");
     printf("\n");
     printf("Enter Number from the Menu: ");
     scanf("%d", &option);
     switch(option) {
       case 1: 
         ptr = &balUSD;
         printf("Bal: %.2f\n", balUSD);
         printf("\n");
         ptr = &balNGN;
         printf("Bal: %.2f\n", balNGN);
       break;
       case 2: 
         printf("Enter Deposit Amt. in USD: ");
         scanf("%lf", &depo);
         if(depo <= 0 ) {
          printf("Invalid Amount,\n Deposit Amount must be greater than 0\n");
           printf("\n");
          return depo;
         }
         else if(depo >= 1000000000) {
         printf("Invalid Amount,\n Deposit Amount must be less than 1000000000\n");
           printf("\n");
         return depo;
         }
         else {
         balUSD = balUSD + depo;
           printf("Successfully Deposited!\n Bal in USD: %.2f\n", balUSD);
           printf("\n");
         }
         break;
       case 3:
         printf("Enter Deposit Amt. in NGN: ");
         scanf("%lf", &depo);
         if(depo <= 0 ) {
          printf("Invalid Amount,\n Deposit Amount must be greater than 0\n");
           printf("\n");
          return depo;
         }
         else if(depo >= 1000000000) {
         printf("Invalid Amount,\n Deposit Amount must be less than 1000000000\n");
           printf("\n");
         return depo;
         }
         else {
         balNGN = balNGN + depo;
           printf("Successfully Deposited!\n Bal in NGN: %.2f\n", balNGN);
           printf("\n");
         }
         break;
       case 4:
         printf("Enter Withdrawal Amt. in USD ");
         scanf("%lf", &with);
         if(with<= 0 ) {
          printf("Invalid Amount,\n Withdrawal Amount must be greater than 0\n");
           printf("\n");
          return with;
         }
         else if(with >= 1000000000) {
         printf("Invalid Amount,\n Withdrawal Amount must be less than 1000000000\n");
           printf("\n");
         return with;
         }
         else {
         balUSD = balUSD - with;
           printf("Successfully Withdrawn!\n Ba in USD: %.2f\n", balUSD);
           printf("\n");
         }
         break;
       case 5:
         printf("Enter Withdrawal Amt. in NGN: ");
         scanf("%lf", &with);
         if(depo <= 0 ) {
          printf("Invalid Amount,\n Withdrawal Amount must be greater than 0\n");
           printf("\n");
          return with;
         }
         else if(with >= 1000000000) {
         printf("Invalid Amount,\n Withdrawal Amount must be less than 1000000000\n");
         printf("\n");
         }
         else {
         balNGN = balNGN - with;
           printf("Successfully Withdrawn!\n Bal in NGN: %.2f\n", balNGN);
           printf("\n");
         }
         break;
         default:
         printf ("Invalid Input\n");
       printf("\n");
     }
   }
  else {
    printf("Access Denied\n");
    printf("\n");
    return 0;
  }
}
while(loop != 0);
  return 0;
}

