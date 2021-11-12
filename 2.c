#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int A, B;

do {
    A = get_int("A: ");
}
while (A < 0);

do {
    B = get_int("B: ");
}
while (A > B);

int sum = 0;
int i = A;

while (B >= A)
{
    sum += i;
    A++;
    i = A;
}
 printf(" Cума: %i\n", sum);

}
