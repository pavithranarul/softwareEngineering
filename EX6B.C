#include <stdio.h>
int main()
{
int month;
clrscr();
do {
printf( "Please enter the month of your birth >>> " );
scanf( "%d", &month );
}
while( month<1 || month > 12);
// while ( (month >= 1) && (month <= 12) );
getch();
return 0;
}