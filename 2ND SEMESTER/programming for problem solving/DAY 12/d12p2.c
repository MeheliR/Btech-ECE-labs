#include <stdio.h>
struct cricket{
    char  Player_name[30];
    char Team_name[30];
    int Batting_average;
};
int main()
{
              int i;
              struct cricket player[ 30 ];         

              for(i=0;i<2;i++){
     
     printf(" Player name is:\n ");
     scanf(" %s", &player[i]. Player_name);
     printf("player's team:\n ");
     scanf(" %s", &player[i].Team_name);
     printf("player's batting average :\n");
     scanf(" %d", &player[i]. Batting_average);
     
     
}
 printf("\nDetails of players");
    for(i=0;i<2;i++){
     
     printf(" Player name is: %s", player[i]. Player_name);
     printf("\nplayer's team:%s",player[i].Team_name);
     printf("\nplayer's batting average : %d", player[i]. Batting_average);
   
     
}
}
