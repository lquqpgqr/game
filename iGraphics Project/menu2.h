#ifndef MENU2_H_INCLUDED
#define MENU2_H_INCLUDED


#define dispLen 1366
#define dispWid 768
#define butLen 322
#define butWid 150

char button2[4][30]={"photo\\menu2.png","photo\\button8.png","photo\\button9.png","photo\\buttonz.png"};
int but2[4],p, blink2=0;
struct buttonp2{
	int x, y;

}b2[3];


void menu2Loading(){
	for(p=0; p<4; p++){
		but2[p]=iLoadImage(button2[p]);
	}
	b2[0].x = 150;
	b2[0].y = 100 + butWid + 30;
	b2[1].x = 150 + butLen + (50 * 2) + 322;
	b2[1].y = 100 + butWid + 30;
	b2[2].x = dispLen - 120 - 30;
	b2[2].y = dispWid - 60 - 30;
}

void menu2(){

	iShowImage(0,0,dispLen,dispWid,but2[0]);							//display
	iShowImage(b2[0].x - zoom*(blink2 == 1), b2[0].y - zoom*(blink2 == 1),		//single_player
		butLen+2*zoom*(blink2==1),butWid+2*zoom*(blink2==1),but2[1]);
	iShowImage(b2[1].x - zoom*(blink2 == 2), b2[1].y - zoom*(blink2 == 2),		//multiplayer
		butLen+2*zoom*(blink2==2),butWid+2*zoom*(blink2==2),but2[2]);
	iShowImage(b2[2].x - zoom*(blink2 == 3), b2[2].y - zoom*(blink2 == 3),		//back
		75+2*zoom*(blink2==3),50+2*zoom*(blink2==3),but2[3]);

}

#endif