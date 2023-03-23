#include <stdio.h>
#include <stdlib.h>
#define N 20
int main(){
    int i;
    double *pnt;
double vt[N];

pnt = vt;
for(i = 0;i<N; i++)
{
*pnt=1+rand()%100;

printf("%.2f\n", *pnt);

pnt++;
}


    return 0;
}