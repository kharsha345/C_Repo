#include<stdio.h>

#if z==1

int add(int, int);
int sub(int, int);
int mul(int, int);

typedef int (*fptr1[3])(int, int);

int main(void){
	fptr1 f1;
	f1[0] = add;
	f1[1] = sub;
	f1[2] = mul;
	int (*fptr[3])(int, int) = {NULL};
	fptr[0] = add;
	fptr[1] = sub;
	fptr[2] = mul;
	int a = 10;
	int b = 20;
	printf("%d\n", fptr[0](a, b));
	printf("%d\n", fptr[1](a, b));
	printf("%d\n", fptr[2](a, b));
	printf("%d\n", f1[0](a,b));
}

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

#elif z==2

int add(int, int);
int sub(int, int);
int mul(int, int);

typedef int (*fptr1)(int, int);

int main(void){
	fptr1 f1[3];
	f1[0] = add;
	f1[1] = sub;
	f1[2] = mul;
	int (*fptr[3])(int, int) = {NULL};
	fptr[0] = add;
	fptr[1] = sub;
	fptr[2] = mul;
	int a = 10;
	int b = 20;
	printf("%d\n", fptr[0](a, b));
	printf("%d\n", fptr[1](a, b));
	printf("%d\n", fptr[2](a, b));
	printf("%d\n", f1[0](a,b));
}

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

#elif z==3

int add(int, int);
int sub(int, int);
int mul(int, int);

typedef int (*fptr1)(int, int);

int main(void){
	fptr1 f1[3];
	f1[0] = add;
	f1[1] = sub;
	f1[2] = mul;
	int (*fptr[3])(int, int) = {NULL};
	(*(fptr + 0)) = add;
	(*(fptr + 1)) = sub;
	(*(fptr + 2)) = mul;
	int a = 10;
	int b = 20;
	printf("%d\n", (*(fptr + 0))(a, b));
	printf("%d\n", (*(fptr + 1))(a, b));
	printf("%d\n", (*(fptr + 2))(a, b));
	printf("%d\n", (*(f1))(a,b));
}

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

#endif
