/*
                                                     
       WELCOME TO THE  DEFINITION  OF THE `PIKACHU'             
                                                     
*/

#include<ELEC_.cpp>

  class pikachu_{

	    public:
	    char name[8];
	    int po_no;
	    int hp ,ALIVE; // if ALIVE==-2, pokmon is not selected ; if ALIVE==-1, pokemon is selected but dead ; if ALIVE==0 the pokemon is selected and alive;
	    int selection_no; //if selection_no=0...  NOT SELECTED   ;; if selection_no=1... the pokemon is SELECTED
	    int type;

	    int player_no;

	    lightning_tail_ attack1;
	    thunder_bolt_   attack3;
	    thunder_        attack2;

	    pikachu_()
	    {
	     strcpy(name,"Pikachu");
	     po_no=2;  hp=100;  ALIVE=-2; selection_no=0; type=ELECTRIC;

	    attack1.a_no+=po_no*10;
	    attack2.a_no+=po_no*10;
	    attack3.a_no+=po_no*10;
	    }

	     void setplayer_no(int p) { player_no = p; } // taking player_no from `player' class and tranfering it to the pokemon

	    void po_picture();
	       };



	    void pikachu_::po_picture()
	   {
	   setcolor(2);
	   //rectangle(0,0,190,300);
	   setlinestyle(0,1,1);

	   if(player_no==1) setviewport(10,80,200,380,0);
	   else             setviewport(440,80,630,380,0);
	   clearviewport();

	   setcolor(YELLOW);
	   setbkcolor(BLUE);  // to set the back ground


	  ellipse(98,160,120,425,35,50);  //for body
	  ellipse(95,94,130,250,25,30);  //for left part of face

	  ellipse(80,50,90,270,6,24);    //for left ear
	  ellipse(80,50,320,450,6,24);

	  ellipse(110,50,90,230,6,24);    //for right ear
	  ellipse(110,50,-60,90,6,24);

	  ellipse(95,94,65,115,25,30);   //for ear_bridge

	  ellipse(95,94,-60,50,25,30);   //for right part of face

	  setfillstyle(1,BROWN);
	  fillellipse(85,85,3,5); // for the eyes
	  fillellipse(105,85,3,5);

////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

	  /*setcolor(BLUE);     // to make the eye balls blue
	  setfillstyle(1,BLUE);
	  fillellipse(295,166,1,3); // for the eye_balls
	  fillellipse(315,166,1,3);                          */

//////////////////////////////////////////////////////////////////////////////
//////////   The eye_balls hve been de_ activated  .......        ////////////
//////////////////////////////////////////////////////////////////////////////

	  setcolor(MAGENTA);    //TO MAKE CHEEKS PINK
	  setfillstyle(1,MAGENTA);
	  fillellipse(77,101,3,5); // for the cheeks
	  fillellipse(113,101,3,5);

	  setcolor(YELLOW);
	  ellipse(77,101,0,360,3,5); //outline for cheeks
	  ellipse(113,101,0,360,3,5); //outline for cheeks

/****************************************************************************
*******************   MOUTH              ************************************
****************************************************************************/

	  setcolor(BROWN);    //to make things back to white
	  //setfillstyle(0,BLACK);
	  ellipse(91,109,180,360,4,2);  //for mouth
	  ellipse(99,109,180,360,4,2);

	  setcolor(YELLOW);
	  ellipse(91,108,180,360,4,2);  //to surround upper part of  the mouth
	  ellipse(99,108,180,360,4,2);
	  ellipse(91,110,180,360,4,2);  //to surround lower part of  the mouth
	  ellipse(99,110,180,360,4,2);
	  putpixel(87,109,YELLOW); //to cover the  left-side space between upper an lower part of the mouth
	  putpixel(103,109,YELLOW); //to cover the right-side space between upper an lower part of the mouth

/****************************************************************************
*************  MOUTH   ends.............             ************************
****************************************************************************/


	  //setcolor(BLACK);
	  //pieslice(305,180,0,360,2); //for the nice little nose
	  setcolor(YELLOW);
	  circle(95,100,2);// to surround the nose
	  setfillstyle(1,BROWN);
	  floodfill(95,100,YELLOW);

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
//////////             STRIPES OF THE BODY......                  ///////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////



/****************************************************************************
*****************   RIGHT SIDE STRIPES  *************************************
****************************************************************************/

	  setcolor(YELLOW);
	  ellipse(134,143,180,262,15,5);  //right_upper lower arc
	  ellipse(126,138,250,282,23,5);  //right_upper upper arc
	  line(131,142,131,147);
	  setfillstyle(1,BROWN);     // to set the way stripes are to be filled
	  floodfill(128,144,YELLOW); // to fill the right_UPPER stripe will brown color


	  ellipse(131,160,180,270,15,5);  //right_middle lower arc
	  ellipse(123,155,250,293,23,5);  //right_middle upper arc
	  line(132,158,132,165);
	  floodfill(128,162,YELLOW);


	  ellipse(134,177,180,255,15,5);  //right_lower lower arc
	  ellipse(126,172,250,275,23,5);  //right_lower upper arc
	  line(129,177,129,183);
	  floodfill(128,180,YELLOW);

	  /*setcolor(YELLOW);
	  line(342,222,342,231); //to draw yellow lines after the brown lines in the stripes
	  line(342,238,342,245);
	  line(340,252,339,263);  */

/****************************************************************************
************  RIGHT SIDE STRIPES   ends ....                     ************
****************************************************************************/




/****************************************************************************
*****************  LEFT SIDE STRIPES  *************************************
****************************************************************************/

	  ellipse(62,143,278,360,15,5);  //left_upper lower arc
	  ellipse(74,138,250,282,23,5);  //left_upper upper arc
	  line(65,142,65,147);
	  floodfill(67,145,YELLOW);

	  ellipse(64,160,276,360,15,5);  //left_middle lower arc
	  ellipse(70,155,253,293,23,5);  //left_middle upper arc
	  line(64,158,64,165);
	  floodfill(66,162,YELLOW);

	  ellipse(64,177,278,360,15,5);  //left_lower lower arc
	  ellipse(78,172,248,275,23,5);  //left_lower upper arc
	  line(68,177,68,183);
	  floodfill(69,180,YELLOW);

/****************************************************************************
************   LEFT SIDE STRIPES   ends ....                     ************
****************************************************************************/


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////  STRIPES OF THE BODY  ends....                      ////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////




/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&   THE  HANDS  AND  LEGS    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/

////////////////   HANDS     ///////////////////////////////////////////////

	       ellipse(138,135,260,360,25,10); // right_hand lower arc
	       ellipse(148,126,190,310,25,10); // right_hand upper arc
	       setfillstyle(1,YELLOW);
	       floodfill(143,140,YELLOW);

	       ellipse(52,136,182,297,25,10); // left_hand lower arc
	       ellipse(45,128,230,360,27,10);  // left_hand upper arc
	       floodfill(50,141,YELLOW);

////////////////////   LEGS      ////////////////////////////////////////////

	       fillellipse(88 ,227,5,20);
	       fillellipse(108,227,5,20);

/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&     HANDS   AND  LEGS  over...... &&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/







/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@       THE    TAIL  ....    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

	    line(23,100,48,100);  //  `---'  the upper_most line (the one which is horizontal)
	    line(23,100,51,132);  // first staircase ( left_line)
	    line(48,100,63,126); // first staircase (right_line)

	    line(51,132,43,138);  // second staircase ( left_line)
	    line(63,125,57,136); //  second staircase (right_line)
	    setfillstyle(1,BROWN);
	    floodfill(45,107,YELLOW);

	    line(43,146,61,165);  // third staircase ( left_line)
	    line(57,146,62,155); //  third staircase (right_line)

	    line(61,164,53,186);  // fourth staircase ( left_line)
	    line(65,176,62,182); //  fourth staircase (right_line)

	    line(53,186,83,198);  // fifth staircase ( left_line)
	    line(62,182,88,198); //  fifth staircase (right_line)
	    setfillstyle(1,7);
	    floodfill(56,157,YELLOW);

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@  THE TAIL ends......           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/


	    setfillstyle(1,YELLOW);     //to fill the body with blue color
	    floodfill(110,160,YELLOW);

	   //getch();

	   }
