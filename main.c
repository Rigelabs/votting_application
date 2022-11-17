#include <stdio.h>
#include <stdlib.h>
#include "registration.h"
#include "candidates.h"
#include "voting.h"
int main()
{
    char oper;

    printf("Select operation : \n r = register v = vote c=candindate \n");
    scanf("%c",&oper);
    switch(oper)
    {
    case 'r':
        printf("Registration !!!!! \n");
        registration();
        break;
    case 'c':
        printf("Candindate !!!!! \n");
        candindate();
        break;
    case 'v':
        printf("Votting !!!!! \n");
        voting();
        break;
    default:
        printf("Done");
    }

    return 0;
}
