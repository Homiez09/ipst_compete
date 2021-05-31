#include <ipst.h>
int m=500,y=0,n=400;
void setup() {
  OK();

}
void loop() {
if(analog(0)>m&&analog(1)>m){fd(30);}
else if(analog(0)<m&&analog(1)>m){sl(23);}
else if(analog(0)>m&&analog(1)<m){sr(23);}
else if(analog(0)<m&&analog(1)<m){
  y=y+1;
if(y==1){fd(30);}
if(y==2){fd(25);}
if(y==3){fd(25);delay(500);ao();delay(10000000);}
}
}
