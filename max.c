#include<stdio.h>
int c,d,i,j;
int largest(int a[c][d],int row,int column);

main(){
    int a[10][10],i,j,k,c,r;
    printf("Enter row size : ");
    scanf("%d",&r);
    printf("\nEnter colomn size : ");
    scanf("%d",&c);
    printf("Enter Your Matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }


    printf("largest number is %d",largest(a,r,c));
}
int largest(int a[c][d],int row,int column)
{
    int temp=0;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if (a[c][d]>temp)
                temp=a[i][j];
        }

    }

}


