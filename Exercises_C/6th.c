#include<stdio.h>
int main()
{
    int X,N,i,k;
    printf("Enter the number that player-1 picks: ");
    scanf("%d",&X);
    printf("\nEnter the number of choices that player-2 takes: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("\nGuess the number: ");
        scanf("%d",&k);
        if(X==k)
        {
            printf("\nRight, Player-2 wins!");
            break;
        }
        else
        {
            printf("\nWrong, %d choice(s) left",N-i);
            if(i==N)
            {
                printf("Player-1 wins!");
            }
        }
    }
}
