

#include <stdio.h>
#include <stdlib.h>
struct candindate_details{
        int candindate_id;
        char candindate_name[30];
        int votes;
    };
void candindate()
{
    struct candindate_details candindate;
    FILE *fptr;
    fptr = fopen("candindates.txt","a+");
    if(fptr == NULL){
        printf("Error opening file");
        exit(1);
    }
    printf("Type your candidate reg number: \n");

    scanf("%i",&candindate.candindate_id);

    printf("Type your name: \n");

    scanf("%s",candindate.candindate_name);

    printf("Candindate details : %i %s %i",candindate.candindate_id , candindate.candindate_name,0);

    fprintf(fptr,"%i %s %i\n",candindate.candindate_id , candindate.candindate_name,0);

}
