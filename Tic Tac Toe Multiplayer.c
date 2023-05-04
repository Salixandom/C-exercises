#include <stdio.h>

const char PLY1='X';
const char PLY2='O';
char board[3][3];

void resetBoard();
void printBoard();
void playerMove1();
void playerMove2();
int checkSpace();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    char decision = ' ';

    do
    {
        decision = ' ';
        winner = ' ';

        resetBoard();

        while(winner==' ' && checkSpace()!=0)
        {
            printBoard();

            playerMove1();
            winner=checkWinner();
            if(checkSpace()==0 || winner!= ' ')
                break;

            playerMove2();
            winner=checkWinner();
            if(checkSpace()==0 || winner!=' ')
                break;
        }

        printBoard();
        printWinner(winner);
        printf("\nDo you want to play again (Y/N): ");
        scanf("%c");
        scanf("%c",&decision);
    }while(decision=='Y' || decision=='y');
    printf("Thank's for playing\n");

    return 0;
}

void resetBoard()
{
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
            board[i][j]=' ';
    }
}
void printBoard()
{
    printf("\n %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
}
void playerMove1()
{
    int x,y;
    do
    {
        printf("\nEnter player 1 row number #(1-3): ");
        scanf("%d",&x);
        x--;
        printf("Enter player 1 column number #(1-3): ");
        scanf("%d",&y);
        y--;
        if(board[x][y]==' ')
            board[x][y]=PLY1;
        else
            printf("Invalid Move!\n");
    }
    while(board[x][y]==' ');
}
void playerMove2()
{
    int x,y;
    do
    {
        printf("Enter player 2 row number #(1-3): ");
        scanf("%d",&x);
        x--;
        printf("Enter player 2 column number #(1-3): ");
        scanf("%d",&y);
        y--;
        if(board[x][y]==' ')
            board[x][y]=PLY2;
        else
            printf("Invalid Move!\n");
    }
    while(board[x][y]==' ');
}
int checkSpace()
{
    int count=0;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(board[i][j]!=' ')
                count++;
        }
    }
    return count;
}
char checkWinner()
{
    ///check horizontal line
    for(int i=0 ; i<3 ; i++)
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2])
            return board[i][0];
    ///check vertical line
    for(int i=0 ; i<3 ; i++)
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i])
            return board[0][i];
    ///check diagonal
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2])
        return board[1][1];
    if(board[2][0]==board[1][1] && board[0][2]==board[1][1])
        return board[1][1];
}
void printWinner(char winner)
{
    if(winner==PLY1)
        printf("PLAYER 1 WINS\n");
    else if(winner==PLY2)
        printf("PLAYER 2 WINS\n");
    else
        printf("IT'S A TIE\n");
}
