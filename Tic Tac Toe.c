#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char Board[3][3];
const char PLAYER='X';
const char COMPUTER='O';

void resetBoard();
void printBoard();
int Emptyspace();
char checkWinner();
void playerMove();
void computerMove();
void printWinner(char);

int main()
{
    char checkDecision=' ';
    char winner=' ';

    do
    {
        checkDecision=' ';
        resetBoard();
        winner=' ';
        while(winner=' ' && Emptyspace()!=0)
        {
            printBoard();

            playerMove();
            winner=checkWinner();
            if(winner!=' ' || Emptyspace()==0)
                break;
            computerMove();
            winner=checkWinner();
            if(winner!=' ' || Emptyspace()==0)
                break;
        }
        printBoard();
        printWinner(winner);
        printf("Do you want to play again (Y/N): ");
        scanf("%c");
        scanf("%c",&checkDecision);
    }
    while(checkDecision=='Y' || checkDecision=='y');

    printf("Thank's for playing\n");

    return 0;
}

void resetBoard()
{
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
            Board[i][j]=' ';
    }
}
void printBoard()
{
    printf("\n %c | %c | %c \n",Board[0][0],Board[0][1],Board[0][2]);
    printf("---|---|--- \n");
    printf(" %c | %c | %c \n",Board[1][0],Board[1][1],Board[1][2]);
    printf("---|---|--- \n");
    printf(" %c | %c | %c \n",Board[2][0],Board[2][1],Board[2][2]);
}
int Emptyspace()
{
    int space=9;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(Board[i][j]!=' ')
                space--;
        }
    }

    return space;
}
char checkWinner()
{
    ///check Horizontal line
    for(int i=0 ; i<3 ; i++)
    {
        if(Board[i][0]==Board[i][1] && Board[i][0]==Board[i][2])
            return Board[i][0];
    }
    ///check Vertical line
    for(int i=0 ; i<3 ; i++)
    {
        if(Board[0][i]==Board[1][i] && Board[0][i]==Board[2][i])
            return Board[0][i];
    }
    ///check Diagonal
    if(Board[0][0]==Board[1][1] && Board[0][0]==Board[2][2])
        return Board[0][0];
    if(Board[2][0]==Board[1][1] && Board[2][0]==Board[0][2])
        return Board[1][1];
}
void playerMove()
{
    int x,y;
    do
    {
        printf("\nEnter row number #(1-3): ");
        scanf("%d",&x);
        x--;
        printf("Enter column number #(1-3): ");
        scanf("%d",&y);
        y--;
        if(Board[x][y]==' ')
        {
            Board[x][y]=PLAYER;
            break;
        }
        else
        {
            printf("Invalid Output\n");
        }
    }while(Board[x][y]!=' ');
}
void computerMove()
{
    srand(time(0));
    int x,y;
    if(Emptyspace()>0)
    {
        do
        {
            x=rand()%3;
            y=rand()%3;
        }
        while(Board[x][y]!=' ');
        Board[x][y]=COMPUTER;
    }
    else
        printWinner(' ');
}
void printWinner(char winner)
{
    if(winner==PLAYER)
        printf("YOU WIN!\n");
    else if(winner==COMPUTER)
        printf("YOU LOSE\n");
    else
        printf("IT'S A TIE\n");
}
