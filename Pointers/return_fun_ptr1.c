#include<stdio.h>

#define CHOICE 3

typedef int (*fptr)(int, int);
typedef int (*choice2(int a))(int, int);
typedef int (*(*choice4(char a))(int))(int, int);

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
//choice1 is function taking character as an argument and returning a function pointer which takes an integer argument which returns a function pointer which takes two integers arguments and returns an integer. 
int (*(*choice1(char a))(int))(int, int){
	if(a=='a'){
		return choice;
	}else{
		return NULL;
	}
}

//choice3 is a function which take no arguments and returns a function pointer which takes character as an argument and returning a function pointer which takes an integer argument which returns a function pointer which takes two integers arguments and returns an integer.
int (*(*(*choice3())(char))(int))(int, int){
	return choice1;	
}

int main(void){
	choice4 *f5 = choice3();
	choice2 *f6 = f5('a');
	//int *((*choicex(int a))(int, int)) = NULL; How to use it with out TypeDef?
	fptr fptr2 = f6(CHOICE);
	printf("%d\n", fptr2(10, 20));
	choice2 *f2 = choice1('a');
	fptr fptr1 = f2(CHOICE);
	printf("%d\n", fptr1(10, 20));
	fptr f1 = choice(CHOICE);
	printf("%d\n", f1(10, 20));	
}
