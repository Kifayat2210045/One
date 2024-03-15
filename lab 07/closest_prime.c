#include <stdio.h>

int prime_number(int num)
{
    int flag = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0 && num > 1)
    {
        return 0; // prime
    }
    else
    {
        return 1; // not prime
    }
}

int main()
{
    int number, prime, prime1, prime2;
    printf("Enter a number: ");
    scanf("%d", &number);

    prime = prime_number(number);

    if (prime == 0)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);

        // left side of the number
        for (int i = number - 1; i > 2; i--)
        {
            prime = prime_number(i);
            if (prime == 0)
            {
                prime1 = i;
                break;
            }
        }

        // right side of the number
        int i = number + 1;
        prime = prime_number(i);
        prime2 = i;

        while (prime != 0)
        {
            prime = prime_number(i);
            if (prime == 0)
            {
                prime2 = i;
                break;
            }
            i++;
        }

        if ((number - prime1) < (prime2 - number))
        {
            printf("The closest prime number is %d\n", prime1);
        }
        else
        {
            printf("The closest prime number is %d\n", prime2);
        }
    }

    return 0;
}