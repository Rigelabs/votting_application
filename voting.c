#include <stdio.h>
#include <stdlib.h>

void voting()
{
    int candidate_id;
    int voter_id;
    FILE *fptr;
    fptr = fopen("results.txt","a+");
    if(fptr == NULL){
        printf("Error opening file");
        exit(1);
    }
    printf("Type your voter reg number: \n");

    scanf("%i",&voter_id);

    printf("Type candidate reg number:: \n");

    scanf("%i",&candidate_id);

    printf("Vote details : %i %i %i",candidate_id , voter_id,1);

    fprintf(fptr,"Candindate ID :%i Voter ID %i Vote %i\n",candidate_id , voter_id,1);

}
