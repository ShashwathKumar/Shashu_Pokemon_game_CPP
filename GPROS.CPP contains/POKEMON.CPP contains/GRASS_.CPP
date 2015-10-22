/*

                                                           
   This program contains the definitions of Grass_attacks  
                                                           

*/


    class razor_leaf_{

	 public:
	 int a_no;
	 char name[11];
	 int damage;

	 razor_leaf_()  { a_no=2;  strcpy(name,"Razor Leaf");  damage = 20 * damage_controller;  }

	 void a(int player_no);
	 };


	 void razor_leaf_::a(int player_no)
	 {
	      setviewport(201,160,420,300,0);
	      clearviewport();
	      randomize();
	      setfillstyle(1,GREEN);
	      setlinestyle(1,1,1);
	      setcolor(GREEN);

	      int x,y,x1;
	      if(player_no==1)  x1 = 10;
	      else              x1=150;

	       for(; (x1<=150)&&(x1>=10); )
		{

		    for(int i=0; i<2;++i)
		     {
		      x = random(60) +x1;
			      y = random(130)+5;
		      fillellipse(x,y,13,3);
		      delay(30);
		      }

		      if(player_no==1) x1=x1+3;
		      else             x1=x1-3;


			      //delay(10);
		      clearviewport();

		}

	   }


/**/

    class wine_whip_{

	   public:
	   int a_no;
	   char name[10];
	   int damage;

	   wine_whip_() {a_no=3;  strcpy(name,"Wine Whip");  damage = 25 * damage_controller; }

	   void a(int player_no);
	   };


	   void wine_whip_::a(int player_no)
	   {
     /*	 Here rectangles are printed continuously side by side which gives
	 the impression of a moving creeper (or)  whip                  */


	      setviewport(201,160,420,300,0);
	      clearviewport();
	      //randomize();
	      setfillstyle(1,GREEN);
	      setlinestyle(0,1,1);
	      setcolor(GREEN);

	      int x,y1=40,y2=80,i;
	      if(player_no==1) x = 5;
	      else             x=210;
      // x and y are the coordinates of the rectangle's left top corner

		for(; (x<=210)&&(x>=5); )
		{
		 int points1[]={x,y1   ,x+5,y1   ,x+5,y1+6    ,x,y1+6 };
		 fillpoly(4,points1);
		 int points2[]={x,y2   ,x+5,y2   ,x+5,y2+6    ,x,y2+6 };
		 fillpoly(4,points2);

////////////////////////////////////////////////////////////////////////////
//  This for the bump at the end of the wine_whip           ////////////////
////////////////////////////////////////////////////////////////////////////

		 if(player_no==1) i=5;
		 else             i=0;
		 fillellipse(x+i,y1+3,3,3);
		 fillellipse(x+i,y2+3,3,3);

////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

		 if(player_no==1)  x=x+5;
		 else              x=x-5;
		 delay(40);
		 }


	    clearviewport();
	   }

/**/

    class leach_seed_{

	   public:
	   int a_no;
	   char name[11];
	   int damage;

	   leach_seed_() {a_no=1; strcpy(name,"Leach Seed");  damage = 30 * damage_controller;  }

	   void a(int player);
	   };

	   void leach_seed_::a(int player_no)
	    {
	      /*     POINT   TO  REMEMBER...
	- in this attack the viewports for first player and second payer is not same
	      */


	      if(player_no==1)  setviewport(201,160,630,300,0);
	      else              setviewport(10 ,160,440,300,0);

	      //clearviewport();
		      randomize();
	      setfillstyle(1,BROWN);
	      setlinestyle(0,1,1);
	      setcolor(BROWN);

////////////////////////////////////////////////////////////////////////////
///////         The   seed --- movement         ////////////////////////////
////////////////////////////////////////////////////////////////////////////

	      int x,y=70;

		   if(player_no==1)
				 for(int x=5 ; x<=340 ; ++x)
			 {
			  clearviewport();
			  fillellipse(x,y,4,2);
			  delay(6);
			  }
		   else
			 for( x=425 ; x>=100 ; --x)
			 {
			  clearviewport();
			  fillellipse(x,y,4,2);
			  delay(6);
			  }
////////////////////////////////////////////////////////////////////////////
/////////     The  seed --- movement  ends......      //////////////////////
////////////////////////////////////////////////////////////////////////////

/*
      The   leaching -- creeper             
*/


		   setcolor(GREEN);
		   setlinestyle(0,1,3);

		   int current_x = (player_no==1)? 340 : 100;
		   int current_y = 70;
		   int twister;

		   for(int z=1; z<=6; ++z)  // this outer_most for loop is to create the shocking effect to the pokemon
		   {
		     if(z%2==0)  setcolor( RED );
		     else        setcolor(GREEN);

		       for(int i=1; i<=4; ++i)  //this for loop  is to initiate the four creepers coming out of the seed
			       {
			 x=current_x;
			 y=current_y;
			 moveto(x,y);

			 for(int j=1; j<=10; ++j) // this for loop is to print every creeper
			 {
				    switch(i)
			     {
			      case 1: x=x+5; y=y-5; break;
			      case 2: x=x-5; y=y-5; break;
			      case 3: x=x-5; y=y+5; break;
			      case 4: x=x+5; y=y+5; break;
			      }

				    if(z==1)     delay(4);

			    twister = (j%2==0)? 3: -3;
			    lineto(x+twister,y);
			    // the twister is used to give the creeper_curly effect
			 }
		       }
		      delay(40);
		      }

	       clearviewport();
	     }
