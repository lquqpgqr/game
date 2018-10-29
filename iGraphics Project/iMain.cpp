#include "allheader.h"


/*
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	iClear();
	if(timecount<30)
	firstPage();
	else if (gamestate==-1)
		secondpage();
	else if (gamestate==0)	//main menu
		menu1();			
	else if (gamestate==1)	//playing_mode
		menu2();			
	else if (gamestate==2) howTo(); 
	else if (gamestate==3) aboutUs();  
	else if (gamestate==4) tournament();//tournament
	else if (gamestate==5) volume();//volume
	else if (gamestate == 6) { top(); finallyTop(); }
	else if (gamestate == 8) {
		singlePlayer(); goalkeeperJump(); 
		ballKick(); player();
			if(face>10) celebration();  

	}
	else if (gamestate==9){
		multiPlayer();  goalkeeperJump(); 
		ballKick(); player();
		if(face>10) celebration();  
	}
	else if (gamestate==10) kicking() ;
	else if (gamestate==11) goalkeeping();
	
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
	printf("%d\t%d\n",mx,my);


	if (gamestate == 0 && mx>b1[3].x && mx<b1[3].x + 322 && my>b1[3].y && my<b1[3].y + 510) blink1 = 1;//play
		else if (gamestate == 0 && mx>b1[0].x && mx<b1[0].x + butLen && my>b1[0].y && my<b1[0].y + butWid) blink1 = 2;//tournament
		else if (gamestate == 0 && mx>b1[1].x && mx<b1[1].x + butLen && my>b1[1].y && my<b1[1].y + butWid) blink1 = 3;//about
		else if (gamestate == 0 && mx>b1[2].x && mx<b1[2].x + butLen && my>b1[2].y && my<b1[2].y + butWid) blink1 = 4;//how to
		else if (gamestate == 0 && mx>b1[4].x && mx<b1[4].x + butLen && my>b1[4].y && my<b1[4].y + butWid) blink1 = 5;//volume
		else if (gamestate == 0 && mx>b1[5].x && mx<b1[5].x + butLen && my>b1[5].y && my<b1[5].y + butWid) blink1 = 6;//top
		else if (gamestate == 0 && mx>b1[6].x && mx<b1[6].x + butLen && my>b1[6].y && my<b1[6].y + butWid) blink1 = 7;//exit

		else if (gamestate == 1 && mx>b2[0].x && mx<b2[0].x + butLen && my>b2[0].y && my<b2[0].y + butWid) blink2 = 1;///play
		else if (gamestate == 1 && mx>b2[1].x && mx<b2[1].x + butLen && my>b2[1].y && my<b2[1].y + butWid) blink2 = 2;
		else if (gamestate == 1 && mx>b2[2].x && mx<b2[2].x + butLen && my>b2[2].y && my<b2[2].y + butWid) blink2 = 3;
		
		else if(gamestate==5 && mx>butx3[0] && mx<butx3[0]+butLen && my>buty3[0] && my<buty3[0]+butWid) blink3=1;///volume
		else if(gamestate==5 && mx>butx3[1] && mx<butx3[1]+butLen && my>buty3[1] && my<buty3[1]+butWid) blink3=2;
		else if(gamestate==5 && mx>butx3[2] && mx<butx3[2]+butLen && my>buty3[2] && my<buty3[2]+butWid) blink3=3;
		
		else if(gamestate==4 && mx>butx4 && mx<butx4+butLen && my>buty4 && my<buty4+butWid) blink4=1;///tournament exit
		else if(gamestate==3 && mx>butx5 && mx<butx5+butLen && my>buty5 && my<buty5+butWid) blink5=1;///about_us exit
		else if(gamestate==8 && mx>butx6 && mx<butx6+butLen && my>buty6 && my<buty6+butWid) blink6=1;///singleplayer exit
		else if(gamestate==9 && mx>butx7 && mx<butx7+butLen && my>buty7 && my<buty7+butWid) blink7=1;//multiplayer exit
		else if(gamestate==6 && mx>butx8 && mx<butx8+butLen && my>buty8 && my<buty8+butWid) blink8=1;//top exit
		
		else if(gamestate==2 && mx>butx9[0] && mx<butx9[0]+butLen && my>buty9[0] && my<buty9[0]+butWid) blink9=1;///howto
		else if(gamestate==2 && mx>butx9[1] && mx<butx9[1]+butLen && my>buty9[1] && my<buty9[1]+butWid) blink9=2;
		else if(gamestate==2 && mx>butx9[2] && mx<butx9[2]+butLen && my>buty9[2] && my<buty9[2]+butWid) blink9=3;

		else if(gamestate==10 && mx>butx10 && mx<butx10+butLen && my>buty10 && my<buty10+butWid) blink10=1;///kicking exit
		else if(gamestate==11 && mx>butx11 && mx<butx11+butLen && my>buty11 && my<buty11+butWid) blink11=1;///kicking exit

		else {blink1=0;blink2=0;blink3=0;blink4=0;blink5=0,blink6=0,blink7=0,blink8=0,blink9=0;
		
		}		
}
/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if (gamestate == 0 && mx>b1[3].x && mx<b1[3].x + 322 && my>b1[3].y && my<b1[3].y + 510) gamestate = 1;//menu1 to menu2
		else if (gamestate == 0 && mx>b1[0].x && mx<b1[0].x + butLen && my>b1[0].y && my<b1[0].y + butWid) gamestate = 2;//menu1 to howto
		else if (gamestate == 0 && mx>b1[1].x && mx<b1[1].x + butLen && my>b1[1].y && my<b1[1].y + butWid) gamestate = 3;//menu1 to aboutus
		else if (gamestate == 0 && mx>b1[2].x && mx<b1[2].x + butLen && my>b1[2].y && my<b1[2].y + butWid) gamestate = 4;//menu1 to tournament
		else if (gamestate == 0 && mx>b1[4].x && mx<b1[4].x + butLen && my>b1[4].y && my<b1[4].y + butWid) gamestate = 5;//menu1 to volume
		else if (gamestate == 0 && mx > b1[5].x && mx<b1[5].x + butLen && my>b1[5].y && my < b1[5].y + butWid) { gamestate = 6; readFile(); }//menu1 to top
		else if (gamestate == 0 && mx>b1[6].x && mx<b1[6].x + butLen && my>b1[6].y && my<b1[6].y + butWid) exit(0);

		else if (gamestate == 1 && mx>b2[0].x && mx<b2[0].x + butLen && my>b2[0].y && my<b2[0].y + butWid) gamestate = 8;//menu2 to single player
		else if (gamestate == 1 && mx>b2[1].x && mx<b2[1].x + butLen && my>b2[1].y && my<b2[1].y + butWid) gamestate = 9;//menu2 to multiplayer
		else if (gamestate == 1 && mx > b2[2].x && mx<b2[2].x + butLen && my>b2[2].y && my < b2[2].y + butWid) {
			gamestate = 0; goalCount[0] = 0; goalCount[1] = 0; whoPlays = 0;}//menu2 to menu1

		else if(gamestate==5 && mx>butx3[2] && mx<butx3[2]+butLen && my>buty3[2] && my<buty3[2]+butWid) gamestate=0;//volume exit
		else if(gamestate==4 && mx>butx4 && mx<butx4+butLen && my>buty4 && my<buty4+butWid) gamestate=0;//turnament exit
		else if(gamestate==3 && mx>butx5 && mx<butx5+butLen && my>buty5 && my<buty5+butWid) gamestate=0;//about exit

		else if (gamestate == 8 && mx > butx6 && mx<butx6 + butLen && my>buty6 && my < buty6 + butWid){
			gamestate = 1; playerRun = 0; kick = false; ballx = 0; bally = 0; postCheck = 0; value = 0; gk4 = 0; ballShow = 0; countCount[0] = 0; countCount[1] = 0;
			playerRun = 0; kick = false; test=true;  postCheck = 0; goalCount[0]=0 ;  goalCount[1]=0; whoPlays=0; face=1; ballShow = 0;  currentPlayer = 0;}//single to menu2

		else if(gamestate==9 && mx>butx7 && mx<butx7+butLen && my>buty7 && my<buty7+butWid){
			gamestate = 1; playerRun = 0; kick = false; ballx = 0; bally = 0; postCheck = 0; value = 0; gk4 = 0; ballShow = 0; countCount[0] = 0; countCount[1] = 0;
			playerRun = 0; kick = false; test=true;  postCheck = 0; goalCount[0]=0 ;  goalCount[1]=0; whoPlays=0; face=1; ballShow = 0;  currentPlayer = 0;	}//multiplayer to menu2

		else if(gamestate==6 && mx>butx8 && mx<butx8+butLen && my>buty8 && my<buty8+butWid) gamestate=0;//top exit
		else if(gamestate==2 && mx>butx9[0] && mx<butx9[0]+butLen && my>buty9[0] && my<buty9[0]+butWid) gamestate=10;//howto
		else if(gamestate==2 && mx>butx9[1] && mx<butx9[1]+butLen && my>buty9[1] && my<buty9[1]+butWid) gamestate=11;
		else if(gamestate==2 && mx>butx9[2] && mx<butx9[2]+butLen && my>buty9[2] && my<buty9[2]+butWid) gamestate=0;

		else if(gamestate==10 && mx>butx10 && mx<butx10+butLen && my>buty10 && my<buty10+butWid) gamestate=2;///kicking exit
		else if(gamestate==11 && mx>butx11 && mx<butx11+butLen && my>buty11 && my<buty11+butWid) gamestate=2;///kicking exit




		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		else if(gamestate==8 && mx>345 &&mx<=474 &&my>400 &&my<505) postCheck=1;
		else if(gamestate==8 && mx>474 &&mx<=608 &&my>400 &&my<505) postCheck=2;
		else if(gamestate==8 && mx>608 &&mx<=742 &&my>400 &&my<505) postCheck=3;
		else if(gamestate==8 && mx>742 &&mx<=876 &&my>400 &&my<505) postCheck=4;
		else if(gamestate==8 && mx>876 &&mx<=1010 &&my>400 &&my<505) postCheck=5;
				                                                                                                 //singleplayer
		//////////////////////////////////////////////////	
		else if(gamestate==8 && mx>345 &&mx<=474 &&my>505 &&my<622) postCheck=6;
		else if(gamestate==8 && mx>474 &&mx<=608 &&my>505 &&my<622) postCheck=7;
		else if(gamestate==8 && mx>608 &&mx<=742 &&my>505 &&my<622) postCheck=8;
		else if(gamestate==8 && mx>742 &&mx<=876 &&my>505 &&my<622) postCheck=9;
		else if(gamestate==8 && mx>876 &&mx<=1010 &&my>505 &&my<622) postCheck=10;
		else if(gamestate==8 ) {mmx=mx; mmy=my;}

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		else if(gamestate==9 && currentPlayer==0 && mx>345 &&mx<=474 &&my>400 &&my<505) postCheck=1;
		else if(gamestate==9 && currentPlayer==0 && mx>474 &&mx<=608 &&my>400 &&my<505) postCheck=2;
		else if(gamestate==9 && currentPlayer==0 && mx>608 &&mx<=742 &&my>400 &&my<505) postCheck=3;
		else if(gamestate==9 && currentPlayer==0 && mx>742 &&mx<=876 &&my>400 &&my<505) postCheck=4;
		else if(gamestate==9 && currentPlayer==0 && mx>876 &&mx<=1010 &&my>400 &&my<505) postCheck=5;               //multiplayer player1 kicking

		//////////////////////////////////////////////////
		else if(gamestate==9 && currentPlayer==0 && mx>345 &&mx<=474 &&my>505 &&my<622) postCheck=6;
		else if(gamestate==9 && currentPlayer==0 && mx>474 &&mx<=608 &&my>505 &&my<622) postCheck=7;
		else if(gamestate==9 && currentPlayer==0 && mx>608 &&mx<=742 &&my>505 &&my<622) postCheck=8;
		else if(gamestate==9 && currentPlayer==0 && mx>742 &&mx<=876 &&my>505 &&my<622) postCheck=9;
		else if(gamestate==9 && currentPlayer==0 && mx>876 &&mx<=1010 &&my>505 &&my<622) postCheck=10;
		else if(gamestate==9 && currentPlayer==0 ) {mmx=mx; mmy=my;}

		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		else if(gamestate==9 && currentPlayer==1 && mx>345 &&mx<=474 &&my>400 &&my<505) value=0;
		else if(gamestate==9 && currentPlayer==1 && mx>474 &&mx<=608 &&my>400 &&my<505) value=1;
		else if(gamestate==9 && currentPlayer==1 && mx>608 &&mx<=742 &&my>400 &&my<505) value=2;
		else if(gamestate==9 && currentPlayer==1 && mx>742 &&mx<=876 &&my>400 &&my<505) value=3;
		else if(gamestate==9 && currentPlayer==1 && mx>876 &&mx<=1010 &&my>400 &&my<505)value=4;               //multiplayer player2 golkeeping

		//////////////////////////////////////////////////
		else if(gamestate==9 && currentPlayer==1 && mx>345 &&mx<=474 &&my>505 &&my<622) value=5;
		else if(gamestate==9 && currentPlayer==1 && mx>474 &&mx<=608 &&my>505 &&my<622) value=5;
		else if(gamestate==9 && currentPlayer==1 && mx>608 &&mx<=742 &&my>505 &&my<622) value=6;
		else if(gamestate==9 && currentPlayer==1 && mx>742 &&mx<=876 &&my>505 &&my<622) value=7;
		else if(gamestate==9 && currentPlayer==1 && mx>876 &&mx<=1010 &&my>505 &&my<622) value=7;

		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		///music
		if (gamestate == 5 && mx>butx3[0]&&mx<butx3[0]+butLen && my>buty3[0] && my<buty3[0]+butWid ){
				PlaySound("music.wav", NULL, SND_ASYNC | SND_LOOP);
		}
		if (gamestate == 5 && mx>butx3[1] && mx<butx3[1] + butLen && my>buty3[1] && my<buty3[1] + butWid){
				PlaySound(0, 0, 0);
			
		}



		////name
		if (gamestate == 8||gamestate ==9 && face>9 && mx >= 50 && mx <= 300 && my >= 350 && my <= 380 && writting == 0)
		{
			writting = 1;
		}
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
if(key == ' ')
	{
		if(gamestate==-1) gamestate =0;

		else if (gamestate == 8) { 
			if (!kick && whoPlays < 10){
				kick = true;
				value = rand() % 8;
				whoPlays++;
				if (whoPlays % 2 == 1)//kick count
					countCount[0]++;
				else
					countCount[1]++;
			}
		}

		else if (gamestate==9)
		{
			if (currentPlayer==0 && !kick && whoPlays < 10){
				kick=true;
				value = rand() % 8;
				whoPlays++;
				countCount[0]++;

			}
			else if (currentPlayer==1 && !kick && whoPlays < 10){
				kick=true;
				postCheck = (rand() % 10)+1;
				whoPlays++;
				countCount[1]++;

			}


		}

	}
if (writting == 1)
{
	if (key == '\r')
	{
		writting = 0;
		char nameString[100];
		winner[len+1] = '\0';
		strcpy(nameString, winner);
		if (goalCount[0] > goalCount[1])
			writeFile(nameString, goalCount[0]);
		else if (goalCount[0] < goalCount[1])
			writeFile(nameString, goalCount[1]);

		for (int ii = 0; ii < len; ii++)
			winner[ii] = 0;
		len = 0;
		gamestate = 1; playerRun = 0; kick = false; ballx = 0; bally = 0; postCheck = 0; value = 0; gk4 = 0; ballShow = 0; countCount[0] = 0; countCount[1] = 0;
		playerRun = 0; kick = false; test = true;  postCheck = 0; goalCount[0] = 0;  goalCount[1] = 0; whoPlays = 0; face = 1; ballShow = 0;  currentPlayer = 0;
	}
	else if (key == '.')
		len--;
	else
	{
		winner[len] = key;
		len++;
	}
}

	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	else if(key == GLUT_KEY_UP)
	{
		
	}else if(key == GLUT_KEY_DOWN)
	{
		
	}
	//place your codes for other keys here
}



int rr,bb;


int main()
{
	//place your own initialization codes here.

	iInitialize(dispLen, dispWid, "Game");

	///image loading
	firstPageLoading();
	singlePlayerLoading();
	menu1Loading();
	menu2Loading();
	volumeLoading();
	tournamentLoading();
	aboutUsLoading();
	multiPlayerLoading();
	topLoading();
	howToLoading();
	goalkeeperLoading();
	//celebLoading();

	///
	iSetTimer(100,tcount);
	rr=iSetTimer(70,run);
	if(playerRun>43){
		iPauseTimer(rr);printf("testing1");}
	bb = iSetTimer(25,ballMove);
	iSetTimer(70,goalkeeMove);

	playMe();
	
	

	iStart();
	return 0;
}

