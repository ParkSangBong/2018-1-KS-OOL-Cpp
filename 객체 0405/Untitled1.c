#include <stdio.h>
int main(){
    int a=10, b=100;
    int max=0;
    int min=1000;
    max = a>b ? a:b;
    printf("max=%d\n",max);
    
    min=a<b?a:b;
    printf("min=%d",min);
	return 0;
}
    
