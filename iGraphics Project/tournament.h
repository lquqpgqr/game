#ifndef TOURNAMENT_H_INCLUDED
#define TOURNAMENT_H_INCLUDED

#define dispLen 1366
#define dispWid 768

#define butLen 322
#define butWid 150

char button4[2][30]={"photo\\turnament.png","photo\\buttonz.png"};
int but4[2],r,butx4,buty4, blink4=0;

void tournamentLoading(){
	for(r=0; r<2; r++){
		but4[r]=iLoadImage(button4[r]);
	}

}
void tournament()
{

	butx4=dispLen-120-30;
	buty4=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but4[0]);						//display
	iShowImage(butx4-zoom*(blink4==1),buty4-zoom*(blink4==1),		//back
		75+2*zoom*(blink4==1),50+2*zoom*(blink4==1),but4[1]);

}
#endif