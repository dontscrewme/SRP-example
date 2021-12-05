#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdint.h>

typedef struct Employee Employee;

Employee* Employee_new(uint8_t working_hour);
uint16_t Employee_calculatePay(Employee* this);
void Employee_reportHours(Employee* this);


#endif