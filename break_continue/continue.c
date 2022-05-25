#include <stdio.h>
int main()
{
  int number;

  for (number=5; number>0; number-- ) {
      if (number==3) {
          continue;// Quando o numero for igual a 3, vai pular e seguir com a iteracao
      printf(" %d",number);
  }

  return 0;
}