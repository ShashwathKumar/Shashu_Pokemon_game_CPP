/*
                                                     
       WELCOME TO THE  DEFINITION  OF THE `WEEPINBELL'          
                                                     
*/

#include<GRASS_.cpp>

  class weepinbell_{

	 public:
	 char name[11];
	 int po_no;
	 int hp ,ALIVE; // if ALIVE==-2, pokmon is not selected ; if ALIVE==-1, pokemon is selected but dead ; if ALIVE==0 the pokemon is selected and alive;
	 int selection_no; //if selection_no=0...  NOT SELECTED   ;; if selection_no=1... the pokemon is SELECTED
	 int type;

	 int player_no;

	 leach_seed_ attack1 ;
	 razor_leaf_ attack2 ;
	 wine_whip_  attack3 ;


	 weepinbell_()
	 {
	  strcpy(name,"Weepinbell");
	  po_no=4; hp=100;  ALIVE=-2; selection_no=0;  type=GRASS;

	 attack1.a_no+=po_no*10;
	 attack2.a_no+=po_no*10;
	 attack3.a_no+=po_no*10;
	 }

	 void setplayer_no(int p) { player_no = p; }

	 void po_picture();

	    };






	  void weepinbell_::po_picture()
	  {
	   setlinestyle(0,1,1);

	   if(player_no==1) setviewport(10,80,200,380,0);
	   else             setviewport(440,80,630,380,0);
	   clearviewport();

	    setcolor(BLUE);
	    setbkcolor(LIGHTGREEN);
	    //setviewport(10,80,200,380,0);
	    //rectangle(0,0,190,300);

	    setcolor(12);
	    setfillstyle(11,11);
	    fillellipse(95,200,25,25); //inner circle of mouth
	    circle(95,200,35); //outer circle of mouth
	    setcolor(YELLOW);  // for covering the mouth
	    arc(95,200,35,145,36);
	    setfillstyle(1,12);
	    floodfill(125,200,12);// to colour the mouth_ring


	    setcolor(YELLOW);
	    setfillstyle(1,YELLOW);
	    line( 65,180, 65,120);
	    line(125,180,125,120);
	    arc(95,132,25,155,32); //to cover the gap between two lines


	    setcolor(BROWN);
	    rectangle(91,85,99,99); // for the bud on the head
	    setfillstyle(1,BROWN);
	    floodfill(97,97,BROWN);

	    ellipse( 82,130,0,360,3,6);  // left  eye
	    ellipse(108,130,0,360,3,6); // right eye
	    setfillstyle(1,WHITE);
	    floodfill( 82,128,BROWN);  //to colour the left  eye
	    floodfill(108,128,BROWN);  //to colour the right eye

	    circle( 82,133,3);          // left  eye_ball
	    circle(108,133,3);          // right eye_ball
	    setfillstyle(1,3);
	    floodfill( 82,133,BROWN);  //to colour the left  eye
	    floodfill(108,133,BROWN);  //to colour the right eye



	    setcolor(YELLOW);
	    ellipse( 82,130,0,360,4,7);  // to cover the left  eye
	    ellipse(108,130,0,360,4,7); //  to cover the right eye


	    setcolor(GREEN);
	    setfillstyle(9,GREEN);
	    fillellipse(34,175,30,15);
	    fillellipse(156,175,30,15);


	     setfillstyle(1,YELLOW);
	     //putpixel(100,120,1);
	     floodfill(100,120,YELLOW);

	     }
