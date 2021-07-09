#include<stdio.h>

#define CHOICE 3

typedef int (*fptr)(int, int);

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

fptr choice(int a){
	if(a==1){
		return add;
	}else if(a==2){
		return sub;
	}else{
		return mul;
	}
}

int main(void){
	fptr f1 = choice(CHOICE);
	printf("%d\n", f1(10, 20));	
}
