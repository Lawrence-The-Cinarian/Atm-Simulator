#include <stdio.h>
#include <math.h>
#include <string.h>
/*Can't Store Info on previous use but I'll update it as soon as i get the gist of it
Still Learning Fundamentals though and will keep learning*/
int main() {
do{
  int option;
  const double balUSD = 200000;
  const double balNGN = 200000;
  const double depo, with;
  char atmp [70]; //ATM PASSWORD
printf("Welcome To Automation Decentralized Mines");
printf("Please Enter You Password: ");
  scanf("%69s", atmp);
   if(strcmp(atmp, "Lawxey8") == 0) {
     printf("Access Granted\n");
     printf("Menu\n");
     printf("(1) Balance (USD and NGN)\n");
     printf("(2) Deposit USD\n");
     printf("(3) Deposit NGN\n");
     printf("(4) Withdraw USD\n");
     printf("(5) Withdraw NGN\n");
     printf("Enter Number from the Menu: ");
     scanf("%d", &option);
     switch(option) {
       case 1: 
         printf("Bal: %.2f\n", balUSD);
         printf("Bal: %.2f\n", balNGN);
       break;
       case 2: 
         printf("Enter Deposit Amt. in USD: ");
         scanf("%d", &depo);
         if(depo <= 0 ) {
          printf("Invalid Amount,\n Deposit Amount must be greater than 0\n");
          return depo;
         }
         else if(depo >= 1000000000) {
         printf("Invalid Amount,\n Deposit Amount must be less than 1000000000\n");
         return depo;
         }
         else {
         balUSD = balUSD + depo;
           printf("Successfully Deposited!\n Bal in USD: %.2f\n", balUSD);
         }
         break;
       case 3:
         printf("Enter Deposit Amt. in NGN: ");
         scanf("%d", &depo);
         if(depo <= 0 ) {
          printf("Invalid Amount,\n Deposit Amount must be greater than 0\n");
          return depo;
         }
         else if(depo >= 1000000000) {
         printf("Invalid Amount,\n Deposit Amount must be less than 1000000000\n");
         return depo;
         }
         else {
         balNGN = balNGN + depo;
           printf("Successfully Deposited!\n Bal in NGN: %.2f\n", balNGN);
         }
         break;
       case 4:
         printf("Enter Withdrawal Amt. in USD ");
         scanf("%d", &with);
         if(with<= 0 ) {
          printf("Invalid Amount,\n Withdrawal Amount must be greater than 0\n");
          return with;
         }
         else if(with >= 1000000000) {
         printf("Invalid Amount,\n Withdrawal Amount must be less than 1000000000\n");
         return with;
         }
         else {
         balUSD = balUSD - with;
           printf("Successfully Withdrawn!\n Bal in USD: %.2f\n", balUSD);
         }
         break;
       case 5:
         printf("Enter Withdrawal Amt. in NGN: ");
         scanf("%d", &with);
         if(depo <= 0 ) {
          printf("Invalid Amount,\n Withdrawal Amount must be greater than 0\n");
          return with;
         }
         else if(with >= 1000000000) {
         printf("Invalid Amount,\n Withdrawal Amount must be less than 1000000000\n");
         }
         else {
         balNGN = balNGN - with;
           printf("Successfully Withdrawn!\n Bal in NGN: %.2f\n", balNGN);
         }
         break;
     }
   }
  else {
    printf("Access Denied");
    return 0;
  }
}
while(bal != 0);
  return 0;
}

