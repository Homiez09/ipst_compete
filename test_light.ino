#include <ipst.h>  // IPST-SE Board
int m=257,y=0,n=500;
void setup() {
OK();
}

void loop() {
glcd(0,0," %d,%d,%d ",analog(0),analog(1),analog(2));


}
