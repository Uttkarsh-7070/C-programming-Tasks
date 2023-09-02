#include<stdio.h>
int main()
{
    int num,H;
    printf("Enter the number  between 1 to 100:");
    scanf("%d",&num);

    switch(num)
    { 
    case 21:
      printf("Right Answer\n");   
      break;
    default:
      printf("Try Again\n");  
    }
    
    while(num!=21)
    {
    printf("HINTS\n");
      
    printf("The number is cube root of 9261\n");
    printf("Enter the number again:");
    scanf("%d",&num); 
    if(num==21)
    { 
      printf("You got the right answer\n");
      break;
    }
    printf("The number is least common multiple 7 and 3\n");
    printf("Enter the number again:");
    scanf("%d",&num); 
    if(num==21) 
    {
      printf("You got the right answer\n");
      break;
    }
    printf("The number is 2^5-3^2-5+3\n");
    printf("Enter the number again:");
    scanf("%d",&num); 
    if(num==21) 
      printf("You got the right answer");  
    else
      printf("Better Luck Next Time");
    break;  
    }
    return 0;    
}