#include <stdio.h>
#include <stdint.h>

#define REGULAR_HOUR_PER_DAY 8

static void send_report(uint8_t regular_hour, uint8_t non_regular_hour)
{
    printf("regular_hour: %d\n"
    "non_regular_hour: %d\n", regular_hour, non_regular_hour);
}

void reportHours(uint8_t hour)
{
    if (hour > REGULAR_HOUR_PER_DAY)
    {
        send_report(REGULAR_HOUR_PER_DAY, hour - REGULAR_HOUR_PER_DAY);
    }
    else
    {
        send_report(hour, 0);
    }
}
