/*郎ch13_06.cpp :═ó摸籔3ン */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

class car
{
  public:
    int wheel;
    int person;
    char name[20];
  private:
    char engine[20];
};

int main(void) 
{
  car bus,truck,taxi;

  strcpy(bus.name,"そó ");
  bus.wheel=6;
  bus.person=40;

  strcpy(truck.name,"ó ");
  bus.wheel=8;
  bus.person=3;

  strcpy(taxi.name,"璸祘ó ");
  bus.wheel=4;
  bus.person=5;
  //strcpy(taxi.engine,"V16 "); ぃ╬ノ篈跑计

  printf("%sΤ%d近,更%d\n",bus.name,bus.wheel,bus.person);
  printf("%sΤ%d近,更%d\n",truck.name,truck.wheel,truck.person);
  printf("%sΤ%d近,更%d\n",taxi.name,taxi.wheel,taxi.person);
  /*system("pause");*/
  return 0;
}
