#include <stdio.h>  
   
int main() {  
    int counter, N;    
    printf("Enter a Positive Number\n");  
    scanf("%d", &N);  
   
    printf("Printing Numbers form %d to 1\n", N);  
 
    counter = N;
    do {  
        printf("%d \n", counter);  
        counter--;
    } while(counter > 0);
     
    return 0;  
} 
