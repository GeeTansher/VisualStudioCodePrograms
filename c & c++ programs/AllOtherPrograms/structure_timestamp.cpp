#include <stdio.h>

typedef struct timestamp{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
}st;
void display(st t)
{
    // printf("The date is: %d\n",t.date);
    // printf("The month is: %d\n",t.month);
    // printf("The year is: %d\n",t.year);
    // printf("The hour is: %d\n",t.hour);
    // printf("The minute is: %d\n",t.min);
    // printf("The second is: %d\n",t.sec);
    printf("The timestamp is: %d/%d/%d/%d/%d/%d\n",t.date,t.month,t.year,t.hour,t.min,t.sec);
}
int main()
{
    st t1={2,3,23,3,45,34};
    st t2={11,4,20,6,54,45};
    display(t1);
    display(t2);
    return 0;
}

