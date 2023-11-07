#include<stdio.h>
#include <string.h>

int main()
{
  int matriz1[4][4],i, j;
  int matriz2[4][4],m, n;
  int matriz3Resultado[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  char operacao[7];

  //atribui os valores para a matriz
  for ( i=0; i<4; i++ )
    for ( j=0; j<4; j++ )
    {

      scanf ("%d", &matriz1[ i ][ j ]);
    }
  for ( m=0; m<4; m++ )
    for ( n=0; n<4; n++ )
    {

      scanf ("%d", &matriz2[ m ][ n ]);
    }  
     scanf("%s", operacao);
if(strcmp(operacao, "soma") == 0){
    for( i=0; i<4; i++ ){
        for( m=0; m<4; m++ ){
            matriz3Resultado[i][m] = matriz1[i][m] + matriz2[i][m];
        }
    }
    for ( i=0; i<4; i++ ){
    for ( j=0; j<4; j++ )
    {
      printf ("%4d",matriz3Resultado[ i ][ j ]);
    }
    printf("\n");
    }
} else if(strcmp(operacao, "sub") == 0) {
    for( j=0; j<4; j++ ){
        for( n=0; n<4; n++ ){
            matriz3Resultado[j][n] = matriz1[j][n] - matriz2[j][n];
        }
    }
    for ( i=0; i<4; i++ ){
    for ( j=0; j<4; j++ )
    {
      printf ("%4d",matriz3Resultado[ i ][ j ]);
    }
      printf("\n");
    }
}else{
    for( i=0; i<4; i++ ){
        for( j=0; j<4; j++ ){
          for( n=0; n<4; n++ ){
matriz3Resultado[i][j] = matriz3Resultado[i][j] + matriz1[i][n] * matriz2[n][j];
          }
        }
    }
    for ( i=0; i<4; i++ ){
    for ( j=0; j<4; j++ )
    {
      printf ("%4d",matriz3Resultado[ i ][ j ]);
    }
     printf("\n");
}
}

  return 0;
}