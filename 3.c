#include <stdio.h>

int main(void)
{
    int mon;

    printf("Enter number(1-12): ");
    scanf("%1", &mon);

    switch (mon) {
      case 1:
      case 2:
      case 12:
          printf("Winter");
          break;
      case 3:
      case 4:
      case 5:
          printf("Spring");
          break;
      case 6:
      case 7:
      case 8:
          printf("Summer");
          break;
      default:
        printf("Autumn");
    }
}
