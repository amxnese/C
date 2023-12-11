#include <stdio.h>
#include <string.h>
int main(void){
    typedef Player{
        char name[12];
        int score;
    }Player;
    int num_of_players;
    printf("how many players are there:  ");
    scanf("%d",&num_of_players);
    Player players[num_of_players];
    for(int i=0;i<num_of_players;i++){
        printf("enter player%d name:  ",i+1);
        scanf("%s",players[i].name);
        printf("enter player%d score:  ",i+1);
        scanf("%d",&players[i].score);
    }
    for(int i=0;i<num_of_players;i++){
            printf("player%d name and score is ==> %s : %d\n",i+1,players[i].name,players[i].score);
    }
    int max=0,max_index=0;
    for(int i=0;i<num_of_players;i++){
        if(players[i].score > max){
            max = players[i].score,max_index = i;
        }
    }printf("WINNER IS ==> %s",players[max_index].name);
}