/*

                                                           
   This program contains the definitions of Electric_attacks  
                                                           

*/

    class thunder_bolt_{

	 public:
	 int a_no;
	 char name[13];
	 int damage;

	 thunder_bolt_(){ a_no=3; strcpy(name,"Thunder Bolt");  damage = 30 * damage_controller;}

	 void a(int player_no);
	 };
	 void thunder_bolt_::a(int player_no)
	 {

	  randomize();
	  setviewport(201,160,420,300,0);
	  clearviewport();
	  int y,y1,x1,x;


	  if(player_no==1) { x1=2,y=1,x=1;       }
	  else             { x1=198,y=139,x=196; }

	  setcolor(YELLOW);
	  setlinestyle(0,1,1);

		 for(; (x1<=218)&&(x1>=1); )
		{
		  //setviewport(221,160,419,300,0);
		  y1=random(140);
		  line(x,y,x1,y1);

		  x=x1;
		  y=y1;
		  delay(20);

		  if(x1%40==0)
		  clearviewport();

		  if(player_no==1) x1=x1+2;
		  else             x1=x1-2;
		  }


	  clearviewport();
	  //getch();

	  }

/**/

    class thunder_{

	  public:
	  int a_no;
	  char name[8];
	  int damage;

	  thunder_() { a_no=2; strcpy(name,"Thunder");  damage = 30 * damage_controller;  }

	  void a(int player_no);
	  };


	  void thunder_::a(int player_no)
	 {
	  setviewport(201,160,420,300,0);
	  clearviewport();
	  randomize();

	  //rectangle(0,0,198,140);
	  int x,y,y1,x1,x3,x4,y3,y4;

	  if(player_no==1) {x=1,y=1,x3=1,y3=1,x1=2,x4=2;}
	  else             {x=197,y=139,x3=197,y3=139,x1=196,x4=196;}


	       for(; (x1<=217)&&(x1>=2); )
		{
		  setcolor(YELLOW);
		  setlinestyle(0,1,3);
		  y1=random(140);
		  line(x,y,x1,y1);
		  x=x1;
		  y=y1;

		  setcolor(RED);
		  setlinestyle(0,1,1);
		  y4=random(140);
		  line(x3,y3,x4,y4);
		  x3=x4;
		  y3=y4;

		  delay(20);

		  if(x1%40==0)clearviewport();

		  if(player_no==1)    {x1=x1+2,x4=x4+2;}
		  else                {x1=x1-2,x4=x4-2;}
		  }


	  clearviewport();
	  //getch();

	  }

/**/


    class lightning_tail_{

	  public:
	  int a_no;
	  char name[15];
	  int damage;

	  lightning_tail_()  {  a_no=1; strcpy(name,"Lightning Tail");   damage = 25 * damage_controller; }

	  void a(int player_no);
	  };
	  void lightning_tail_::a(int player_no)
	  {

	     setlinestyle(0,1,3);
	     setcolor(YELLOW);
	     setviewport(201,160,420,300,0);
	     clearviewport();
	     //rectangle(0,0,198,140);
	     int x,y,seedx,seedy,seed1x,seed1y,slidex;

	     //	seed_point is the point where one part of the waving line will
	     // be attached

	 /* `slidex' is the x-coordinate on which the line in the second for_ loop
	   has  to slide  */


	     if(player_no==1)  {x = 1,y = 1;seedx = 1;seedy=139; seed1x = 1;seed1y=139; slidex=218;}
	     else              {x=189,y=1  ;seedx=189;seedy=139; seed1x=189;seed1y=139; slidex = 1;}

	     for(; (x<=209)&&(x>=1); )
	     {
	     line(seedx,seedy,x,1);
	     line(seedx,seedy,x+3,1);
	     //line(0,140,x+8,0);
	     //line(0,140,x+12,0);

	     delay(7);
	     clearviewport();

	      if(player_no==1)  {++x;}
	      else              {--x;}

	      }


	    for(;(y<140)&&(y>=1); ++y)
	     {
	      line(seed1x,seed1y,slidex,y);
	      line(seed1x,seed1y,slidex,y);
	      delay(4);
	      clearviewport();

	      }

	 }
