#include <stdio.h>


int main(void) {

    int a,i=0,b,z[100],y=0;

    scanf("%d",&a);

    scanf("%d",&b);

    for(i=0;i<a;i++){

    	scanf("%d",&z[i]);

    }

    for(i=0;i<b;i++){

    	y=y+z[i];

    }

    printf("%d",y);

   
return 0;

}
