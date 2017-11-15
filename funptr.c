#include<stdio.h>
int sq(int a)
{
return a*a;
}

int cube(int a)
{
return a*a*a;
}
int area(int a)
{
return a*a;
}
int main()
{
int ans;
int (*fun)(int a);

fun = sq;
ans=fun(6);
printf("sq is = %d\n",ans);

fun = cube;
ans = fun(7);
printf("cube is %d\n",ans);

fun = area;
ans = fun(8);
printf("area is %d\n",ans);
return 0;
}
