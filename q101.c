/* Q--> WAP in C to create a structure named MOVIE to store following details of one movie and display it :
    Movie title
    Movie producer
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
    struct MOVIE m1 = {"The Shawshank Redemption","Frank Darabont",2.5,2.20};
    // printf("%s %s %f %f",m1.title,m1.producer,m1.budget,m1.duration);
    printf("Movie name : %s\n",m1.title);
    printf("Producer : %s\n",m1.producer);
    printf("Budget : %f\n",m1.budget);
    printf("Duration  : %.2f",m1.duration);

    return 0;
}


// Output

// Movie name : The Shawshank Redemption
// Producer : Frank Darabont
// Budget : 2.500000        
// Duration  : 2.200000 
