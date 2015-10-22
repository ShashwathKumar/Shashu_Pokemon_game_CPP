/***************************************************************************
********************                                 ***********************
**********     It prints border on the screen with the desired char    *****
********************                                 ***********************
***************************************************************************/

 void border_any(int x1=1,int y1=1,int x2=80,int y2=50,int a=3,char e='')  //creates border for the specified window
  {
  clrscr();

     for(int q=0; q<a; ++q)
     {

       gotoxy(x1,y1);

	for(int i=x1; i<=x2; ++i)
	{
	 textcolor(GREEN);


	 putch(e);
	}

	for(i=y1+1; i<=y2-1; ++i)
	{
	textcolor(LIGHTBLUE);

	gotoxy(x2,i);

	putch(e);
	}

	for(i=x2; i>=x1; --i)
	{
	textcolor(GREEN);

	gotoxy(i,y2);

	putch(e);
	}

	for(i=y2-1; i>=y1+1; --i)
	{
	textcolor(LIGHTBLUE);

	gotoxy(x1,i);

	putch(e);
	}
	++x1;
	--x2;
	++y1;
	--y2;

    }

  }
