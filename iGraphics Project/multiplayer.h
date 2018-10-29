#ifndef MULTIPLAYER_H_INCLUDED
#define MULTIPLAYER_H_INCLUDED

#define dispLen 1366
#define dispWid 768

#define butLen 322
#define butWid 150

char button7[2][30]={"photo\\single.png","photo\\buttonz.png"};
int but7[2],u,butx7,buty7, blink7=0;




void multiPlayerLoading()
{

	for(u=0; u<2; u++){
	but7[u]=iLoadImage(button7[u]);
	}
}

void multiPlayer()
{

	butx7=dispLen-120-30;
	buty7=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but7[0]);						//display
	iShowImage(butx7-zoom*(blink7==1),buty7-zoom*(blink7==1),		//back
		75+2*zoom*(blink7==1),50+2*zoom*(blink7==1),but7[1]);

}



void ballMove2()
{
	if(postCheck==1){
		if(playerRun>33 && ballx<253 && bally<248){
			ballx=ballx-14;
			bally=bally+13;
		}
	}
	else if(postCheck==2){
		if(playerRun>33 && ballx<=120 && bally<248){
			ballx=ballx-10;
			bally=bally+20;
		}
	}
	else if(postCheck==3){
		if(playerRun>33 && ballx<25 && bally<248){
			ballx=ballx+2;
			bally=bally+20;
		}
	}
	else if(postCheck==4){
		if(playerRun>33 && ballx<=150 && bally<=250){
			ballx=ballx+15;
			bally=bally+25;
		}
	}
	else if(postCheck==5){
		if(playerRun>33 && ballx<285 && bally<248){
			ballx=ballx+23;
			bally=bally+20;
		}
	}
	else if(postCheck==6){
		if(playerRun>33 && ballx<285 && bally<353){
			ballx=ballx-11;
			bally=bally+15;
		}
	}
	else if(postCheck==7){
		if(playerRun>33 && ballx<=120 && bally<353){
			ballx=ballx-10;
			bally=bally+29;
		}
	}
	else if(postCheck==8){
		if(playerRun>33 && ballx<25 && bally<353){
			ballx=ballx+2;
			bally=bally+29;
		}
	}
	else if(postCheck==9){
		if(playerRun>33 && ballx<150 && bally<353){
			ballx=ballx+12;
			bally=bally+29;
		}
	}
	else if(postCheck==10){
		if(playerRun>33 && ballx<285 && bally<353){
			ballx=ballx+23;
			bally=bally+29;
		}
	}

}




#endif