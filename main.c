#include <stdio.h>
#include "employee/employee.h"


int main(void) {

  Employee* Andy = Employee_new(10);
  uint16_t money = Employee_calculatePay(Andy);
  printf("andy's money is %d\n", money);

  Employee_reportHours(Andy);

  return 0;
}