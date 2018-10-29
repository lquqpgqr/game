#ifndef HOWTO_H_INCLUDED
#define HOWTO_H_INCLUDED


#define dispLen 1366
#define dispWid 768
#define butLen 322
#define butWid 150

char button9[4][30]={"photo\\howtoplay.png","photo\\kicking.png","photo\\goalkeeping.png","photo\\buttonz.png"};
int but9[4],w,butx9[3],buty9[3], blink9=0;
char button10[2][30]={"photo\\kickdes.png","photo\\buttonz.png"};
int but10[2],x,butx10,buty10, blink10=0;
char button11[2][30]={"photo\\goalkides.png","photo\\buttonz.png"};
int but11[2],y,butx11,buty11, blink11=0;
	


void howToLoading(){
	for(w=0; w<4; w++){
		but9[w]=iLoadImage(button9[w]);}
	for(x=0; x<2; x++){
	but10[x]=iLoadImage(button10[x]);	///kicking
	}
	for(y=0; y<2; y++){
	but11[y]=iLoadImage(button11[y]);	///goalkeeping
	}
}
void howTo(){
	
	butx9[0]=150;
	buty9[0]=100+butWid+30;
	butx9[1]=150+butLen+(50*2)+322;
	buty9[1]=100+butWid+30;
	butx9[2]=dispLen-120-30;
	buty9[2]=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but9[0]);							//display
	iShowImage(butx9[0]-zoom*(blink9==1), buty9[0]-zoom*(blink9==1),		//kicking
		butLen+2*zoom*(blink9==1),butWid+2*zoom*(blink9==1),but9[1]);
	iShowImage(butx9[1]-zoom*(blink9==2),buty9[1]-zoom*(blink9==2),		//goalkeeping
		butLen+2*zoom*(blink9==2),butWid+2*zoom*(blink9==2),but9[2]);
	iShowImage(butx9[2]-zoom*(blink9==3),buty9[2]-zoom*(blink9==3),		//back
		75+2*zoom*(blink9==3),50+2*zoom*(blink9==3),but9[3]);

}

void kicking()
{

	butx10=dispLen-120-30;
	buty10=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but10[0]);						//display
	iShowImage(butx10-zoom*(blink10==1),buty10-zoom*(blink10==1),		//back
		75+2*zoom*(blink10==1),50+2*zoom*(blink10==1),but10[1]);

}
void goalkeeping()
{


	butx11=dispLen-120-30;
	buty11=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but11[0]);						//display
	iShowImage(butx11-zoom*(blink11==1),buty11-zoom*(blink11==1),		//back
		75+2*zoom*(blink11==1),50+2*zoom*(blink11==1),but11[1]);

}

#endif