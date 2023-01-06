#include <stdio.h>

int main()
{
    char currencyUnit;
    double Naira; l
    double Dollar;
    
    printf("Enter unit of currency you would like to convert:\n");
    scanf("%c", &currencyUnit);
    
    if (currencyUnit == 'N')
    {
    printf("Enter amount in Naira:\n");
    scanf("%lf \n", &Naira);
    Dollar = (1/550) * Naira;
    printf(" Your amount %lf in Dollar is %lf\n", Naira, Dollar);
    }
    else if(currencyUnit == '$')
    {
    printf("Enter amount in Dollar:\n");
    scanf("%lf \n", &Dollar);
    Naira = (1/550) * Dollar;
    printf(" Your amount %lf in Naira is %lf\n", Dollar, Naira);
    }
    else
    {a
       print("You entered an invalid currency unit");
    }

    return 0;
}

