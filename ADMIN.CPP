#include<PLAYER_.cpp>
// It contains the definitions of the classes `player' and `comp_player'



  void help();

  void welcome()
   {
    int gdrive=VGA,gmode=VGAHI;
    initgraph(&gdrive,&gmode,"");

    randomize();
    ellipse_(random(5)+1);
    welcome_();
    mov_elp1();

    closegraph();
    }

/////////////////////////////////////////////////////////////////////////////
//////    Funtion --- `admin_entry' for administration of user's entry //////
/////////////////////////////////////////////////////////////////////////////


  void admin_in()
  {
   int a;
   char ch;  char waste;

   window(1,1,80,50);
   clrscr();
   border_any(10,10,70,40,3);
   textcolor(WHITE);

   if(kbhit()) { waste=getche();
   putch(8); putch(' ');}
   // this is to avoid the char from be passed
   //on to the next screen when the user inhibits the presentation at the
   //begining by pressing a key
   if(waste!='a') waste='a'; // this simply to use 'waste' somewhere

   gotoxy(16,16);
   for(int i=1; i<=3; ++i) putch(3);
   cputs("   A Hearty welcome to this game   ");
   for(i=1; i<=3; ++i) putch(3);

   gotoxy(22,20);
   cputs("Choose what you would like to do..... ");
   gotoxy(24,25);
   cputs("1 . Go with the GAME !!!");
   gotoxy(24,28);
   cputs("2 . Help       ");
   gotoxy(24,31);
   cputs("3 . Exit       ");
   ch=getche();
   a=ch-48;

       switch(a)
       {
	 case 1: break;
	 case 2: help(); admin_in(); break;
	 case 3: exit(1);
	default: gotoxy(32,34); textcolor(RED);  cputs(" W R O N G   C H O I C E"); getch(); admin_in(); break;
	}


  }


/////////////////////////////////////////////////////////////////////////////
////////////      Function --- ` help'    ///////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


      void help()
      {
       int a;
       char ch;
       window(1,1,80,50);
       clrscr();
       border_lin(2,2,78,48,2);
       textcolor(WHITE);

       gotoxy(5,10);
       cputs("Here are the rules of the game -------");
       gotoxy(5,15);
       cputs("There will be two players in the game {  In case there is");
       gotoxy(5,17);
       cputs(" only one player the computer will be the second player }");
       gotoxy(4,19);
       cputs("Each player gets to play with two  pokemons out of eight displayed.");
       gotoxy(4,21);
       cputs("The pokemons got by the players is luck-dependent and however there");
       gotoxy(4,23);
       cputs("are only four kinds of pokemons. ");
       gotoxy(4,25);
       cputs("The battle will decide the winner. The pokemons  with stronger type");
       gotoxy(4,27);
       cputs("will have an extra advantage");
       gotoxy(5,32);
       cputs("Press `1' to see the strength hierarchy (or) any other number to get");
       gotoxy(5,34);
       cputs("back to the game       ");
       ch=getche();
       a=ch-48;
	 if(a==1)
	 {
	   clrscr();
	   border_lin(2,2,78,48,2);
	   textcolor(WHITE);
	   gotoxy(20,20);
	   cputs(" G R A S S        >>>  E L E C T R I C");
	   gotoxy(20,24);
	   cputs(" E L E C T R I C  >>>  W A T E R");
	   gotoxy(20,28);
	   cputs(" W A T E R        >>>  F I R E");
	   gotoxy(20,32);
	   cputs(" F I R E          >>>  G R A S S");

	   gotoxy(20,36);
	   cputs(" Press any key to get back to the game        ");

	 getch();
	 }

     }



/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$                                                      $$$$$$$$$$
$$$$$$        The Entry administrator function -- `admin_entry`     $$$$$$$
$$$$$$$$$$$                                                      $$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/

   void f()
   {
   int gdrive=VGA,gmode=VGAHI;
   initgraph(&gdrive,&gmode,"");
   welcome();
   closegraph();
   }


  int  admin_entry()
  {
   char ch;
   f();
   int no_of_players;
   textmode(LASTMODE);
   clrscr();
   admin_in();


   garden:

    clrscr();
    border_lin(2,2,78,48,2);
    textcolor(WHITE);

    gotoxy(12,20);
    cputs("Enter the number of players playing the game (max. 2)");
    gotoxy(16,26);
    ch=getche();
    no_of_players=ch-48;
    if((no_of_players<1)||(no_of_players>2)) { gotoxy(12,35);  cputs("W R O N G   C H O I C E");  getch(); goto garden; }

    return no_of_players;
   }

