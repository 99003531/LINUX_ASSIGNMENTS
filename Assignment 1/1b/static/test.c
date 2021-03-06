#include "mystring.h"
#include "myutils.h"
#include "bit_set_reset.h"
#include<stdio.h>
#include<string.h>
int main()
{   
    int n = 5, k = 1; int res=0;
    int number=1001;
    long fact = 1;
    int result;
    char city[20] = "HYDERABAD";
    char town[20] = "MANGALORE";
    char abc[20];
    printf("%d\n",mystrlen(city));
    printf("%s\n",mystrcpy(abc,city));
    printf("%s\n",mystrcat(city,town));
    printf("%d",mystrcmp(city,town));
    printf("%ld\n",factorial(3));
    if(checkPalindrome(number) == 0){
        printf("%d is a palindrome number.\n",number);}
    else if(checkPalindrome(number) == 1){
        printf("%d is not a palindrome number.\n",number);
    }
    result = check_prime(86);
    if ( result == 1 ){
      printf("It is prime number.\n");
    }
   else if(result == 0){
      printf("It is not prime number.\n");
   }
    printf("%d\n", vsum(3, 2, 3, 4));
    
printf("%d with %d-th bit Set: %d\n",n, k, set(n, k));
printf("%d with %d-th bit Cleared: %d\n",n, k, clear(n, k));
printf("%d with %d-th bit Toggled: %d\n",n, k, flip(n, k));
res=query(n, k);
if(res)
    printf("SET");
else
    printf("NOTSET");


    return 0;
}
