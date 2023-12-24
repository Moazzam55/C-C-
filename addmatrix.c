#include<stdio.h>
void main(){
   int a[3][3],b[3][3],c[3][3],i,j;
   printf("Enter the elements of first matrix:\n");
   for(i=0;i<3;i++)
   {

       for(j=0;j<3;j++){


       printf("a[%d][%d]:",i+1,j+1);
        scanf("%d",&a[i][j]);
       }
   }

 printf("Enter the elements of second matrix:\n");
   for(i=0;i<3;i++)
   {

       for(j=0;j<3;j++){


       printf("b[%d][%d]:",i+1,j+1);
        scanf("%d",&b[i][j]);
       }
   }

    printf("Addition of two matrix:\n");
   for(i=0;i<3;i++)
   {

       for(j=0;j<3;j++){

            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);


       }
       printf("\n");
   }


}
