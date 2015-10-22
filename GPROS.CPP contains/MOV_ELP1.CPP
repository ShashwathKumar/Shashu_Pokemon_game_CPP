/***********************************************************************
**************                                        ******************
***********  It contains the function `mov_elp1'      ******************
*********   It works for 16 seconds             ************************
***********************************************************************/

void mov_elp1()
{
  cleardevice();
  randomize();

  int x=random(640) , y=random(480);
  int x_coun=0, y_coun=0;

  int x1=100 , y1=100;
  int x1_coun=1, y1_coun=1;


 for(int i=0; (i<=2500)&&(!kbhit()); ++i)
 {
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

    cleardevice();

    setcolor(1);
    ellipse(x,y,0,360,50,25);

	if(x==639) { sound(3500); delay(3); nosound(); x_coun=1;}
     else if(x==0) { sound(3500); delay(3); nosound(); x_coun=0;}

     switch(x_coun)
     {
     case 1: --x;   break;
     case 0: ++x;   break;
     }

	if(y==479)   { sound(3500); delay(3); nosound();y_coun=1;}
     else if(y==0)   { sound(3500); delay(3); nosound();y_coun=0;}

     switch(y_coun)
     {
     case 1: --y;   break;
     case 0: ++y;   break;
     }


////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

       //cleardevice();

    setcolor(2);
    ellipse(x1,y1,0,360,50,25);

	if(x1==639)  { sound(3500); delay(3); nosound(); x1_coun=1;}
     else if(x1==0)  { sound(3500); delay(3); nosound();x1_coun=0;}

     switch(x1_coun)
     {
     case 1: --x1;   break;
     case 0: ++x1;   break;
     }

	if(y1==479)  { sound(3500); delay(3); nosound(); y1_coun=1;}
     else if(y1==0)  { sound(3500); delay(3); nosound(); y1_coun=0;}

     switch(y1_coun)
     {
     case 1: --y1;   break;
     case 0: ++y1;   break;
     }

     delay(4);
 }


   for(int sd=1; sd<=900 && !kbhit(); ++sd) delay(1); // to delay;
  cleardevice();
 }
