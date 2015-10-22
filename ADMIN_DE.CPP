/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@                                @@@@@@@@@@@@@@@@@@@@@@@@
@@@@  Function "admin_de"-- to administer the deperture from the program @@@@
@@@@@@@@@@@@@@@@@@@@@                                @@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/


  void Unfortunate_the_yes();
  void Rotato_Byebye();


	void admin_departure(int winner)
	{
	 setviewport(0,0,639,479,0);
	 cleardevice();
   if(winner!=0)
   {
	 char victor[20];

	 if(winner==1)      strcpy(victor,p1.name);
	 else if(winner==2) { if(no_of_players==2) strcpy(victor,p2.name);
			      else if(no_of_players==1) strcpy(victor,p.name);  }

	int choice;

	settextstyle(1,0,8);
	setcolor(8);
	int h=textheight("K");

	delay(1500);   outtextxy(10,10    ,"What");
	delay(500);   outtextxy(10,10+h  ,"    was");
	delay(500);   outtextxy(10,10+2*h,"       THAT !!!");
	delay(900);
	//---------------------------------------------------------

	cleardevice();
	settextstyle(3,0,6);
	h=textheight("K");
	int w=textwidth("?");
	setcolor(LIGHTGREEN);
	outtextxy(10,10    ,"Does this mean...");
	settextstyle(3,0,8);
	setcolor(RED);
	outtextxy(12,10+2*h , victor);
	settextstyle(3,0,6);
	setcolor(BROWN);
	outtextxy(10,10+4*h,"      is the WINNER ?!?!!");


	  delay(2000);
	  randomize();
	  for(int i=0; i<=20; ++i)
	  {
	    setcolor(8);
	    delay(25);
	    outtextxy(i*w, random(639), "?");
	    sound(1000);
	    delay(25);
	    nosound();
	   }
	   delay(150);
	//-----------------------------------------------------
	Unfortunate_the_yes();
	//-----------------------------------------------------

	  setviewport(0,0,639,479,0);
	  cleardevice();
	  settextstyle(5,0,8);
	  h=textheight("K");
	  setcolor(MAGENTA);
	  outtextxy(280,110,"Congrats");
	  setcolor(YELLOW);
	  outtextxy(283,80+2*h,victor);
	  randomize();
	  delay(400);
	  g_border(50,50,589,429,random(6)+4,4,4,3);
	  delay(1200);

	//------------------------------------------------------
	   }

	   cleardevice();
	   Rotato_Byebye();
	 //-------------------------------------------------------

	}



/////////////////////////////////////////////////////////////////////////////
//////// The function ---"Unfortunate_the_yes"      //////////////////////////
/////////////////////////////////////////////////////////////////////////////


	void Unfortunate_the_yes()
	{

	  cleardevice();
	  char U[14]="Unfortunately";

	  settextjustify(LEFT_TEXT,RIGHT_TEXT);
	  settextstyle(1,0,6);
	  setcolor(MAGENTA);
	  int w=textwidth(U);
	  int h=textheight(U);

	  randomize();
	  int x=random(640-w) , y=random(480-h) ;
	  int counter_x=random(1) ;
	  int counter_y=random(1) ;

	    for(int i=0; (i<=350) && (!kbhit()); ++i)
	    {

	     outtextxy(x,y,U);

	     counter_x= (x==0)? 1: (x==640-w)? 0 : counter_x ;
	     counter_y= (y==0)? 1: (y==480-h)? 0 : counter_y ;

	     if(counter_x==0) --x;
	     else             ++x;
	     if(counter_y==0) --y;
	     else             ++y;

	     if(x==640-w || x==0 || y==480-h || y==0 )
	       { sound(3500); delay(3); nosound(); }
	     delay(20);
	     cleardevice();
	     }

	  outtextxy(35,74,U);
	  setviewport(200,175,500,350,0);
	  setcolor(9);
	  settextjustify(CENTER_TEXT, CENTER_TEXT);
	     for(i=1; i<=8; ++i)
	     {
	       clearviewport();
	       settextstyle(1,0,i);
	       outtextxy(150,87,"Yes");
	       delay(200);
	       }


	   setviewport(0,0,639,479,0);

	  }
/////////////////////////////////////////////////////////////////////////////
////////// close   of  " Unfortunate_the_yes"     ///////////////////////////
/////////////////////////////////////////////////////////////////////////////

/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$  The function ----  "Rotato_Byebye "     $$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/

	void Rotato_Byebye()
	{
	 char ch[4]="Bye";
	 char character[2];
	 character[1]='\0';
	 int x,y;

	 settextstyle(4,0,7);
	 int h=textheight("W");
	 settextjustify(CENTER_TEXT, CENTER_TEXT);
	 setcolor(CYAN);
	 delay(1500);

	 label:
	    for(int i=1; i<=4; ++i)
	    {
	      if(i%2==0) { x=200, y=300; }
	      else	 { x=80, y=150; }

	      for(int j=0; j<=2; ++j)
	      {
		character[0]=ch[j];
		if(i<=2)
		{
		settextstyle(4,1,7);
		outtextxy( x+j*h, y, character);
		}

		else if(i>=3)
		{
		setcolor(BLACK);
		settextstyle(4,1,7);
		outtextxy( x+j*h, y, character);
		setcolor(CYAN);
		settextstyle(4,0,7);
		outtextxy( x+j*h, y,character);
		}
		delay(300);
	    }
	   }
	}

/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$  The function --  "Rotato_Byebye "  ends     $$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/
