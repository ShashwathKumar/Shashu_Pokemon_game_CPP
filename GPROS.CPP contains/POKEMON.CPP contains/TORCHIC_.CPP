/*
                                                     
       WELCOME TO THE  DEFINITION  OF THE `TORCHIC'             
                                                     
*/

#include<FIRE_.cpp>

  class torchic_{

	 public:
	 char name[8];
	 int po_no;
	 int hp ,ALIVE; // if ALIVE==-2, pokmon is not selected ; if ALIVE==-1, pokemon is selected but dead ; if ALIVE==0 the pokemon is selected and alive;
	 int selection_no; //if selection_no=0...  NOT SELECTED   ;; if selection_no=1... the pokemon is SELECTED
	 int type;

	 int player_no;

	 dragon_rage_ attack1;
	 fire_blast_  attack2;
	 fire_spin_   attack3;

	 torchic_()
	 {
	  strcpy(name,"Torchic");
	  po_no=3;  hp=100; ALIVE=-2; selection_no=0;  type=FIRE;

	 attack1.a_no+=po_no*10;
	 attack2.a_no+=po_no*10;
	 attack3.a_no+=po_no*10;
	 }

	 void setplayer_no(int p) { player_no = p; } // taking player_no from `player' class and tranfering it to the pokemon

	 void po_picture();

	    };

	  void torchic_::po_picture()
	 {
	   setlinestyle(0,1,1);

	   if(player_no==1) setviewport(10,80,200,380,0);
	   else             setviewport(440,80,630,380,0);
	   clearviewport();

	   //rectangle(0,0,190,300);

	   setcolor(RED);
	   setbkcolor(DARKGRAY);
	   setfillstyle(1,RED);
	   fillellipse(95,150,30,50); // the stomach

	   ellipse(73,150, 90,270,14,35); //  left wing
	   ellipse(117,150,270,450,14,35);// right wing
	   setfillstyle(1,YELLOW);
	   floodfill( 61,150,RED);
	   floodfill(130,150,RED);


	   circle(95,74,25); // for head
	   setfillstyle(1,YELLOW);
	   floodfill(95,74,RED);

	   setfillstyle(1,BROWN);
	   pieslice(95,95,45,135,15); //for beak
	   pieslice(94,93,45,135,15); //for beak

	   setcolor(BROWN);
	   setfillstyle(1,BROWN);
	   fillellipse( 85,70,1,4);// for left  eye
	   fillellipse(105,70,1,4);// for right eye

	   setcolor(12);
	   setlinestyle(0,1,3);
	   line(95,49, 95,40);   //for the centre_feather on the head
	   line(97,49,100,42);   //for the  right_feather on the head
	   line(93,49,90,42);    //for the   left_feather on the head

////////////////////////////////////////////////////////////////////////////
////////         LEGS......                       //////////////////////////
////////////////////////////////////////////////////////////////////////////

	   setlinestyle(0,1,1);
	   setcolor(BROWN);
	   setfillstyle(1,BROWN);

/*  LEFT    LEG  */

	   // the leg part
	   line(78,190,88,242);
	   line(92,199,88,242);
	   ellipse(95,150,235,265,30,50);
	   floodfill(88,235,BROWN);

	   // the foot part
	   setlinestyle(0,1,3);
	   line(88,242,80,253);
	   line(88,242,84,257);
	   line(88,242,90,257);

/*  RIGHT    LEG  */

	   // the leg part
	   setlinestyle(0,1,1);
	   line(112,190,100,242);
	   line(99,199,100,242);
	   ellipse(95,150,275,305,30,50);
	   floodfill(101,235,BROWN);

	   // the foot part
	   setlinestyle(0,1,3);
	   line(100,242,99,257);
	   line(100,242,105,257);
	   line(100,242,110,253);

//////////////////////////////////////////////////////////////////////////////
/////////               LEGS... close                 ////////////////////////
//////////////////////////////////////////////////////////////////////////////
	 }
