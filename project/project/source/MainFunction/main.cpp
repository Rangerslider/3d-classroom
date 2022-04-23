#include <iostream>
#include <cstdlib>
#include<graphics.h>
void draw() {
    readimagefile("C:\\Users\\MondolOZ\\Desktop\\source\\MainFunction\\res\\download.jpg",0,0,1366,768);

    setfillstyle(SOLID_FILL,RED);
    rectangle(700,250,900,300);
    outtextxy(750,265,"City Life Senario");
    floodfill(801,251,WHITE);

    setfillstyle(SOLID_FILL,RED);
    rectangle(700,325,900,375);
    outtextxy(750,340,"2D Color Game");
    floodfill(701,326,WHITE);

    setfillstyle(SOLID_FILL,RED);
    rectangle(700,400,900,450);
    outtextxy(750,415,"3D Classroom");
    floodfill(701,401,WHITE);

    setfillstyle(SOLID_FILL,RED);
    rectangle(700,475,900,525);
    outtextxy(750,490,"About");
    floodfill(701,476,WHITE);

    setfillstyle(SOLID_FILL,RED);
    rectangle(700,550,900,600);
    outtextxy(750,565,"Exit");
    floodfill(701,551,WHITE);
}
void citylife() {
    system("C:\\Users\\MondolOZ\\Desktop\\source\\game1\\citylife\\bin\\Debug\\citylife.exe");
}
void colorgame() {
    system("C:\\Users\\MondolOZ\\Desktop\\source\\game2\\colorgame.exe");
}
void classroom() {
    system("C:\\Users\\MondolOZ\\Desktop\\source\\game3\\bin\\Debug\\ui.exe");
}
void help() {
     system("C:\\Users\\MondolOZ\\Desktop\\source\\help\\help.exe") ;

}
int main() {
    system("C:\\Users\\MondolOZ\\Desktop\\source\\loading\\loading.exe") ;
    initwindow(1366,768,"Main Menu Item");
    POINT mouse;

    draw();
    while(1) {
        GetCursorPos(&mouse);
        if(GetAsyncKeyState(VK_LBUTTON)) {
            if((mouse.x<900 && mouse.x>700) && (mouse.y<300 && mouse.y>250)) {
                citylife();
            }
            if((mouse.x<900 && mouse.x>700) && (mouse.y<375 && mouse.y>325)) {
                colorgame();
            }
            if((mouse.x<900 && mouse.x>700) && (mouse.y<450 && mouse.y>400)) {
                classroom();
            }
            if((mouse.x<900 && mouse.x>700) && (mouse.y<525 && mouse.y>475)) {
                help();
            }
            if((mouse.x<900 && mouse.x>700) && (mouse.y<600 && mouse.y>550)) {
                exit(1);
            }
        }

    }
    getch();
    closegraph();
}

