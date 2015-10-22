/***************************************************************************
*********************                              *************************
*******   It displays the Akhil teasing animation using ********************
***********  the function       `Akhita'           *************************
***************************************************************************/

 void Akhilta();
 void Bye();

void akhita()
{
 char ch;
 int m;
 clrscr();

  {
  gotoxy(35,20);
  textcolor(GREEN+BLINK);
  cprintf("WELCOME Akhil");
  delay(3000);
  }

  clrscr();

 P:
  Akhilta();
 S:

  textcolor(LIGHTGREEN);
  gotoxy(50,32);
   cprintf("PRESS");
  gotoxy(50,34);
   cprintf("1.To repeat the animation");
  gotoxy(50,36);
   cprintf("2.To continue with the game");   cout<<"\t";
  ch=getche();
  m=ch-48;

      textcolor(RED);

      if((m==1)||(m==2))
	{
      if (m==1)
	goto P;
      else
       {
       Bye();
       }
    }
     else
     {
       clrscr();
       cout<<"\n\n\n\n\n\n\n\n\n\n\t YOU  FOOL !! Can't you see what's written ......... ";
       goto S;
     }
}

//-----------THE  MAJOR  FUNTION  " AKHILTA " -------------------------------

 void Akhilta()
{
 int a,b,c,d,i,j;

  //-------  The Major Code   -------   Mater loop    ------

//The outer - most for loop is just to control the number of revoluions *****

for(int y=1; y<=2 && !kbhit() ; ++y)
{

  for(int k=1; k<=4 && !kbhit() ; ++k) //The loop to assign arguments for the following for loops
  {
   switch(k)
   {
    case 1:{ a=20 ; b=20 ; c=10 ; d=80 ; break; }
    case 2:{ a=41 ; b=10 ;  c=0 ; d=20 ; break; }
    case 3:{ a=59 ; b=21 ;  c=0 ; d=30 ; break; }
    case 4:{ a=39 ; b=30 ; c=20 ; d=80 ; break; }
   }

   //-- The  for - loop -------------

   for(i=a, j=b; (j>=c)&&(j<=d) && !kbhit() ; )
   {
    textcolor(BROWN);

    clrscr();
     {
      for(int x=39; x<=41; ++x)  //code to print the core
      {
	for(int y=19; y<=21; ++y)
	{
	 gotoxy(x,y);
	  cprintf("*");
	}
      }
      textcolor(LIGHTGRAY);

       gotoxy(40,18);  cprintf("*");
       gotoxy(42,20);  cprintf("*");
       gotoxy(40,22);  cprintf("*");
       gotoxy(38,20);  cprintf("*");
     }

   {
    gotoxy(i,j);
    textcolor(BLUE);
     cprintf("o");
   }
   {
   textcolor(GREEN);
   gotoxy(i-1,j);   cprintf("-");
   gotoxy(i+1,j);   cprintf("-");
   }
   delay(50);

   // ------ The incriment --  decrement code -------------
   switch(k)
   {
    case 1: {
	      if(i%2==0)
		 ++i;
	      else
	       {
		++i; --j;
	       }
	      break;
	    }
    case 2: {
	      if(i%2==0)
		 ++i;
	      else
	       {
		++i; ++j;
	       }
	      break;
	    }
    case 3: {
	      if(i%2==0)
	       {
		 --i; ++j;
	       }
	      else
		 --i;
	       break;
	    }
    case 4: {
	      if(i%2==0)
		 --i;
	      else
	       {
		--i; --j;
	       }
	      break;
	    }
     }
   }
 }
}


textcolor(LIGHTCYAN);
delay(200);  gotoxy(3,20);   cprintf("Satellite -->");
delay(500); gotoxy(50,27);   cprintf("Howzzatt..");
 delay(400);
 }

 //-------- The cuty  " Bye "  function -------------------

 void Bye()
 {
  textcolor(MAGENTA);
  char B[]="Welcome--again";

   for(int i=0; i<=13; ++i)
   {
    clrscr();

      for(int j=13; j>=i; --j)
      {
       gotoxy(j+40,20);
       cout<<B[j];
      }
      delay(500);
   }
   delay(500);
   }
