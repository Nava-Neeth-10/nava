#include <stdio.h>


int main(void)
 {

    int a,z=0;

    scanf("%d",&a);

    while(a!=0){

    	z=z+1;

    	a=a/10;

    }

    printf("%d",z);

   
return 0;

}
