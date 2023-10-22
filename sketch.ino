#include <TVout.h>
#include "a.h"
#include "e.h"
#include "m.h"
#include "o.h"
#include "u.h"
#include "disturbance1.h"
#include "disturbance2.h"
#include "font6x8.h"

TVout tv;

void starting_animation(){
  for(int i=0;i<5;i++){
  tv.bitmap(20,16,d1);
  tv.delay(50);
  tv.bitmap(20,16,d2);
  tv.delay(50);
}
}
void speaking_animation(int x,int y){
  char message[] = "lates news";
  tv.print(30,80,message);
  for(int i=0;i<5;i++){
    tv.bitmap(x,y,e);
    tv.delay(100);
    tv.bitmap(x,y,m);
    tv.delay(100);
    tv.bitmap(x,y,o);
    tv.delay(100);
    tv.bitmap(x,y,u);
    tv.delay(100);
  }
}

void setup(){
  
  Serial.begin(9600);
  tv.begin(PAL);
  tv.select_font(font6x8);
  tv.clear_screen();
  tv.delay(100);
  starting_animation();
  tv.clear_screen();
  speaking_animation(35,0);
  tv.clear_screen();

}

void loop(){

}