
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

char bitzero(char x) {
    int i;
    char bitt = x&0x1;
    for (i=0; i<8; i++) {
        bitt |= (x>>i)&1;
    }
    return 1-bitt;
}

void rajzol(char width, char height) {
    int i;
    for (i=1; i<=height; i++) {
        std::cout << std::endl;
    }
    for (i=1; i<=width; i++) {
        std::cout << " ";
    }
    std::cout << "¤" << std::endl;
}

int main() {
    char x=1, y=1, vx=1, vy=1;
    while(1) {
        system("clear");
        vx-=2*bitzero(79-x);
        vx+=2*bitzero(x);
        vy-=2*bitzero(24-y);
        vy+=2*bitzero(y); 
        x+=vx;
        y+=vy;
        rajzol(x,y);
        usleep(100000);
    } 
	return 0;
}
