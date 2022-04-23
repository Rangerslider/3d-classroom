#include<graphics.h>
#include<sstream>
using namespace std;

 // Loading bar //
int main()
{
	initwindow(1366,768,"Game is Loading...");
	int text_width=textwidth("Loading...");
	int text_height=textheight("Loading...");
	int x=1366/2-text_width/2;
	int y=768/2-text_height/2-20;
	int n=1;
	int page=0;
	while(n<=101)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();

	 outtextxy(x,y,"Loading...");
	 rectangle(1366/2-101,768/2-2,1366/2+102,768/2+20+2);
	 stringstream s;
	 s<<n<<'%';
	 char ch[5];
	 s>>ch;
	 outtextxy(1366/2-20,768/2+30,ch);
	 for(int i=1;i<=n*2;i++)
	 {
	 	line(1366/2-100+i,768/2,1366/2-100+i,768/2+20);
	 }
	 n++;
	page=1-page;
	delay(20);
	}
	//getch();
	//closegraph();
    exit(1);
}
