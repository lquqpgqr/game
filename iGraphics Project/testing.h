/*


typedef struct
{
char name[100];
int score;
}Player;
Player player[5];




FILE *frank = fopen("ranking.txt", "r");
for (int i = 0; i<5; i++)
{
	int score;
	char name[100];
	fscanf(frank, "%s %d", &name, &score);
	strcpy(player[i].name, name);
	player[i].score = score;
}
sort(player, 5);
fclose(frank);
for (int i = 0; i<5; i++)
	sprintf(ranklist[i], "%s                                         %d", player[i].name, player[i].score);


void sort(Player pl[], int n)
{
	for (int i = 0; i<n - 1; i++)
	{
		for (int j = 0; j<n - 1; j++)if (pl[j].score>pl[j + 1].score)
		{
			Player temp;
			strcpy(temp.name, pl[j + 1].name);
			temp.score = pl[j + 1].score;
			strcpy(pl[j + 1].name, pl[j].name);
			pl[j + 1].score = pl[j].score;
			strcpy(pl[j].name, temp.name);
			pl[j].score = temp.score;

		}
	}
}



void iKeyboard(unsigned char key)
{
	if (mode == 1 && global_indicator == 2)
	{
		if (key == '\b')
		{
			pnm1[len1] = '\0'; if (len1)len1--;
		}
		else {
			pnm1[len1] = key;
			len1++;
			pnm1[len1] = '\0';
		}
	}
	else if (mode == 2 && global_indicator == 2)
	{
		if (key == '\b')
		{
			pnm2[len2] = '\0'; if (len2)len2--;
		}
		else {
			pnm2[len2] = key;
			len2++;
			pnm2[len2] = '\0';
		}

	}
}
*/


/*






*/