#ifndef ABOUTUS_H_INCLUDED
#define ABOUTUS_H_INCLUDED

#define dispLen 1366
#define dispWid 768

#define butLen 322
#define butWid 150

char button5[2][30]={"photo\\aboutus.png","photo\\buttonz.png"};
int but5[2],s,butx5,buty5, blink5=0;


void aboutUsLoading()
{

	for(s=0; s<2; s++){
	but5[s]=iLoadImage(button5[s]);
	}
}
void aboutUs()
{

	butx5=dispLen-120-30;
	buty5=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but5[0]);						//display
	iShowImage(butx5-zoom*(blink5==1),buty5-zoom*(blink5==1),		//back
		75+2*zoom*(blink5==1),50+2*zoom*(blink5==1),but5[1]);

}
#endif