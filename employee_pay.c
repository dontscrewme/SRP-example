#include <stdint.h>

#define BASE 1
#define WEIGHT 2
#define REGULAR_HOUR_PER_DAY 6

uint16_t calculatePay(uint8_t hour)
{
    if (hour > REGULAR_HOUR_PER_DAY)
    {
        uint8_t non_regular_hour = hour - REGULAR_HOUR_PER_DAY;
        return ((REGULAR_HOUR_PER_DAY*BASE) + (non_regular_hour*BASE*WEIGHT));
    }
    else
    {
         return (REGULAR_HOUR_PER_DAY*BASE);
    }
}
