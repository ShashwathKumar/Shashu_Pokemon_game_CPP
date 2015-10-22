/****************************************************************************
*********************                              **************************
**********  It prints text-mode borders with lines         ******************
*********************                               *************************
****************************************************************************/

 void border_lin(int x1=1,int y1=1,int x2=80,int y2=50,int a=3,int xlinecolor=GREEN ,int ylinecolor=LIGHTBLUE)  //creates border for the specified window
  {
  //clrscr();
  char e;

     for(int q=0; q<a; ++q)
     {

       gotoxy(x1,y1);

	for(int i=x1; i<=x2; ++i)
	{
	 textcolor(xlinecolor);

	 //gotoxy(i,2);
	 e=(i==x1)? 218:(i==x2)? 191:196;
	 putch(e);
	}

	for(i=y1+1; i<=y2-1; ++i)
	{
	textcolor(ylinecolor);

	gotoxy(x2,i);
	e=179;
	putch(e);
	}

	for(i=x2; i>=x1; --i)
	{
	textcolor(xlinecolor);

	gotoxy(i,y2);
	e=(i==x2)? 217:(i==x1)? 192:196;
	putch(e);
	}

	for(i=y2-1; i>=y1+1; --i)
	{
	textcolor(ylinecolor);

	gotoxy(x1,i);
	e=179;
	putch(e);
	}
	++x1;
	--x2;
	++y1;
	--y2;

    }

  }
