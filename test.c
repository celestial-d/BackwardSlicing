#include<stdio.h>

int sub(int num) {
	int tmp;
	tmp=num-1;
	return tmp;
}
int main() {
	int n=0;
	int odds=0;
	int sum=0;
	int x=5;
	x=x+20;
	//while(x>0) {
		sum+=x;
		++n;
		if (x%2)
			++odds;
		x=sub(x);
	//}
	printf("sum,%d\n",sum);
	printf("n,%d\n",n);
	printf("odds,%d\n",odds);
}
