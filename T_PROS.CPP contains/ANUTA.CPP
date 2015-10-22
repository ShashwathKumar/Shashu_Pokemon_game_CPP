/**************************************************************************
******************                               **************************
*********    It prints the Anuragh_teasing animation using    *************
***************  the function  ` anuta '         **************************
**************************************************************************/

 void Anu(int c)
 {
   char b='';

  for(int i=1+c; (i<=32+c)&&(i<=49); ++i)
   {
   gotoxy(27,i); cout<<b<<b<<b;
   }

  //delay(2000);
  for(int j=i ; j<=49; ++j)
  {
  gotoxy(60-j+c,j);
  cout<<b<<b;

  gotoxy(j-c-5,j);
  cout<<b<<b;
  }
  //delay(2000);

 /* cout<<b<<b<<b<<b<<b<<b<<b;
  gotoxy(46,48); cout<<b<<b<<b<<b<<b<<b<<b;

  gotoxy(3,49); cout<<b<<b<<b<<b<<b<<b<<b;
  gotoxy(4,48);cout<<b<<b<<b<<b<<b<<b<<b;  */



  for(int k=i-22,l=i-22; (k<=i-13)&&(k<=27); ++k)
  {
  gotoxy(l-c+19,k);  cout<<b<<b;
  gotoxy(36-l+c,k);  cout<<b<<b;
  l=l+2;
  }

  }





 void anuta()
 {
  textbackground(0);
  clrscr();
  textbackground(0);
  gotoxy(35,20);
  textcolor(GREEN+BLINK);
  cprintf("WELCOME Anuragh");
  delay(3000);

  textbackground(0);
  clrscr();
  textbackground(0);
  textcolor(1);

  char face[15][40];



   strcpy(face[0],"              ////////////////         ");
   strcpy(face[1],"           /////////////////////       ");
   strcpy(face[2],"          _|                   |_      ");
   strcpy(face[3],"         _|                     |_     ");
   strcpy(face[4],"         | <<<<<<<<    <<<<<<<<  |     ");
   strcpy(face[5],"      _\\ | _______      _______  | /_  ");
   strcpy(face[6],"     {   |    \\/   |      \\/   |   } ");
   strcpy(face[7],"     |   |          |            |   | ");
   strcpy(face[8],"      \\  |          |            |  /  ");
   strcpy(face[9],"      |  |          |           |  |  ");
  strcpy(face[10],"      \\ /|                       |\\ /  ");
  strcpy(face[11],"         |_  /---------------\\  _|     ");
  strcpy(face[12],"          |_                   _|      ");
  strcpy(face[13],"            |__             __|        ");
  strcpy(face[14],"               \\___________/           ");



///////////////////// second   window  open //////////////////////////////////

     Anu(0);

     window(61,1,80,50);


     cputs("\n\n\n\n\nOH !!!  MY  GOD!!\n\n\n\n\n\rKya  LAMBOOooo...  \n\n\n\n\r hai  re !!!");

     textcolor(3);
     cputs("\n\n\n\n\n\n\rAb toh ??!!\n\n\n\rinka  mukh - darshan \n\n\n\rkarne  keliye -----\n\n\n\n\r");

     textcolor(128+RED);


     cputs("\n\n\rFIRST\n\nFLOOR\n\nTAK\n\n\n\rJANA\n\nPADEGA !!!!!!!");

     delay(2560);

/////////////////////// second window close  ///////////////////////////////

///////////////////code for lift ///////////////////////////////////////////

    window(56,1,60,50);

    textbackground(8);
    clrscr();
    textbackground(8);

    //code  for  lines ------------------

     textcolor(YELLOW);

     for(int line=1; line<=50; ++line)
     {
     gotoxy(2,line); putch(char(179));
     gotoxy(4,line); putch(char(179));
     }


    //code  for  lines  close -----------------

    textcolor(9);
    gotoxy(3,16);
    cputs("L");

    textcolor(5);
    gotoxy(3,24);
    cputs("I");

    textcolor(2);
    gotoxy(3,32);
    cputs("F");

    textcolor(1);
    gotoxy(3,40);
    cputs("T");

    textcolor(12+128);
    gotoxy(3,8);
    putch(char(30));


///////////////////code for lift close ////////////////////////////////////

    window(1,1,55,50);

    textbackground(0);
    clrscr();
    textbackground(0);


    textcolor(2);


   for(int i=0; i<=40; ++i)
  {
  clrscr();
  Anu(i);

   int y=i;   int g;

   if(i-0<14) g=14-i;
   else g=0;



   for(int z=14; z>=g; --z)
   {
   gotoxy(7,y+1);
   puts(face[z]);
   --y;
   }
  delay(200);
  }

/// code  to  clear  the  screen  of  `lift' window ///////////////////////

     window(56,1,60,50);
     window(58,1,59,50);
     clrscr();

/////////LIFT ........   CLOSE ///////////////////////////////////////

///  CODE to  draw  the  moustache  and  beard ------------

    window(1,1,55,50);

    delay(500);
    textcolor(WHITE);

    gotoxy(21,36);

    for(int v=0; v<6; ++v)
    {
    if(v==0) putch(char(204));
    else     putch(char(220));
    }

    gotoxy(29,36);

    for(v=0; v<6; ++v)
    {
    if(v==5) putch(char(185));
    else     putch(char(220));
    }


     for(v=4; v>0; --v)
     {
      gotoxy(29-v,46-v);

      for(int u=1; u<(2*v); ++u)
      putch(char(176));
     }







//////////////////////  second window open //////////////////////////////////

   window(61,1,80,50);

   clrscr();

    textcolor(4);

    cputs("\n\n\n\n\n\nDEKHO ");  putch(char(26));
    cputs("\n\n\n\nDEKHO ");      putch(char(26));


    textcolor(5);

    cputs("\n\n\n\n\n\n\n\n\n\rCHAND\n\nKA\n\nTUKDA ");  putch(char(29));  putch(char(32)); putch(char(1));

    cputs("\n\n\n\n\n\n\rJO\n\nNIKAL\n\nAAYA\n\nHAI !!!");

////////////////////////close of second window/////////////////////////////

/////////////////////////move eye brow////////////////////////////////////

    delay(400);

   window(1,1,55,50);   textcolor(2);

  for(int y=0; y<3; ++y)
  {
  delay(300);

  gotoxy(18,31);
  cputs("        ");

  gotoxy(30,31);
  cputs("        ");


  gotoxy(18,30);
  cputs("<<<<<<<<");


  gotoxy(30,30);
  cputs("<<<<<<<<");  ////eye  brow moved upwards

  gotoxy(23,33);  cputs(" ");
  //gotoxy(24,33);  putch(char(179));

  gotoxy(36,33);  cputs(" ");
  //gotoxy(37,33);  putch(char(179));



//////////////  eye brow moved once ////////////////////////////////////////



  delay(300);

  gotoxy(18,30);
  cputs("        ");

  gotoxy(30,30);
  cputs("        ");


  gotoxy(18,31);
  cputs("<<<<<<<<");


  gotoxy(30,31);
  cputs("<<<<<<<<");

  //gotoxy(24,33);  cputs(" ");
  gotoxy(23,33);  cputs("/");

  //gotoxy(37,33);  cputs(" ");
  gotoxy(36,33);  cputs("/");

  }

  delay(2000);
  }
