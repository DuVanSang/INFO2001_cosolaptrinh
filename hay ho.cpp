#include <stdio.h>
int main() {
int x = 5;
int result;

result = ++x;
printf("Result: %d\n", result); // Output: 6
printf("Updated value of x: %d\n", x); // Output: 6

return 0;
}
