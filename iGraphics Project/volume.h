#ifndef VOLUME_H_INCLUDED
#define VOLUME_H_INCLUDED

#define dispLen 1366
#define dispWid 768


	
char button3[4][30]={"photo\\soundbg.png","photo\\button10.png","photo\\button11.png","photo\\buttonz.png"};
int but3[4],q,butx3[3],buty3[3], blink3=0;
bool music = true;

void volumeLoading(){
	for(q=0; q<4; q++){
		but3[q]=iLoadImage(button3[q]);
	}
}
	
void volume()
{

	butx3[0]=150;
	buty3[0]=100+butWid+30;
	butx3[1]=150+butLen+(50*2)+322;
	buty3[1]=100+butWid+30;
	butx3[2]=dispLen-120-30;
	buty3[2]=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but3[0]);							//display
	iShowImage(butx3[0]-zoom*(blink3==1), buty3[0]-zoom*(blink3==1),	//vol_on
		butLen+2*zoom*(blink3==1),butWid+2*zoom*(blink3==1),but3[1]);
	iShowImage(butx3[1]-zoom*(blink3==2),buty3[1]-zoom*(blink3==2),		//vol_off
		butLen+2*zoom*(blink3==2),butWid+2*zoom*(blink3==2),but3[2]);
	iShowImage(butx3[2]-zoom*(blink3==3),buty3[2]-zoom*(blink3==3),		//back
		75+2*zoom*(blink3==3),50+2*zoom*(blink3==3),but3[3]);

}



void playMe(){

	if (music){
		PlaySound("music.wav", NULL , SND_ASYNC|SND_LOOP);
	}

}
#endif