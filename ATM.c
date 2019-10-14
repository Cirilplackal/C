#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int ch, deposit, choice, withdraw;
char pin[5];
float balance=10000.00;
printf("Enter your PIN\n");
scanf("%s",pin);
if(strlen(pin)!=4)
{
printf("\nEnter a four digit pin code!!!\n");
exit(0);
}
do
{
printf("\nEnter 1 for Balance Checking \n2 for Cash withdrawing\n3 for Cash Deposit");
printf("\nEnter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Your account balance is Rs %f",balance);
break;
case 2:
if(balance<100)
{
printf("\ninsufficient Balance\n");
break;
}
printf("Available denominations: 100\t500\t2000\n");
printf("Enter the amount to withdraw\n");
scanf("%d",&withdraw);
if(((withdraw%100)!=0)&&((withdraw%500)!=0)&&((withdraw%2000)!=0))
{
printf("\n WARNING: Enter amount in denominations of 100,500 and 2000 only!!!\n");
break;
}
balance=balance-withdraw;
printf("\nplease collect cash!!!\n");
break;
case 3:
printf("Deposit the amount");
scanf("%d",&deposit);
balance=balance+deposit;
printf("\nThank you for depositing your money!!!\n");
break;
default:
printf("Wrong Choice\n");
}
printf("Enter 1 to do another transaction and 2 to exit\n");
scanf("%d",&choice);
}
while(choice==1);
printf("\n Thank you for transacting with us....1!\n");
}
