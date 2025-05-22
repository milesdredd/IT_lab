#include<stdio.h>
void swapByValue(int a,int b){
	int temp = a;
	a = b;
	b = temp;
	printf("swapped by value in function \ta = %d \t b = %d\n",a,b);

}
void swapByRef(int* a, int* b){
	int temp = *a;
	*a= *b;
	*b = temp;
	printf("swapped by reference in funtion a = %d \t b = %d\n", *a, *b);
}

int main(){
	int a , b;
	printf("give two number to swap ");
	scanf("%d %d",&a, &b);
	printf("before swap : \t a = %d \t b = %d\n",a,b);
	swapByValue(a,b);
	printf("after swap by value : \t a = %d \t b = %d\n",a,b);

	swapByRef(&a,&b);
	printf("before swap by reference : \t a = %d \t b = %d\n",a,b);




}



