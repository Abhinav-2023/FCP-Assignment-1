#include <stdio.h>

void main()
{
    int a [3][3],b[3][3],transpose[3][3],i,j;
    printf("Enter values of matrix\n");

    for(int l=0;l<3;l++)
    {
        for(int m=0;m<3;m++)
        {
            printf("enter elements at %d%d position: ",l+1,m+1);
            scanf("%d", &a[l][m]);
        }
    }

    b[0][0]=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);

    b[0][1]=-((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));

    b[0][2]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);

    b[1][0]=-((a[0][1]*a[2][2])-(a[0][2]*a[2][1]));

    b[1][1]=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);

    b[1][2]=-((a[0][0]*a[2][1])-(a[0][1]*a[2][0]));

    b[2][0]=(a[0][1]*a[1][2])-(a[0][2]*a[1][1]);

    b[2][1]=-((a[0][0]*a[1][2])-(a[0][2]*a[1][0]));

    b[2][2]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            transpose[i][j]=b[j][i];
            printf(" %i ",transpose[i][j]);
        }
        printf("\n");
    }

}