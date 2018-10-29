#ifndef MENU1_H_INCLUDED
#define MENU1_H_INCLUDED

#define dispLen 1366
#define dispWid 768
#define butLen 322
#define butWid 150
#define zoom 25

typedef struct buttonp1 buttonp1;

////////////for button coordination
struct buttonp1{
	int x, y;

}b1[7];


char button1[8][30] = { "photo\\menu.png", "photo\\button1.png", "photo\\button2.png", "photo\\button3.png",
"photo\\button4.png", "photo\\button5.png", "photo\\button6.png", "photo\\button7.png" };
int but1[8], n, blink1 = 0;




void menu1Loading(){

	for(n=0; n<8; n++){
	but1[n]=iLoadImage(button1[n]);
	}
	for (int ba = 0, bl=2; ba < 7;ba++){
		if (ba < 3){
			b1[ba].x = 150;
			b1[ba].y = 100 + ba*( butWid + 30);
		}
		else if (ba == 3){
			b1[ba].x = 150 + butLen + 50;
			b1[ba].y = 100;
		}
		else if (ba>3){
			b1[ba].x = 150 + butLen + (50 * 2) + 322;
			b1[ba].y = 100 + bl*(butWid + 30);
			bl -= 1;
		}
	}

}



void menu1(){

	iShowImage(0, 0, dispLen, dispWid, but1[0]);                     //display

	iShowImage(b1[3].x - zoom*(blink1 == 1), b1[3].y - zoom*(blink1 == 1),	//play
		322 + 2 * zoom*(blink1 == 1), 510 + 2 * zoom*(blink1 == 1), but1[1]);

	iShowImage(b1[0].x - zoom*(blink1 == 2), b1[0].y - zoom*(blink1 == 2),		//worldcup
		butLen + 2 * zoom*(blink1 == 2), butWid + 2 * zoom*(blink1 == 2), but1[2]);

	iShowImage(b1[1].x - zoom*(blink1 == 3), b1[1].y - zoom*(blink1 == 3),		//about us
		butLen + 2 * zoom*(blink1 == 3), butWid + 2 * zoom*(blink1 == 3), but1[3]);

	iShowImage(b1[2].x - zoom*(blink1 == 4), b1[2].y - zoom*(blink1 == 4),		//how to play
		butLen + 2 * zoom*(blink1 == 4), butWid + 2 * zoom*(blink1 == 4), but1[4]);
	
	iShowImage(b1[4].x - zoom*(blink1 == 5), b1[4].y - zoom*(blink1 == 5),		//volume
		butLen + 2 * zoom*(blink1 == 5), butWid + 2 * zoom*(blink1 == 5), but1[5]);

	iShowImage(b1[5].x - zoom*(blink1 == 6), b1[5].y - zoom*(blink1 == 6),		//score
		butLen + 2 * zoom*(blink1 == 6), butWid + 2 * zoom*(blink1 == 6), but1[6]);

	iShowImage(b1[6].x - zoom*(blink1 == 7), b1[6].y - zoom*(blink1 == 7),		//exit
		butLen + 2 * zoom*(blink1 == 7), butWid + 2 * zoom*(blink1 == 7), but1[7]);

}





#endif