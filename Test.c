#include<stdio.h>
#include<stddef.h> 

struct A{
	char a;
	double b;
};

int main()
{
	printf("%d\n",sizeof(struct A));
	printf("%d\n",offsetof( struct A , a));
	printf("%d\n",offsetof( struct A , b));
	return 0;
}
