#include<stdio.h>
int main(){
    int a[3][3],c[3][3],i,j,m,n;
   
    
    printf("Enter the rows=");
    scanf("%d",&m);
    
    printf("Enter the coloums=");
    scanf("%d",&n);
    
    printf("Enter the matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    
    int k;
    printf("Enter the number to multiply in matrix=");
    scanf("%d",&k);
    
    for (i = 0; i < m; ++i){
        for (j = 0; j < n; ++j) {
            c[i][j] = k * a[i][j] ;
        }
    }
    
     printf("\nscaler matrix multiplicaation is \n");
    for (i = 0; i < m; ++i){
        for (j = 0; j < n; ++j) {
            printf("%d   ", c[i][j]);
            if (j == n - 1) {
                printf("\n\n");
            }
        }    
    }
    return 0;
}
