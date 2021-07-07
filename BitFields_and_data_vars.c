#include<stdio.h>

#pragma pack(8)

typedef struct data_s{
	int a:4;
	int b;
	int c:2;
	char d;
	int e;
	float f;
	long g;
	//int h:2;

}data_t;

int main(void){
	printf("%d\n", sizeof(data_t));
	printf("%d\n", sizeof(double));
}
