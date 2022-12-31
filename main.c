#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

//
int order();
int login();
int receive();
int display();
void items();
//
struct login
{
 char user_name[25];
 char pass_name[25];
};
struct order
{
 char name[50];
 char address[100];
 int number[20];
 int order_number;
 int number_of_Rice;
 int served_count;
 int cost;
} p[1000];
//
//
int order_taken = 0, served_count = 0, waiting_now = 0;
int order()
{
 int n, in, qu;
 fflush(stdin);
 printf("please enter your name: ");
 gets(p[order_taken].name);
 printf("please enter your number: ");
 gets(p[order_taken].number);
 printf("please enter your address: ");
 gets(p[order_taken].address);
 p[order_taken].order_number = 0;
 p[order_taken].order_number = p[order_taken].order_number + order_taken;
 items();
 printf("\nHow many items you want to order? \n");
 scanf("%d", &n);
 p[order_taken].cost = order_taken;
 p[order_taken].number_of_Rice = order_taken;
 p[order_taken].served_count = n;

 getchar();
 while (n--)
 {
 printf("\nEnter chosen item code:\n");
 scanf("%d", &in);
 getchar();
 switch (in)
 {
 case 11:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;

 if (i == 1)
 p[order_taken].cost += (2100 * qu);

 else
 p[order_taken].cost += (4200 * qu);
 break;
 }
 case 12:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;

 if (i == 1)
 p[order_taken].cost += (3000 * qu);

 else
 p[order_taken].cost += (6000 * qu);

 break;
 }
 case 13:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg \n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;

 if (i == 1)
 p[order_taken].cost += (3375 * qu);

 else
 p[order_taken].cost += (6600 * qu);

 break;
 }
 case 14:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;

 if (i == 1)
 p[order_taken].cost += (2250 * qu);

 else
 p[order_taken].cost += (4400 * qu);

 break;
 }
 case 15:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;

 if (i == 1)
 p[order_taken].cost += (3450 * qu);

 else
 p[order_taken].cost += (6500 * qu);

 break;
 }
 case 16:
 {
 printf("Enter the amount of Rice: 1. 25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;

 if (i == 1)
 p[order_taken].cost += (2425 * qu);

 else
 p[order_taken].cost += (4800 * qu);

 break;
 }
 case 17:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);

 getchar();

 p[order_taken].number_of_Rice += qu;
 if (i == 1)
 p[order_taken].cost += (2350 * qu);

 else
 p[order_taken].cost += (4700 * qu);
 break;
 }
 case 18:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;
 if (i == 1)
 p[order_taken].cost += (1700 * qu);

 else
 p[order_taken].cost += (3400 * qu);
 break;
 }
 case 19:
 {
 printf("Enter the amount of Rice: 1.25kg 2.50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac):\n ");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;
 if (i == 1)
 p[order_taken].cost += (6250 * qu);

 else
 p[order_taken].cost += (12500 * qu);
 break;
 }
 case 20:
 {
 printf("Enter the amount of Rice: 1. 25kg 2. 50kg\n");
 int i;
 scanf("%d", &i);
 getchar();

 printf("Please enter the quantity(1sac): \n");
 scanf("%d", &qu);
 getchar();

 p[order_taken].number_of_Rice += qu;

 if (i == 1)
 p[order_taken].cost += (2800 * qu);

 else
 p[order_taken].cost += (5600 * qu);
 break;
 }
 default:
 {
 printf("Invalid selection try again.\n");
 n++;
 }
 }
 }
 char temp;
 printf("\nDo you want to order anything else?(y/n)\n ");
 scanf("%c", &temp);
 if (temp == 'n' || temp == 'N')
 {
 printf("\n====================================================================\n");
 printf("Number of Rice ordered(per sac): %d \n", p[order_taken].number_of_Rice);
 printf("\n*Thank you %s for your order.* |Your bill is %dtk.|\n\nPlease wait until the Rice is ready to be delivered..\n\n", p[order_taken].name, p[order_taken].cost);
 printf("====================================================================\n\n");
 order_taken++;
 }
 else
 {
 order();
 }
}
int receive()
{
 if (order_taken == 0)
 {

 printf("\n------Please order first---------\n\n");
 return;
 }

 else if (served_count == order_taken)
 {
 printf("\n------All order served---------\n\n");
 printf("\n====================================\n");
 return;
 }
 for (int i = 0; i < served_count + 1; i++)
 {
 printf("Order no. %d by %s Phone no: %s Address:%s is ready for Delivery\n", i + 1, p[i].name,p[i].number,p[i].address);
 }

 served_count++;
}
int display()
{
 printf("Total order taken: %d\n", (order_taken));
 printf("Total number of order served: %d\n\n", served_count);
}
void items()
{
 printf("\n-------------------------------------|| MENU ||------------------------------------------\n\n");

 printf("Item Code# Rice name-------------------amount--------------------Price(tk)\n");

 printf("[11]-------- Basic Rice ----------------25kg/50kg----------------- 2100tk/4200tk \n");
 printf("[12]-------- Premium Rice --------------25kg/50kg----------------- 3000tk/6000tk \n");
 printf("[13]-------- Chinigura Rice-------------25kg/50kg----------------- 3375tk/6600tk \n");
 printf("[14]-------- Miniket -------------------25kg/50kg----------------- 2250tk/4400tk \n");
 printf("[15]-------- Premium Miniket -----------25kg/50kg----------------- 3450tk/6500tk \n");
 printf("[16]-------- Shail ---------------------25kg/50kg----------------- 2425tk/4800tk \n");
 printf("[17]-------- Nazirshail ----------------25kg/50kg----------------- 2350tk/4700tk \n");
 printf("[18]-------- Atop ----------------------25kg/50kg----------------- 1700tk/3400tk \n");
 printf("[19]-------- Basmati -------------------25kg/50kg----------------- 6250tk/12500tk \n");
 printf("[20]-------- Katari Bhog ---------------25kg/50kg----------------- 2800tk/5600tk \n");

}
int main()
{
 int log_suc;
 splash_screen();

 do
 {
 log_suc = logInSystem();
 } while ( !log_suc );
 while (1)
 {
 printf("===================================== \n");
 printf(" Welcome To Online Rice Store.\n");
 printf("=====================================\n");
 printf("=====================\n");
 printf(" 1. Give Order. \n");
 printf("===================== \n");
 printf(" 2. Delivery. \n");
 printf("===================== \n");
 printf(" 3. Display. \n");
 printf("===================== \n");
 printf(" 4. Exit the program.\n");
 printf("===================== \n");

 int in;
 scanf("%d", &in);
 getchar();
 switch (in)
 {
 case 1:
 {
 system("cls");
 order();
 break;
 }
 case 2:
 {
 system("cls");
 receive();
 break;
 }
 case 3:
 {
 system("cls");
 display();
 break;
 }
 case 4:
 {
 system("cls");
 printf("Thank You for purchasing from Online Auto Rice Mill.\n\n");
 return 0;
 }
 }
 }
}

//
//
//

void register_()
{
 FILE *log_in;
 log_in = fopen("Login.txt", "w");
 struct login log;
 fflush(stdin);
 printf("Register\n");
 printf("Give a user name:");
 fgets(log.user_name, 25, stdin);
 log.user_name[strlen(log.user_name) - 1] = 0;
 fflush(stdin);
 printf("Enter Password:");
 fgets(log.pass_name, 25, stdin);
 log.pass_name[strlen(log.pass_name) - 1] = 0;

 fwrite(&log, sizeof(log), 1, log_in);

 fclose(log_in);

 printf("\nCongratulations.You have successfully logged in.\n");
 printf("Thanks please wait.");
 Sleep(1000);
 system("cls");
 login();
};
int login()
{
 char userName[50], passWord[25];
 FILE *log_in;
 log_in = fopen("Login.txt", "r");
 struct login log;
 printf("LOG IN:\n");
 fflush(stdin);
 printf("User name:");
 fflush(stdin);

 fgets(userName, 50, stdin);
 userName[strlen(userName) - 1] = 0;

 printf("\nPassword:");
 fgets(passWord, 25, stdin);
 passWord[strlen(passWord) - 1] = 0;

 while (fread(&log, sizeof(log), 1, log_in))
 {
 if (strcmp(userName, log.user_name) == 0 && strcmp(passWord, log.pass_name) == 0)
 {
 printf("\n\nLogged in!!\n\n");
 return 1;
 }
 else
 {
 printf("\nIncorrect Password\n");
 return 0;
 }
 }
 fclose(log_in);
};
int logInSystem(void)
{
 int choose;
 printf("\n Press 1 to Log in or 2 to Register: ");

 scanf("%d", &choose);

 if (choose == 1)
 {

 system("cls");
 int result = login();
 return result;
 }
 else if (choose == 2)
 {

 system("cls");
 register_();
 }
}

void splash_screen(void)
{
 printf("\n\n");
 printf(" WELCOME TO ONLINE RICE STORE \n");

}



