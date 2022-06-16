/* Q--> WAP in C to create a structure named MOVIE to store following movie details and display it.The structure must be able to store movie details for 100 movies.
    Movietitle
    Movieproducer
    Budget
    Duration of movie in hours 
*/

#include <stdio.h>

struct MOVIE{
    char title[50];
    char producer[20];
    float budget;
    float duration;
};


int main(){
    int i,size;

    printf("Enter the size of Movie details struct : ");
    scanf("%d",&size);

    struct MOVIE mov[size];
    // struct MOVIE mov[100];

    for(i=0;i<size;i++){
        printf("Enter details for mov[%d] Title : ",i);
        scanf("%s",mov[i].title);
        printf("Enter details for mov[%d] Producer : ",i);
        scanf("%s",mov[i].producer);
        printf("Enter details for mov[%d] Budget : ",i);
        scanf("%f",&mov[i].budget);
        printf("Enter details for mov[%d] Duration : ",i);
        scanf("%f",&mov[i].duration);

        // scanf("%s %s %f %f",mov[i].title,mov[i].producer,&mov[i].budget,&mov[i].duration);
    }

    for(i=0;i<size;i++){
        printf("Movie[%d] : %s\n",i,mov[i].title);
        printf("Producer[%d] : %s\n",i,mov[i].producer);
        printf("Budget[%d] : %f\n",i,mov[i].budget);
        printf("Duration[%d] : %f\n",i,mov[i].duration);
    }

    return 0;
}

