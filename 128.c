#include<stdio.h> 
#include<math.h>
int main () {
	int t;
	float  x1,y1,x2,y2;
	scanf("%d\n",&t);
	while (t--) {
		scanf ("%f%f%f%f",&x1,&y1,&x2,&y2);
		printf("%.4f\n",sqrt (  (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
	}
}