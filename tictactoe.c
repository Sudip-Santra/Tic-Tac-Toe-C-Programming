#include<stdio.h>
#include<conio.h>
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main()
{
    int player=1,i,choice;
    char mark;
    while(1)
     {
        board();
        player=(player%2)? 1:2;
        printf("player %d, enter a no:",player);
        scanf("%d",&choice);
        mark=(player==1)? 'X':'O';
          if (choice== 1 && square[1]=='1')
            square[1]=mark;
          else if (choice== 2 && square[2]=='2')
            square[2]=mark;
          else if (choice== 3 && square[3]=='3')
            square[3]=mark;
          else if (choice== 4 && square[4]=='4')
            square[4]=mark;
         else if (choice== 5 && square[5]=='5')
            square[5]=mark;
         else if (choice== 6 && square[6]=='6')
            square[6]=mark;
         else if (choice== 7 && square[7]=='7')
         square[7]=mark;
         else if (choice== 8 && square[8]=='8')
            square[8]=mark;
         else if (choice== 9 && square[9]=='9')
            square[9]=mark;
            else
            {
                printf("Invalid move.");
                 player--;
            }
            i=checkwin();
            player++;
            if(i==1)
            {

                break;
            }

     }
      board();
      if(i==1)
      {
          printf("=> \a player %d win",--player);
      }
      else
      {
          printf("=> \a Game draw");
      }
      return 0;
}
//For win the Game
int checkwin()
{
    if(square[1]==square[2] && square[2]==square[3])
        return 1;
    else if(square[4]==square[5] && square[5]==square[6])
        return 1;
    else if(square[7]==square[8] && square[8]==square[9])
        return 1;
    else if(square[1]==square[4] && square[4]==square[7])
        return 1;
    else if(square[2]==square[5] && square[5]==square[8])
        return 1;
    else if(square[3]==square[6] && square[6]==square[9])
        return 1;
    else if(square[1]==square[5] && square[5]==square[9])
        return 1;
    else if(square[3]==square[5] && square[5]==square[7])
        return 1;
    else
        return -1;
}
void board()
{
   printf("\n\n TIC TAC TOE\n\n");
   printf("player 1 (X) - player 2 (O)\n\n\n");
   printf("  |  |  \n");
   printf(" %c| %c| %c \n",square[1],square[2],square[3]);
   printf("__|__|__\n");
   printf("  |  |  \n");
   printf(" %c| %c| %c \n",square[4],square[5],square[6]);
   printf("__|__|__\n");
   printf("  |  |  \n");
   printf(" %c| %c| %c \n",square[7],square[8],square[9]);
   printf("  |  |  \n\n");
}