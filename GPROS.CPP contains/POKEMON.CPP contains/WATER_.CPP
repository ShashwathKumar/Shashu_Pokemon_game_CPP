/*

                                                           
   This program contains the definitions of Water_attacks  
                                                           

*/

    class tail_whip_{

	 public:
	 int a_no;
	 char name[10];
	 int damage;

	 tail_whip_(){ a_no=2; strcpy(name,"Tail Whip");  damage = 20 * damage_controller; }

	 void a(int player_no);
	   };

	 void tail_whip_::a(int player_no)
	 {

	  randomize();
	  setviewport(201,160,420,300,0);
	  clearviewport();
	  setcolor(BLUE);
	  setlinestyle(0,1,3);

	   int seedx=110,seedy1=35,seedy2=105,y1=5,y2=135,x;
	   //seedx1,seedy1 ;seedx2,seedy2 are the points from where the lines are frequently drawn
	   //y1 and y2 are the y-coordinates of the points to which the lines are drawn from seed_points

/////////////////////////////////////////////////////////////////////////////
// The lines are drawn from (seedx,seedy1) to (x,y1) and....           //////
//           from...        (seedx,seedy2) to (x,y2)                   //////
/////////////////////////////////////////////////////////////////////////////
	   if(player_no==1) x = 5;
	   else             x=215;

	       for( ; (x<=215)&&(x>=5) ;  )
		{
		 line(seedx,seedy1,x,y1);
		 line(seedx,seedy2,x,y2);
		 line(x,y1,x,y2);

		 if(player_no==1) ++x;
		 else             --x;
		 delay(4);
		 clearviewport();
		 }

	   }

/**/

    class bubble_{

	   public:
	   int a_no;
	   char name[7];
	   int damage;

	   bubble_() { a_no=1;  strcpy(name,"Bubble");  damage = 15 * damage_controller;  }

	   void a(int player_no);
	   };


	   void bubble_::a(int player_no)
		   {
	      setviewport(201,160,420,300,0);
	      clearviewport();
	      randomize();
	      setfillstyle(1,WHITE);
	      setlinestyle(1,1,1);
	      setcolor(1);

	      int x,y,x1;
	      if(player_no==1)  x1 = 10;
	      else              x1=150;

	       for(; (x1<=150)&&(x1>=10); )
		{

		    for(int i=0; i<4;++i)
		     {
		      x = random(60) +x1;
		      y = random(130)+5;
		      fillellipse(x,y,10,5);
		      delay(20);
		      }

		      if(player_no==1) x1=x1+3;
		      else             x1=x1-3;


		      //delay(10);
		      clearviewport();

		}

	   }

/**/

     class water_gun_{

	   public:
	   int a_no;
	   char name[10];
	   int damage;

	   water_gun_() { a_no=3;  strcpy(name,"Water Gun");  damage = 30 * damage_controller;  }

	   void a(int player_no);
	   };




	   void water_gun_::a(int player_no)
	   {
	      setviewport(201,160,420,300,0);
	      clearviewport();
	      randomize();
	      setfillstyle(1,BLUE);
	      //setlinestyle(0,1,1);
	      //setcolor(1);

	      int x,y=55;
	      if(player_no==1) x = 5;
	      else             x=210;
// x and y are the coordinates of the rectangle's left top corner

		for(; (x<=210)&&(x>=5); )
		{
		 int points[]={x,y   ,x+5,y   ,x+5,y+20    ,x,y+20};
		 fillpoly(4,points);
		 setlinestyle(0,1,1);
		 setcolor(1);



		  if(x%40==0)   // for the arcs  in the middle
		  {
		     setlinestyle(0,1,3);
		     setcolor(WHITE);

		     if(player_no==1)  ellipse(x,y+10,270,450,3,10);
		     else              ellipse(x,y+10,90 ,270,3,10);
		   }


		 if(player_no==1)  x=x+5;
		 else              x=x-5;
		 delay(20);
		 }

	    clearviewport();
	    }
