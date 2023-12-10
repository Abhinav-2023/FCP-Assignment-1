#include <stdio.h>

// int i,j,matrix1[3][3], matrix2[3][3];

int main(){
    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{10,11,12},{13,14,15},{16,17,18}};

    printf("matrix 1: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
printf("\n");

    printf("matrix 2: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", matrix2[i][j]);

        }printf("\n");
    }

return 0;
}