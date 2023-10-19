#include<stdio.h>
int main()
{
    int classLevel;
    printf("eneter the num");
    scanf("%d",& classLevel);
    switch(classLevel)
  {
  case 1:
    printf("Freshman");
    break;
  case 2:
    printf("Sophomore");
    break;
  case 3:
    printf("Junior");
    break;
  case 4:
    printf("Senior");
    break;
  default:
    printf("ERROR: Unknown value!");
    break;
   }
}