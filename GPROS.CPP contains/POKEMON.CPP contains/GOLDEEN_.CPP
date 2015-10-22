/*
                                                     
       WELCOME TO THE  DEFINITION  OF THE `GOLDEEN'             
                                                     
*/


#include<WATER_.cpp>

  class goldeen_{

	    public:
	    char name[8];
	    int po_no;
	    int hp ,ALIVE; // if ALIVE==-2, pokmon is not selected ; if ALIVE==-1, pokemon is selected but dead ; if ALIVE==0 the pokemon is selected and alive;
	    int selection_no; //if selection_no=0...  NOT SELECTED   ;; if selection_no=1... the pokemon is SELECTED
	    int type;

	    int player_no;

	    bubble_     attack1 ;
	    tail_whip_  attack2 ;
	    water_gun_  attack3 ;

	    goldeen_()
	    {
	     strcpy(name,"Goldeen");
	     po_no=1;  hp=100;   ALIVE=-2; selection_no=0; type=WATER;

	    attack1.a_no+=po_no*10;
	    attack2.a_no+=po_no*10;
	    attack3.a_no+=po_no*10;
	    }

	    void setplayer_no(int p){ player_no=p; }// taking player_no from `player' class and tranfering it to the pokemon

	    void po_picture();
	       };





	 void goldeen_::po_picture()
	 {

	  setcolor(MAGENTA);
	  setlinestyle(0,1,1);

	  if(player_no==1) setviewport(10,80,200,380,0);
	  else             setviewport(440,80,630,380,0);
	  clearviewport();

	  //rectangle(0,0,200,300);
	  setbkcolor(CYAN);
	  setfillstyle(1,7);

	  ellipse(100,180,0,360,50,90); //for body

	  circle(100,253,10);// for inner circle of the mouth
	  floodfill(100,253,MAGENTA);
	  circle(100,253,15);// for outer circle of the mouth
	  setfillstyle(1,6);
	  floodfill(100,265,MAGENTA);

	  setcolor(MAGENTA);
	  setfillstyle(1,WHITE);
	  ellipse(70 ,220,0,360,5,10); // left eye
	  floodfill(70,220,MAGENTA);
	  ellipse(130,220,0,360,5,10); //right eye
	  floodfill(130,220,MAGENTA);

	  setfillstyle(1,12);
	  circle(70 ,224,4);//  left_eye's eye_ball
	  floodfill(70,225,MAGENTA);
	  circle(130,224,4);// right_eye's eye_ball
	  floodfill(130,225,MAGENTA);

	  setfillstyle(1,13);
	  line(98 ,197,94,230);// horn -  left line
	  line(105,200,94,230);// horn - right line
	  arc(102,200,0,135,4);// horn - bridge between the two lines
	  floodfill(102,200,MAGENTA);

	  setfillstyle(1,8);
	  ellipse(80 ,140,0,360,10,5); // body_scar -  left ellipse
	  floodfill(80,140,MAGENTA);
	  ellipse(120,160,0,360,5,10); // body_scar - right ellipse
	  floodfill(120,160,MAGENTA);
/******************************************************************************
**************      THE   FINS.......                           **************
******************************************************************************/

	       setfillstyle(1,13);
//////////////  .........    THE TAIL FIN     .............///////////////////
	       line(70,50 ,90,92);
	       line(130,50,110,92);
	       ellipse(100,47,180,360,30,10);
	       floodfill(100,67,MAGENTA);

//////////////  .........    THE LEFT FIN     .............//////////////////
	       line(30,118,50,188);
	       ellipse(47,116,180,360,17,8);
	       floodfill(47,136,MAGENTA);

//////////////  .........    THE RIGHT FIN     .............//////////////////
	       line(170,118,150,188);
	       ellipse(153,116,180,360,17,8);
	       floodfill(153,136,MAGENTA);
/*****************************************************************************
*************       THE   FINS  end......                      ***************
*****************************************************************************/

	   setfillstyle(1,15);
	   floodfill(100,180,MAGENTA);

	   }
