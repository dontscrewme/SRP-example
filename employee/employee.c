#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
#include "include/employee_hour.h"
#include "include/employee_pay.h"

struct Employee
{
    uint8_t working_hour_today;
};

Employee* Employee_new(uint8_t working_hour)
{
    Employee* this = malloc(sizeof(Employee));
    if (NULL == this)
    {
        return NULL;
    }

    this->working_hour_today = working_hour;

    return this;
}

uint16_t Employee_calculatePay(Employee* this)
{
    return calculatePay(this->working_hour_today);
}

void Employee_reportHours(Employee* this)
{
    reportHours(this->working_hour_today);
}
