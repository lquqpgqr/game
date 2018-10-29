#ifndef PAGE2_H_INCLUDED
#define PAGE2_H_INCLUDED

#define dispLen 1366
#define dispWid 768
int ilm;

void secondpage()
{
	//ifilledRectangle(0,0,disLen,diswid);
	ilm = iLoadImage("photo\\secondpagebg.png");
	iShowImage(0,0,dispLen,dispWid,ilm);
	iSetColor(255,0,0);
	iText(400, 60, "press space to continue", GLUT_BITMAP_TIMES_ROMAN_24); 
	 
}
#endif