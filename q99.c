// Q--> WAP in C to find lowest common multiple in C using pointers and function.

#include <stdio.h>

int LCM(int *a,int *b){
	int L;
	for(L=(*a > *b? *a: *b);L<*a * *b;L++){
		if(L % *a==0&&L % *b==0)
			break;
	}
	return L;
}

int main(){
	int a,b,res;
	printf("Enter the two numbers : ");
	scanf("%d%d",&a,&b);

	res=LCM(&a,&b);
	printf("LCM of %d and %d number is %d",a,b,res);

	return 0;
}
