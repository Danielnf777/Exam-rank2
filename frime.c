#include <stdio.h>
#include <stdlib.h>

void putnumber(int n) 
{
    int prime = 2;
    int first = 1;
	if (n == 1) 
	{  
        	printf("1");
        	return;
    	}
    while (n > 1) 
    {
        if (n % prime == 0) 
	{
            if (!first)
                printf("*");
            printf("%d", prime);
            first = 0;
            n /= prime;
        } 
	else 
            prime++;
        
    }
}

int main(int argc, char **argv) 
{
    if (argc == 2) 
    {
    	int n = atoi(argv[1]);
    	putnumber(n);

    }
    printf("\n");
    return 0;
}

