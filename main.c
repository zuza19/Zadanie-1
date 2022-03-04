#include <stdio.h>

#define pi 3.14
int main(void) {
  int r;
  float promien[100];
  printf( "Wprowadź promien: ");
  fgets(promien,100,stdin);
  r=atoi(promien);
  if (r<0) {
   printf("Niepoprawne dane\n"); 
  }
  else {
    double pole;
    pole=pi*r*r;
    printf("Pole wynosi %f\n", pole);
  }
  return 0;
}
