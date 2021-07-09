#include<stdio.h>

#define CHOICE 3

typedef int (*fptr)(int, int);
typedef int (*choice2(int a))(int, int);

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

//choice is a function taking an integer argument and returning a function pointer which takes two args (int, int) returning an integer
int (*choice(int a))(int, int){
	if(a==1){
		return add;
	}else if(a==2){
		return sub;
	}else{
		return mul;
	}
}

int (*(*choice1(char a))(int))(int, int){
	if(a=='a'){
		return choice;
	}else{
		return NULL;
	}
}

int main(void){
	choice2 *f2 = choice1('a');
	fptr fptr1 = f2(1);
	printf("%d\n", fptr1(10, 20));
	fptr f1 = choice(CHOICE);
	printf("%d\n", f1(10, 20));	
}
