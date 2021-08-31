#include <stdio.h>
#include<conio.h>
#include<windows.h>

typedef struct DEMO{
   int num_val;
}DEMO;

void options(){
   printf("  1. Send Money\n");
   printf("  2. Send Money to non-bkash user\n");
   printf("  3. Mobile recharge\n");
   printf("  4. Payment\n");
   printf("  5. Cash Out\n");
   printf("  6. Pay Bill\n");
   printf("  7. Get TK 75 bonus now!!\n");
   printf("  8. My Bkash\n");
   printf("  9. Reset Pin\n");

   get_opt_input();
}


void send_money_opt(){
   int mobile;
   int amount;
   int val;
   printf("Enter mobile number: ");
   scanf("%d", &mobile);
   fflush(stdin);

   printf("Enter Amount: ");
   scanf("%d", &amount);
   fflush(stdin);


   printf("\n\n---------------------------\n");
   printf("  You transfered balance: %d to mobile: %d,\n TrXID: 1ffgfg1sd15\n", mobile, amount);
   printf("---------------------------\n");
   printf("\n\n  Enter 1 for got to main menu and  0 to exit");
   scanf("%d", &val);

   if(val == 1){
      options();
      
   }else{
      exit(1);
   }
}

void get_opt_input(){
   int num;
   printf("Enter option number: ");
   scanf("%d", &num);

   if (num > 9)
   {
      printf(" Wrong number !!\n");
      get_opt_input();
   }else{
      if (num == 1)
      {
         printf(" Your Choice Send money option\n\n");
         send_money_opt();

      }else{
         printf("%d\n", num);
      }
   }
}

void mobile_recharge(){
   printf("This is a mobile recharge option for test");
}

int main(){

   char name[100] = "user";
   int balance = 5000;
   int pin = 1234;
   DEMO num1_demo;
   printf("  \n\n-----------Bkash--------------\n");
   printf("  name: %s\n", name);
   printf("  balance: %d\n", balance);
   printf("  --------------------------------\n");

   options();
   
   getch();
   return 0;
}