/********a******************************************************************
**************                                         ********************
*********    It contains the function `ellipse_'         ******************
**************                                         *********************
**************************************************************************/

/////////////////////////////////////////////////////////////////////////////
////////  DISPLAYS  THE MAIN ELLIPSE ie, in the middle //////////////////////
/////////////////////////////////////////////////////////////////////////////

 void middle_ellipse(int delayx)
 {
   randomize();
   int juggler=random(2);

   for(int ei=0; ei<=110 && !kbhit() ; ++ei)
   {
     sound(ei*10);
   if(juggler==0) setcolor(getmaxcolor());
   else           setcolor(ei);

   ellipse(320,240,0,360,ei,2*ei);
   delay(delayx);
   }
    nosound();
 }

/////////////////////////////////////////////////////////////////////////////
///////  middle ellipse  ends       /////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

  void versatile_ellipse(int midx,int midy,int ratioyx,int radius,int delayq)
  {
     randomize();
     static int color_modifier=random(16);
     ++color_modifier;
     if(color_modifier%16==0) ++color_modifier ; // thus is to avoid black coloration


     for(int vi=1; (vi<=radius-5)&&(vi<=100)&&(!kbhit()) ; ++vi) // here radius - 5 is used to create space between individual ellipses
     {
       sound(2000/vi);
       setcolor(color_modifier);
       ellipse(midx,midy,0,360,vi,vi*ratioyx);
       delay(delayq);
     }
     nosound();

   }






 void ellipse_(int no_)
 {

    cleardevice();

    randomize();

       // `no_' gives the number of windows on each side
      middle_ellipse(20);


/////////////////////////////////////////////////////////////////////////////
///////                                                         /////////////
///////  LOOP TO SET VALUES FOR THE PARAMETERS OF versatile_ellipse /////////
///////     and        call   it   accordingly                  /////////////
///////                                                         /////////////
/////////////////////////////////////////////////////////////////////////////

     int ratioyx= 9/(8*no_);   // ie, (640/n)/480
	 ratioyx = (ratioyx==0)? 1:ratioyx + 1	;
     int radius= 480/(2*no_);    //because diameter = 2*radius



      for(int i=1; i<=no_ && !kbhit() ; ++i)
      {
       int midx=120;
       int midy=(480/(2*no_))* (2*i-1);
       versatile_ellipse(midx,midy,ratioyx,radius,10);
       }

     for(i=1; i<=no_ && !kbhit() ; ++i)
      {
       int midx=520;
       int midy=(480/(2*no_))* (2*i-1);
       versatile_ellipse(midx,midy,ratioyx,radius,10);
       }
/////////////////////////////////////////////////////////////////////////////
//////   EXTRA_SUBSIDIARY  ELLIPSE CREATOR  ends...........      ////////////
/////////////////////////////////////////////////////////////////////////////

   for(int sd=1; sd<=1400 && !kbhit(); ++sd) delay(1); // to delay
   cleardevice();
 }

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////   NOTE  ::                                             ////////////
/////////   Experimentally it has been determined that  `40' is  ////////////
/////////       the maximum value that can be provided to no_ .  ////////////
/////////       And for any value above that nothing will be     ////////////
/////////       displayed                                        ////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
