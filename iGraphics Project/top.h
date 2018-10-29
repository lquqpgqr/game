#ifndef	TOP_H_INCLUDED
#define TOP_H_INCLUDED


#define dispLen 1366
#define dispWid 768

#define butLen 322
#define butWid 150

char button8[2][30]={"photo\\top.png","photo\\buttonz.png"};
int but8[2],v,butx8,buty8, blink8=0;
char st[100][100];
int goalArr[100];
int numberIndex = 0, stringIndex = 0;
char rankText[10];

void topLoading()
{

	for(v=0; v<2; v++){
	but8[v]=iLoadImage(button8[v]);
	}
}

void top()
{

	butx8=dispLen-120-30;
	buty8=dispWid-60-30;
	iShowImage(0,0,dispLen,dispWid,but8[0]);						//display
	iShowImage(butx8-zoom*(blink8==1),buty8-zoom*(blink8==1),		//back
		75+2*zoom*(blink8==1),50+2*zoom*(blink8==1),but8[1]);

}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////file operations
///////structure array for goal and name

void writeFile(char _name[], int _goals){

	FILE* fp = fopen("score.txt", "a");
	if (fp != NULL){
		fprintf(fp, "%s %d", _name, _goals);
	}
	fclose(fp);
}



void readFile(){
	FILE* fp = fopen("score.txt", "r");
	char str[100];
	int score;
	if (fp != NULL){
		while (fscanf(fp, "%s%d\n", str, &score) != EOF){
			strcpy(st[stringIndex++], str);
			goalArr[numberIndex++] = score;
		}
	}
	fclose(fp);
}


void Sorting(){
	int temp;
	char t[100];

	for (int i = 0; i < stringIndex - 1; i++)
	{
		for (int j = 0; j < stringIndex - 1; j++)
		{
			if (goalArr[j] < goalArr[j + 1])
			{
				temp = goalArr[j];
				goalArr[j] = goalArr[j + 1];
				goalArr[j + 1] = temp;
				strcpy(t, st[j]);
				strcpy(st[j], st[j + 1]);
				strcpy(st[j + 1], t);
			}
		}
	}


}




///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////



void finallyTop(){
	Sorting();
	int rank = 0;
	for (int k = 0, y = 320; k < 6; k++, y -= 35)
	{
		char str[100];
		if (goalArr[k]>0)
		{
			rank++;
			sprintf(rankText, "%d", rank);
			itoa(goalArr[k], str, 10);
			iSetColor(0, 0, 255);

			iText(80, 360, "Rank", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(80, y, rankText, GLUT_BITMAP_TIMES_ROMAN_24);

			iText(180, 360, "Score", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(180, y, str, GLUT_BITMAP_TIMES_ROMAN_24);

			iText(280, 360, "Name", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(280, y, st[k], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

}




#endif