# SRP-example
Single Responsibility Principle demonstrated in C

Initially there were no include and source folders. All code was in employee.c and employee.h.
In such case, employee.c and employee.h as a whole acted as same as a class.

There's nothing wrong with it, until this class is going to be responsible for more than one actor.

Let's say Employee_calculatePay() will be responsible for CFO and Employee_reportHours() for COO.
If CFO decides to change value of the macro REGULAR_HOUR_PER_DAY to implement new compensation rule,
COO is likely to be embarrassed because the output of report will be quite different from before.

To avoid this, methods in single file are separated into different files and thus become functions.
With doing this, each function now is responsible only for one actor.

Next, we need to clean up the mess so we don't disturb the client code.
From client's point of view, client don't give a shit what's going on with us but interface we give.

That's a reason why employee.c and employee.h still exist.

Rather than implementing it itself, employee now delegates it to functions.
Finally, the client can include Employee.h and do whatever the client likes as usual.
