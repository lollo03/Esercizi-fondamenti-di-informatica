#include <stdio.h>

#define DMAX 10

int main(int argc, char const *argv[])
{
    int mat[DMAX][DMAX], i, j, dim;

    do{
        scanf("%d", &dim);
    }while (dim<=0 || dim > 10);
    
    for(i=0; i<dim; i++){
        mat[i][0] = 1;
        for(j=1; j<dim; j++)
            mat[i][j] = 0;
    }
        

    for(i=1; i<dim; i++){
        for(j=1; j<dim; j++){
            mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
        }
    }

    for(i=0; i<dim; i++){
        for(j=0; j<dim; j++)
            if(mat[i][j] != 0)
                printf("%d ", mat[i][j]);
        printf("\n");
    }
            


    return 0;
}
