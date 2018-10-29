#ifndef PAGE1_H_INCLUDED
#define PAGE1_H_INCLUDED

#define dispLen 1366
#define dispWid 768

	char loading [9][30]={"loading\\0.png","loading\\1.png","loading\\2.png","loading\\3.png","loading\\4.png",
							"loading\\5.png","loading\\6.png","loading\\7.png","loading\\8.png"};
	int load[9], m, timecount =0;
void firstPageLoading(){
	for( m=0; m<9; m++)
	{
		load[m]=iLoadImage(loading[m]);
	}

}
void firstPage(){

		iShowImage(0,0,dispLen,dispWid,load[0]);
		if(timecount<5)
		iShowImage(0,0,dispLen,dispWid,load[1]);
		else if(timecount<8)
		iShowImage(0,0,dispLen,dispWid,load[2]);
		else if(timecount<12)
		iShowImage(0,0,dispLen,dispWid,load[3]);
		else if(timecount<15)
		iShowImage(0,0,dispLen,dispWid,load[4]);
		else if(timecount<19)
		iShowImage(0,0,dispLen,dispWid,load[5]);
		else if(timecount<23)
		iShowImage(0,0,dispLen,dispWid,load[6]);
		else if(timecount<27)
		iShowImage(0,0,dispLen,dispWid,load[7]);
		else if(timecount<30)
		iShowImage(0,0,dispLen,dispWid,load[8]);
}
void tcount(){
	if(timecount<40)
		timecount=timecount+2;
}


#endif