// GENERATE RANDOM NUMBER WITHOUT USING RAND() FUNCTION.(GNU OCTAVE)
1.)OPEN OCTAVE
2.)TYPE "mkoctfile --link-stand-alone randomnumber.cc -o randomnumber"
3.) Make sure liboctave pkg is already installed on your linux system.//


#include <octave/oct.h>
#include<stdio.h>
#include<time.h>
int main()
{
int num=5;
time_t sec;
char option;
sec=time(NULL);
printf("\nDo you want to print random number? {Y|N) ");
scanf("%c", &option);
if (option =='y' || option =='Y')
{
for(;;)
{
sec=sec%3600;
if(num>=sec)
{
printf("%ld\n",sec);
break;
}
sec=sec%num;
}
}
else
{
printf("enter valid selection");
}
return 0;
}
