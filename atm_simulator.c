#include<stdio.h>
int main()
{
    printf("               ATM SIMULATOR\n");
    printf("------------------------------------------\n");
    
    int pin,choice,bal=2000,deposit,withdraw;
    printf("ENTER YOUR ATM PIN:");
    scanf("%d",&pin);
    if(pin!=1050)
    {
        printf("PLEASE ENTER VALID ATM PIN\n");
        printf("ENTER YOUR ATM PIN:");
        scanf("%d",&pin);
        printf("\n");
    }

    printf("**********WELCOME TO ATM SERVICE**********\n");
    printf("1.CHECK BALANCE\n");
    printf("2.DEPOSIT CASH\n");
    printf("3.WITHDRAW CASH\n");
    printf("4.QUIT\n");
    
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
       printf("BALANCE:%d",bal);
    }
    if(choice==2)
    {
       printf("ENTER DEPOSIT AMOUNT:");
       scanf("%d",&deposit); 
       bal+=deposit;
       printf("UPDATED BALANCE:%d",bal);
    }
    if(choice==3)
    {
        printf("ENTER AMOUNT YOU NEED TO WITHDRAW:");
        scanf("%d",&withdraw);
        if(withdraw<bal) 
        {
            printf("AMOUNT WITHDRAW:%d",withdraw);
            printf("REMAINING BALANCE:%d",bal-withdraw);
        } 
        else
        {
            printf("INSUFFICIENT BALANCE");
        }   
    }
    if(choice==4)
    {
        printf("THANK YOU");
    }
}
