#include <stdio.h>
#define ARRAY_SIZE 200
#define pf printf
/* FUNCTIONS DECLARATIONS */
void find_all_possible_binary(int ,int );
void push(int );
void pop();

/******************************************************************************
* SIMPLE LIFO STACK .YOU CAN ADJUST ARRAY_SIZE ACCORDING TO YOUR SYSTEM MEMORY
replace pf with printf
*/
int stack[ARRAY_SIZE];
int top;

void push(int x){
	stack[++top]=x;
}

void pop(){
	stack[top--];
}
/******************************************************************************/

void find_all_possible_binary(int x,int temp)
{
	int i;
	if(temp!=-1){
		push(temp);
	} 
	if(x==0){
		for( i=0;i<=top;++i)
			pf("%d",stack[i]);
		pf("\n");
		pop();
	}
	else{   
		find_all_possible_binary(x-1,0);
		find_all_possible_binary(x-1,1);
		pop();        
	}
}
int main(){
	int no_of_bits;
	top=-1;
	pf("Enter number of bits: ");
	scanf("%d",&no_of_bits);
	find_all_possible_binary(no_of_bits,-1);
}
