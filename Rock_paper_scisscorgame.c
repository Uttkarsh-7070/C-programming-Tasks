#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber(int n);

void display(int m)
{
    if(m==1)
      printf("Rock");
    else if(m==2)
      printf("Paper");
    else
      printf("Scissor");
}

int main()
{
    //srand(time(NULL));
    printf("********ROCK PAPER SCISSORS GAME********\n");
    printf("----------------------------------------\n");
    
    int user,computer;
    while(1)
    {
      printf("Enter 1 for Rock.\n");
      printf("Enter 2 for Paper.\n");
      printf("Enter 3 for Scissor.\n");
      printf("Enter 0 to exit.\n");
      printf("Choice >> ");
      scanf("%d", & user);
      if(user==0)
        break;
      if(!(user>=1 && user <=3))
      {
        printf("ENTER VALID CHOICE\n ");
        continue;
      }  

      computer=generateRandomNumber(4);

      printf("\nyou played:");
      display(user);
      printf("\ncomputer played:");
      display(computer);

      if(computer == user)
        printf("\nIts a tie\n");
      else if(computer==1 && user==3)   
        printf("\ncomputer wins\n");
      else if(computer==2 && user==1)  
        printf("\ncomputer wins\n");
      else if(computer==3 && user==2)
        printf("\ncomputer wins\n");
      else 
        printf("\nYou won!\n");
    }
    return 0;      

}
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}