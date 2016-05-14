#include<stdio.h>
#include<stdlib.h>
/*
* bazat pe opinia lui Abhay Jain de pe
* http://stackoverflow.com/questions/2128728/allocate-matrix-in-c
*/

int main(void)
{
    int col=5;
    int row=5;

    int (*mat)[col];
    mat=(int (*)[col])malloc(sizeof(*mat)*row);

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            mat[i][j]=i+j;
        }
    }
    return 0;
}
