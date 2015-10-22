/*

                                                           
   This program contains the definitions of  Fire_attacks  
                                                           

*/

  class fire_spin_{

	     public:
	     int a_no;
	     char name[10];
	     int damage;

	     fire_spin_()  { a_no=3;  strcpy(name,"Fire Spin");  damage = 30 * damage_controller; }
	     void a(int player_no);

	     };

	  void fire_spin_::a(int player_no)
	 {
	  setviewport(201,160,420,300,0);
	  clearviewport();
	  randomize();

	  //rectangle(0,0,198,140);
	  int x,y,y1,x1,x3,x4,y3,y4;

	  if(player_no==1) {x=1,y=1,x3=1,y3=1,x1=4,x4=2;}
	  else             {x=197,y=139,x3=197,y3=139,x1=196,x4=196;}


	       for(; (x1<=217)&&(x1>=4); )
		{
		  setcolor(RED);
		  setlinestyle(0,1,3);
		  y1=random(140);
		  line(x,y,x1,y1);
		  x=x1;
		  y=y1;

		  setcolor(12);
		  setlinestyle(0,1,1);
		  y4=random(140);
		  line(x3,y3,x4,y4);
		  x3=x4;
		  y3=y4;

		  delay(20);

		  if(x1%80==0)clearviewport();

		  if(player_no==1)    {x1=x1+2,x4=x4+2;}
		  else                {x1=x1-2,x4=x4-2;}
		  }


	  clearviewport();
	  //getch();

	  }

/**/

  class dragon_rage_{

	  public:
	  int a_no;
	  char name[12];
	  int damage;

	  dragon_rage_()  { a_no=1; strcpy(name,"Dragon Rage");  damage = 40 * damage_controller;  }
	  void a(int player_no);
	  };

	   void dragon_rage_::a(int player_no)
	    {
	      setviewport(201,160,420,300,0);
	      clearviewport();
	      randomize();

	      int x1,y1=70,i=0;

	      if(player_no==1){ x1=41;}
	      else            { x1=150;}
	      setfillstyle(9,RED);
	      setcolor(12);
	      setlinestyle(5,1,3);

	       for(; (x1<=170)&&(x1>=41); )
		{
		  if(x1%5==0)
		   if(i<30) ++i;     // to constantly increase the size of the fire-ball

		 fillellipse(x1,y1,15+i,15+i);  // for the inner core
		 ellipse(x1,y1,0,360,18+i,18+i);//for the second outline

		  if(player_no==1)++x1;
		  else            --x1;

		  delay(10);
		  clearviewport();

		 }

	     }



/**/

  class fire_blast_{

	  public:
	  int a_no;
	  char name[11];
	  int damage;

	  fire_blast_()  { a_no=2;  strcpy(name,"Fire Blast");   damage = 20 * damage_controller; }
	  void a(int player_no);

	   };


	   void fire_blast_::a(int player_no)
	     {
	      setviewport(201,160,420,300,0);
	      clearviewport();
	      randomize();
	      setfillstyle(9,RED);
	      setcolor(12);

	      int x,y,x1;
	      if(player_no==1)  x1 = 10;
	      else              x1=150;

	       for(; (x1<=150)&&(x1>=10); )
		{

		    for(int i=0; i<3;++i)
		     {
		      x = random(60) +x1;
		      y = random(120)+10;
		      fillellipse(x,y,10,5);
		      delay(4);
		      }

		      if(player_no==1) x1=x1+2;
		      else             x1=x1-2;


		      //delay(10);
		      clearviewport();

		}

	   }
