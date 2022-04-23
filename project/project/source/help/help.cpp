#include <iostream>
#include <cstdlib>
#include<graphics.h>
int main() {
    initwindow(1366,768,"About Us");
    readimagefile("C:\\Users\\MondolOZ\\Desktop\\source\\MainFunction\\res\\about.jpg",0,0,1366,768);
    getch();
    closegraph();
}
