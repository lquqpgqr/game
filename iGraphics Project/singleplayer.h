#ifndef SINGLEPLAYERPLAYER_H_INCLUDED
#define SINGLEPLAYERPLAYER_H_INCLUDED

#define dispLen 1366
#define dispWid 768

#define butLen 322
#define butWid 150

void isGoal();
void goalkeeMove();
void celebration();
void singlePlayer();
void run();
void goalkeeperJump();
void player();
void ballKick();
void ballMove();
void nameInpute();


bool kick=false;
int but6[2],t,butx6,buty6, blink6=0;
int play[2][45],z,aaaa,bbbb,cccc,dddd;
char button6[2][30]={"photo\\single.png","photo\\buttonz.png"};
int ball[2], ballShow, ballx=0, bally=0;
int postCheck=0 ;
int playerRun =0;
int goalCount[2] = { 0, 0 }, countCount[2] = { 0, 0 }, celeb[3];
int whoPlays = 0, currentPlayer = 0,face=1;
char dispScore[2][30];
char winner[100];
int writting = 0, len=0;
int value,gk4;
int mycele[3][102];



char player1[92][30]={"player\\1.png","player\\2.png","player\\3.png","player\\4.png","player\\5.png","player\\6.png",
"player\\7.png","player\\8.png","player\\9.png","player\\10.png","player\\11.png","player\\12.png","player\\13.png",
"player\\14.png","player\\15.png","player\\16.png","player\\17.png","player\\18.png","player\\19.png","player\\20.png",
"player\\21.png","player\\22.png","player\\23.png","player\\24.png","player\\25.png","player\\26.png","player\\27.png",
"player\\28.png","player\\29.png","player\\30.png","player\\31.png","player\\32.png","player\\33.png","player\\34.png",
"player\\35.png","player\\36.png","player\\37.png","player\\38.png","player\\39.png","player\\40.png","player\\41.png",
"player\\42.png","player\\43.png","player\\44.png","player\\45.png","player\\46.png",
"player2\\1.png","player2\\2.png","player2\\3.png", "player2\\4.png","player2\\5.png","player2\\6.png",
"player2\\7.png","player2\\8.png","player2\\9.png", "player2\\10.png","player2\\11.png","player2\\12.png","player2\\13.png",
"player2\\14.png","player2\\15.png","player2\\16.png","player2\\17.png","player2\\18.png","player2\\19.png","player2\\20.png",
"player2\\21.png","player2\\22.png","player2\\23.png","player2\\24.png","player2\\25.png","player2\\26.png","player2\\27.png",
"player2\\28.png","player2\\29.png","player2\\30.png","player2\\31.png","player2\\32.png","player2\\33.png","player2\\34.png",
"player2\\35.png","player2\\36.png","player2\\37.png","player2\\38.png","player2\\39.png","player2\\40.png","player2\\41.png",
"player2\\42.png","player2\\43.png","player2\\44.png","player2\\45.png","player2\\46.png"};



char goalkeeper[120][30]={"jump1\\1.png","jump1\\2.png","jump1\\3.png","jump1\\4.png","jump1\\5.png","jump1\\6.png","jump1\\7.png","jump1\\8.png","jump1\\9.png","jump1\\10.png","jump1\\11.png","jump1\\12.png","jump1\\13.png","jump1\\14.png",
"jump2\\1.png","jump2\\2.png","jump2\\3.png","jump2\\4.png","jump2\\5.png","jump2\\6.png","jump2\\7.png","jump2\\8.png","jump2\\9.png","jump2\\10.png","jump2\\11.png","jump2\\12.png","jump2\\13.png","jump2\\14.png",
"jump3\\1.png","jump3\\2.png","jump3\\3.png","jump3\\4.png","jump3\\5.png","jump3\\6.png","jump3\\7.png","jump3\\8.png","jump3\\9.png","jump3\\10.png","jump3\\11.png","jump3\\12.png","jump3\\13.png","jump3\\14.png",
"jump4\\1.png","jump4\\2.png","jump4\\3.png","jump4\\4.png","jump4\\5.png","jump4\\6.png","jump4\\7.png","jump4\\8.png","jump4\\9.png","jump4\\10.png","jump4\\11.png","jump4\\12.png","jump4\\13.png","jump4\\14.png",
"jump5\\1.png","jump5\\2.png","jump5\\3.png","jump5\\4.png","jump5\\5.png","jump5\\6.png","jump5\\7.png","jump5\\8.png","jump5\\9.png","jump5\\10.png","jump5\\11.png","jump5\\12.png","jump5\\13.png","jump5\\14.png",
"jump6\\1.png","jump6\\2.png","jump6\\3.png","jump6\\4.png","jump6\\5.png","jump6\\6.png","jump6\\7.png","jump6\\8.png","jump6\\9.png","jump6\\10.png","jump6\\11.png","jump6\\12.png","jump6\\13.png","jump6\\14.png",
"jump7\\1.png", "jump7\\2.png", "jump7\\3.png", "jump7\\4.png", "jump7\\5.png", "jump7\\6.png", "jump7\\7.png", "jump7\\8.png", "jump7\\9.png", "jump7\\10.png", "jump7\\11.png", "jump7\\12.png", "jump7\\13.png", "jump7\\14.png",
"jump8\\1.png", "jump8\\2.png", "jump8\\3.png", "jump8\\4.png", "jump8\\5.png", "jump8\\6.png", "jump8\\7.png", "jump8\\8.png", "jump8\\9.png", "jump8\\10.png", "jump8\\11.png", "jump8\\12.png", "jump8\\13.png", "jump8\\14.png", };



int gk1,gk2, gkplayer[8][14],gk3=0;
void goalkeeperLoading(){

	for(gk1=0; gk1<8; gk1++){
		for( gk2=0; gk2<14; gk2++){
			gkplayer[gk1][gk2]=iLoadImage(goalkeeper[gk3]);
			gk3++;
		}
	}
}


void singlePlayerLoading(){
	for (t = 0; t<2; t++){
		but6[t] = iLoadImage(button6[t]); ///background+button
	}
	for (int zz = 0, zzz = 0; zz < 2; zz++){
		for (z = 0; z<46; z++){

			play[zz][z] = iLoadImage(player1[zzz]);
			zzz++;
			///player
		}
	}
	ball[0] = iLoadImage("photo\\football.png");
	ball[1] = iLoadImage("photo\\blank.png");
	celeb[0] = iLoadImage("photo\\c1.png");
	celeb[1] = iLoadImage("photo\\c2.png");
	celeb[2] = iLoadImage("photo\\c3.png");
}


void singlePlayer()
{
	butx6=dispLen-120-30;
	buty6=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but6[0]);						//display
	iShowImage(butx6-zoom*(blink6==1),buty6-zoom*(blink6==1),		//back
		75+2*zoom*(blink6==1),50+2*zoom*(blink6==1),but6[1]);

}
///////////////////


///taking ball positinon after kiking the ball
int  mmx,mmy;

void ballMove(){
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
else if(playerRun>33){
			if(mmx<=660) {
				aaaa=(660-mmx)/12;
				bbbb=660-mmx;  cccc=mmy-205; dddd=(mmy-205)/12;
				if(ballx<=bbbb && bally<=cccc){ 
					ballx=ballx-aaaa;
					bally=bally+dddd;
				}
		}
	else{
		aaaa=(mmx-660)/12;
		bbbb=mmx-660;  cccc=mmy-205; dddd=(mmy-205)/12;
		if(ballx<=bbbb && bally<=cccc){ 
			ballx=ballx+aaaa;
			bally=bally+dddd;
		}
	}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///timer for player run
void run(){
	if(kick){
		if(playerRun<44)
		playerRun=playerRun++;
		else {kick=false; 
		printf("testing\n");}
	}
}




///player running for idraw
void player(){

	if(currentPlayer==1) iShowImage(-35, -25, dispLen+10, dispWid+20, play[currentPlayer][playerRun]);
	else iShowImage(0, 0, dispLen, dispWid, play[currentPlayer][playerRun]);
}



/////ball movement and score display
void ballKick(){

	if(playerRun<33)
	iShowImage(660,205,40,40,ball[0]);
	else if (playerRun>33)
	iShowImage(660+ballx,205+bally,30,30,ball[ballShow]);

	sprintf(dispScore[0], "Player 1: %d/%d", goalCount[0],countCount[0]);
	sprintf(dispScore[1], "Player 2: %d/%d", goalCount[1],countCount[1]);
	iSetColor(0, 0, 0);
	iText(50, 100, dispScore[0], GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50, 70, dispScore[1], GLUT_BITMAP_TIMES_ROMAN_24);
	
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///

/////goal collision logics
bool test=true;

void isGoal(){

	if ((postCheck == 1 || postCheck == 2) && value == 0){
		ballShow = 1;
	
	}
	else if ((postCheck == 4 || postCheck == 5) && value == 4){
		ballShow = 1;
	}
	else if (postCheck == 2 && value == 1){
		ballShow = 1;
		
	}
	else if (postCheck == 4 && value == 3){
		ballShow = 1;
	
	}
	else if (postCheck == 9 && value == 7){
		ballShow = 1;
		
	}
	else if (postCheck == 7 && value == 5){
		ballShow = 1;
		
	}
	else if ((postCheck == 3 || postCheck==8)&& value == 6){
		ballShow = 1;
		
	}
	else if (postCheck == 3 && value == 2){
		ballShow = 1;
	
	}
	else if (postCheck == 0){
		ballShow = 1;
		
	}

	

	else  {
		if (whoPlays % 2 == 1)    ///goal count
			goalCount[0]++;
		else goalCount[1]++;
		//ballShow = 0;
		printf("sorry");
	}

}





////timer for golkeeper jump

void goalkeeMove()
{
	if (playerRun > 33 && gk4 < 13)
	{
		gk4++;
		if (gk4 == 9) isGoal();
		 if (gk4 == 12){ 
			//printf("ll%dll\n", goalCount[0]);
			 playerRun = 0; kick = false; ballx = 0; bally = 0; postCheck = 0;
			 gk4 = 0; postCheck = 0;  ballShow = 0; value = 0;
			
			if (face%2==0)
				currentPlayer = 0;
			else currentPlayer = 1;
			face++;
		}

	}
}
///goalkeeper jump for idraw
void goalkeeperJump()
{
	iShowImage(-40,-20,dispLen+20,dispWid+40,gkplayer[value][gk4]);
}









///name input
void nameInpute(){

	iSetColor(150, 150, 150);
	iRectangle(50, 350, 250, 30);
	if (writting == 1)
	{
		iSetColor(255, 255, 255);
		iText(55, 360, winner);
	}

	iText(10, 10, "Click to activate the box, enter to finish.");
}


int igd = 0;
void celebration(){
	butx6 = dispLen - 120 - 30;
	buty6 = dispWid - 60 - 30;
	if (gamestate == 8){																/////////for multiplayer name input
		if (goalCount[0] > goalCount[1]) {
			iShowImage(0, 0, dispLen, dispWid, celeb[0]);
			nameInpute();

		}
		else if (goalCount[0] < goalCount[1]) {
			iShowImage(0, 0, dispLen, dispWid, celeb[1]);
			nameInpute();
		}
		else if (goalCount[0] == goalCount[1]) {
			iShowImage(0, 0, dispLen, dispWid, celeb[2]);
			igd++;
			if (igd > 1000){
				gamestate = 1; playerRun = 0; kick = false; ballx = 0; bally = 0; postCheck = 0; value = 0; gk4 = 0; ballShow = 0; countCount[0] = 0; countCount[1] = 0;
				playerRun = 0; kick = false; test = true;  postCheck = 0; goalCount[0] = 0;  goalCount[1] = 0; whoPlays = 0; face = 1; ballShow = 0;  currentPlayer = 0; igd = 0;
			}

		}

	}
	else if (gamestate == 9)

	{
		if (goalCount[0] > goalCount[1]) {											/////////for singleplayer name input
			iShowImage(0, 0, dispLen, dispWid, celeb[0]);
			nameInpute();
		}
		else if (goalCount[0] < goalCount[1]) {
			iShowImage(0, 0, dispLen, dispWid, celeb[1]);
			igd++;
			if (igd > 1000){
				gamestate = 1; playerRun = 0; kick = false; ballx = 0; bally = 0; postCheck = 0; value = 0; gk4 = 0; ballShow = 0; countCount[0] = 0; countCount[1] = 0;
				playerRun = 0; kick = false; test = true;  postCheck = 0; goalCount[0] = 0;  goalCount[1] = 0; whoPlays = 0; face = 1; ballShow = 0;  currentPlayer = 0; igd = 0;
			}
		}
		else if (goalCount[0] == goalCount[1]) {
			iShowImage(0, 0, dispLen, dispWid, celeb[2]);
			igd++;
			if (igd > 1000){
				gamestate = 1; playerRun = 0; kick = false; ballx = 0; bally = 0; postCheck = 0; value = 0; gk4 = 0; ballShow = 0; countCount[0] = 0; countCount[1] = 0;
				playerRun = 0; kick = false; test = true;  postCheck = 0; goalCount[0] = 0;  goalCount[1] = 0; whoPlays = 0; face = 1; ballShow = 0;  currentPlayer = 0; igd = 0;
			}
		}
	}
	iShowImage(butx6 - zoom*(blink6 == 1), buty6 - zoom*(blink6 == 1),		//back
		75 + 2 * zoom*(blink6 == 1), 50 + 2 * zoom*(blink6 == 1), but6[1]);
	
};




#endif