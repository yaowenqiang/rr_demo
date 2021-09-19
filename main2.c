#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int num = random();
  for (int i = 0; i < num; ++i) {
    num = (num + random()) % 10;
    if(num == 5) {
      abort();
    }
  }
  return 0;
}
