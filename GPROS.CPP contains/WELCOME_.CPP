////////////////////////////////////////////////////////////////////////////
////////                                                          //////////
////////    It contains the function `welcome_'            /////////////////
//////////                                                 /////////////////
////////////////////////////////////////////////////////////////////////////

 void welcome_()
 {

   cleardevice();
   int  midx=getmaxx()/2,  midy=getmaxy()/2;

//////////////// WELCOME MESSAGE FOR PROGRAM  //////////////////////////////


   setcolor(7);
   settextstyle(1,0,7);
   int h = textheight("W");
   outtextxy(10,15      ,"WELCOME");
   outtextxy(10,15+2*h  ,"  to Shashu's... ");
   outtextxy(10,15+4*h  ,"     world of ");
   outtextxy(10,15+6*h  ,"       Programing");

   for(int sd=1; sd<=1400 && !kbhit(); ++sd) delay(1); // to delay

     for(int i=1; i<35 && !kbhit() ; ++i)
     {
      if(i%16==0) ++i; // this is to avoid black colouration
      setcolor(i);
      outtextxy(10,15    ,"WELCOME");
      outtextxy(10,15+2*h  ,"  to Shashu's... ");
      outtextxy(10,15+4*h,"     world of ");
      outtextxy(10,15+6*h,"       Programing");
      delay(150);
     }

   for(sd=1; sd<=900 && !kbhit(); ++sd) delay(1); // to delay
   //closegraph();

////////////////   Displaying the  POKEBALL      //////////////////////////


      cleardevice();
   for(sd=1; sd<=900 && !kbhit(); ++sd) delay(1); // to delay

      for( i=1;  i<=50 && !kbhit() ; ++i)
      {
	sound(20*i +1200);
	// for the bigger red circle
	setfillstyle(1,RED);
	setcolor(WHITE);
	fillellipse(midx+100,midy-100, 2*i ,2*i);

	// for the mid white strip
	setfillstyle(1,WHITE);
	int polygon[8] = {midx-2*i +100 ,midy-i/3 -100  , midx+2*i +100,midy-i/3 -100,     midx+2*i +100,midy+i/3 -100   ,midx-2*i +100, midy+i/3 -100};
	fillpoly(4,polygon);

	// for the circle in the middle of the strip
	 fillellipse(midx+100,midy-100,i/2,i/2);
	 setcolor(BLACK);
	 ellipse(midx+100,midy-100,0,360,i/2,i/2);
	 ellipse(midx+100,midy-100,0,360,i/3,i/3);
	 ellipse(midx+ 99,midy-100,0,360,i/3,i/3);
	 ellipse(midx+ 98,midy-100,0,360,i/3,i/3);

	delay(20);
       }
       nosound();

/////////////    WELCOME  MESSAGE  FOR THE  GAME   ////////////////////////


      setcolor(7);
      settextstyle(GOTHIC_FONT,0,7);
      h = textheight("W");

     for(i=1; i<100 && !kbhit() ; ++i)
     {
      if(i%16==0) ++i; // this is to avoid black colouration
      setcolor(i);
      outtextxy(10,15    ,"This");
      outtextxy(10,15+2*h  ,"  is  the ");
      outtextxy(10,15+4*h,"     game  of ");
      outtextxy(10,15+6*h,"       Pokemons");

      delay(50);
     }




   for(sd=1; sd<=1400 && !kbhit(); ++sd) delay(1); // to delay
      cleardevice();

  }
