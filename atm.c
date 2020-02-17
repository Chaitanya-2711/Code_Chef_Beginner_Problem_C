#include<stdio.h>
int main() {
int wamt; //withdrawal amount
float balance; // balance in the account
scanf("%d", &wamt);
scanf("%f", &balance);
if (wamt <= (balance - 0.5)) // this amount should be there in the account
{
    if (wamt%5==0) //withdrawal amount should be multiple of 5
        printf("%.2f", balance - wamt - 0.5); // .2f is used for precision upto 2 digits after decimal
    else
        printf("%.2f", balance);
}
else
    printf("%.2f", balance);
return 0;
}
