#include <stdio.h>
struct  date  {
     int   day;
     int   month;
     int   year;
} *ptrdate;
main ()  {
   struct date today;
   ptrdate = &today;
   ptrdate->day    =  27;
   ptrdate->month  =  9;
   ptrdate->year   = 1985;
   printf("Today's date is %2d/%2d/%4d\n",ptrdate->day,ptrdate->month,ptrdate->year);
}
