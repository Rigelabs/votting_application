
#include <stdio.h>
#include <stdlib.h>
struct voter_details{
        int voter_id;
        char voter_name[30];
    };
void registration()
{
    struct voter_details voter;
    FILE *fptr;
    fptr = fopen("voters.txt","a+");
    if(fptr == NULL){
        printf("Error opening file");
        exit(1);
    }
    printf("Type your reg number: \n");

    scanf("%i",&voter.voter_id);

    printf("Type your name: \n");

    scanf("%s",voter.voter_name);

    printf("User details : %i %s",voter.voter_id , voter.voter_name);

    fprintf(fptr,"%i %s \n",voter.voter_id , voter.voter_name);

}
