// ********************************************************************** //
// ******* The password of any user is his user_name itself ************* //
// ********************************************************************** //

#include<shashu.cpp>


  int _1_battler, _2_battler;  // they store the selection_no(1 or 2) of the pokemon which is chosen for battling
  int _1_hp , _2_hp;           // these variables are used to store the HP of the currently battling pokemon
  int _p1[2]={1,1} ,_p2[2]={1,1}; // these variables store the information about the death and liveliness of both the chosen pokemons on each side
  int counter=0;
  int damage,opp_ka_type, attack_ka_num ;// these are used to reduce the amount of code in "game_boy"
  char ch;

  void game_boy();
  void game_starter();


/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^                                                                         ^^
^^        The function --- " game_starter " -- to initiate the game        ^^
^^                                                                         ^^
^^                                                                         ^^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/




   void game_starter()
   {
if(strcmp(p1.name,"Akhil")==0 || strcmp(p1.name,"akhil")==0 || strcmp(p2.name,"Akhil")==0 || strcmp(p2.name,"Akhil")==0)
akhita();
if(strcmp(p1.name,"Anu")==0 || strcmp(p1.name,"anu")==0 || strcmp(p1.name,"Anuragh")==0 || strcmp(p1.name,"anuragh")==0)
anuta();
if(strcmp(p2.name,"Anu")==0 || strcmp(p2.name,"anu")==0 || strcmp(p2.name,"Anuragh")==0 || strcmp(p2.name,"anuragh")==0)
anuta();

      window(1,1,80,50);
      clrscr();
      int x_co, y_co ;

////////////   TAKING  THE  POKEMON  DETAILS  OF  PLAYER  1   ////////////////

START:
      window(10,10,35,40);
      border_lin(1,1,25,30,2,YELLOW,YELLOW);
	textcolor(LIGHTGREEN);
	gotoxy(9,2);
	cputs("PLAYER 1");
	   textcolor(BROWN);
	   gotoxy(3,5);
	   cputs(p1.name);
	      textcolor(BLUE);
	      gotoxy(3,8);
	      cputs("Choose your battling ");
	      gotoxy(3,9);
	      cputs("pokemon");
		       textcolor(LIGHTRED);
		       gotoxy(6,12);
		       cputs(" 1. ");

		       if(p1.pokemon1.selection_no==1)     { if(p1.pokemon1.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p1.pokemon1.name);}
		       else if(p1.pokemon2.selection_no==1){ if(p1.pokemon2.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p1.pokemon2.name);}
		       else if(p1.pokemon3.selection_no==1){ if(p1.pokemon3.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p1.pokemon3.name);}
		       else if(p1.pokemon4.selection_no==1){ if(p1.pokemon4.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p1.pokemon4.name);}

		       textcolor(LIGHTRED);
		       gotoxy(6,14);
		       cputs(" 2. ");

		       if(p1.pokemon1.selection_no==2)      { if(p1.pokemon1.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p1.pokemon1.name);}
		       else if(p1.pokemon2.selection_no==2) { if(p1.pokemon2.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p1.pokemon2.name);}
		       else if(p1.pokemon3.selection_no==2) { if(p1.pokemon3.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p1.pokemon3.name);}
		       else if(p1.pokemon4.selection_no==2) { if(p1.pokemon4.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p1.pokemon4.name);}

				 textcolor(GREEN);
				 gotoxy(3,17);
				 cputs(" Enter corresponding ");
				 gotoxy(3,18);
				 cputs(" number  :    ");
				 ch=getche();
				 if(no_of_players==2){ putch(8); putch('?'); }
				 _1_battler=ch-48;

				 if(_1_battler<1 || _1_battler>2 ) { textcolor(RED); gotoxy(2,20); cputs("W R O N G  C H O I C E "); getch(); clrscr(); goto START;  }

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


if(no_of_players==2)
    {
////////////   TAKING  THE  POKEMON  DETAILS  OF  PLAYER  2   ////////////////

START2:
      window(45,10,70,40);
      border_lin(1,1,25,30,2,YELLOW,YELLOW);
	textcolor(LIGHTGREEN);
	gotoxy(9,2);
	cputs("PLAYER 2");
	   textcolor(BROWN);
	   gotoxy(3,5);
	   cputs(p2.name);
	      textcolor(BLUE);
	      gotoxy(3,8);
	      cputs("Choose your battling ");
	      gotoxy(3,9);
	      cputs("pokemon");
		       textcolor(LIGHTRED);
		       gotoxy(6,12);
		       cputs(" 1. ");

		       if(p2.pokemon1.selection_no==1)     { if(p2.pokemon1.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p2.pokemon1.name);}
		       else if(p2.pokemon2.selection_no==1){ if(p2.pokemon2.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p2.pokemon2.name);}
		       else if(p2.pokemon3.selection_no==1){ if(p2.pokemon3.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p2.pokemon3.name);}
		       else if(p2.pokemon4.selection_no==1){ if(p2.pokemon4.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p2.pokemon4.name);}

		       textcolor(LIGHTRED);
		       gotoxy(6,14);
		       cputs(" 2. ");

		       if(p2.pokemon1.selection_no==2)      { if(p2.pokemon1.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p2.pokemon1.name);}
		       else if(p2.pokemon2.selection_no==2) { if(p2.pokemon2.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p2.pokemon2.name);}
		       else if(p2.pokemon3.selection_no==2) { if(p2.pokemon3.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p2.pokemon3.name);}
		       else if(p2.pokemon4.selection_no==2) { if(p2.pokemon4.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p2.pokemon4.name);}

				 textcolor(GREEN);
				 gotoxy(3,17);
				 cputs(" Enter corresponding ");
				 gotoxy(3,18);
				 cputs(" number  :    ");

				 ch=getche();
				 putch(8); putch('?');
				 _2_battler=ch-48;

				 if(_2_battler<1 || _2_battler>2 ) { textcolor(RED); gotoxy(2,20); cputs("W R O N G  C H O I C E "); getch(); clrscr(); goto START2;  }

    }
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////



else if(no_of_players==1)
    {
////////////   PRINTING  THE  POKEMON  DETAILS  OF  COMP-PLAYER    ////////////////

      window(45,10,70,40);
      border_lin(1,1,25,30,2,YELLOW,YELLOW);
	textcolor(LIGHTGREEN);
	gotoxy(7,2);
	cputs("COMP-PLAYER");
	   textcolor(BROWN);
	   gotoxy(3,5);
	   cputs(p.name);
	      textcolor(BLUE);
	      gotoxy(3,8);
	      cputs(" Choosing battling ");
	      gotoxy(3,9);
	      cputs(" pokemon");
		       textcolor(LIGHTRED);
		       gotoxy(6,12);
		       cputs(" 1. ");

		       if(p.pokemon1.selection_no==1)     { if(p.pokemon1.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p.pokemon1.name);}
		       else if(p.pokemon2.selection_no==1){ if(p.pokemon2.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p.pokemon2.name);}
		       else if(p.pokemon3.selection_no==1){ if(p.pokemon3.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p.pokemon3.name);}
		       else if(p.pokemon4.selection_no==1){ if(p.pokemon4.ALIVE==-1) textcolor(LIGHTGRAY);          cputs(p.pokemon4.name);}

		       textcolor(LIGHTRED);
		       gotoxy(6,14);
		       cputs(" 2. ");

		       if(p.pokemon1.selection_no==2)      { if(p.pokemon1.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p.pokemon1.name);}
		       else if(p.pokemon2.selection_no==2) { if(p.pokemon2.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p.pokemon2.name);}
		       else if(p.pokemon3.selection_no==2) { if(p.pokemon3.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p.pokemon3.name);}
		       else if(p.pokemon4.selection_no==2) { if(p.pokemon4.ALIVE==-1) textcolor(LIGHTGRAY);         cputs(p.pokemon4.name);}

				 textcolor(GREEN);
				 gotoxy(3,17);
				 cputs(" The pokemon ");
				 gotoxy(3,18);
				 cputs(" chosen is :  ");

		       randomize();
		       _2_battler = random(2)+1;
		       printf("%d",_2_battler);


    }

 }









/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^                                                                         ^^
^^        The function --- " game_boy "  - to play the game                ^^
^^                                                                         ^^
^^                                                                         ^^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

	void game_boy()
	{

	 char  _1_po[11], _2_po[11];  // these variables are to store the names of the battling pokemons
	 int _1_a,_2_a;               // these variables are to handle the attacks of the pokemons
	 int damager,damager2;        // these variables are used to store the damages of the attacks thrown at the opponent pokemon
	 //int finaliso_patrona=1;


	 if(p1.pokemon1.selection_no==_1_battler)  {  _1_hp=p1.pokemon1.hp; }
     else if(p1.pokemon2.selection_no==_1_battler) {  _1_hp=p1.pokemon2.hp;  }
     else if(p1.pokemon3.selection_no==_1_battler) {  _1_hp=p1.pokemon3.hp;  }
     else if(p1.pokemon4.selection_no==_1_battler) {  _1_hp=p1.pokemon4.hp;  }

if(no_of_players==2)
{
     if(p2.pokemon1.selection_no==_2_battler) {       _2_hp=p2.pokemon1.hp;  }
     else if(p2.pokemon2.selection_no==_2_battler) {  _2_hp=p2.pokemon2.hp;  }
     else if(p2.pokemon3.selection_no==_2_battler) {  _2_hp=p2.pokemon3.hp;  }
     else if(p2.pokemon4.selection_no==_2_battler) {  _2_hp=p2.pokemon4.hp;  }
}

else if(no_of_players==1)
{
     if(p.pokemon1.selection_no==_2_battler) {       _2_hp=p.pokemon1.hp;  }
     else if(p.pokemon2.selection_no==_2_battler) {  _2_hp=p.pokemon2.hp;  }
     else if(p.pokemon3.selection_no==_2_battler) {  _2_hp=p.pokemon3.hp;  }
     else if(p.pokemon4.selection_no==_2_battler) {  _2_hp=p.pokemon4.hp;  }
}






	  while (_1_hp>0 && _2_hp>0 )
	  {
	      window(5,5,35,48);
	      clrscr();
	      border_lin(1,1,30,43,2,LIGHTGRAY,LIGHTGRAY);
	      gotoxy(4,4);
	      textcolor(BROWN);
	      cputs(p1.name);  cputs("'s");

		if(p1.pokemon1.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon1.name); }
		else if(p1.pokemon2.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon2.name); }
		else if(p1.pokemon3.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon3.name); }
		else if(p1.pokemon4.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon4.name); }


			textcolor(GREEN);
			for(int i=0,x=3,y=26; _1_po[i]!='\0'; ++i,y=y-2,x=x+2)
			{
			     gotoxy(x,y);
			     putch(_1_po[i]);
			}
			textcolor(LIGHTRED);
			gotoxy(10,28);      cputs("1. ");
			    if(p1.pokemon1.selection_no== _1_battler) {  cputs(p1.pokemon1.attack1.name); }
			    else if(p1.pokemon2.selection_no== _1_battler) {  cputs(p1.pokemon2.attack1.name); }
			    else if(p1.pokemon3.selection_no== _1_battler) {  cputs(p1.pokemon3.attack1.name); }
			    else if(p1.pokemon4.selection_no== _1_battler) {  cputs(p1.pokemon4.attack1.name); }

			gotoxy(10,30);      cputs("2. ");
			    if(p1.pokemon1.selection_no== _1_battler) {  cputs(p1.pokemon1.attack2.name); }
			    else if(p1.pokemon2.selection_no== _1_battler) {  cputs(p1.pokemon2.attack2.name); }
			    else if(p1.pokemon3.selection_no== _1_battler) {  cputs(p1.pokemon3.attack2.name); }
			    else if(p1.pokemon4.selection_no== _1_battler) {  cputs(p1.pokemon4.attack2.name); }

			gotoxy(10,32);      cputs("3. ");
			    if(p1.pokemon1.selection_no== _1_battler) {  cputs(p1.pokemon1.attack3.name); }
			    else if(p1.pokemon2.selection_no== _1_battler) {  cputs(p1.pokemon2.attack3.name); }
			    else if(p1.pokemon3.selection_no== _1_battler) {  cputs(p1.pokemon3.attack3.name); }
			    else if(p1.pokemon4.selection_no== _1_battler) {  cputs(p1.pokemon4.attack3.name); }


			textcolor(YELLOW);
			gotoxy(18,36);      cputs("HP :");
			    if(p1.pokemon1.selection_no== _1_battler)      { if(p1.pokemon1.hp>=80) textcolor(GREEN); else if(p1.pokemon1.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon1.hp>=35) textcolor(YELLOW);	else if(p1.pokemon1.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon1.hp); }
			    else if(p1.pokemon2.selection_no== _1_battler) { if(p1.pokemon2.hp>=80) textcolor(GREEN); else if(p1.pokemon2.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon2.hp>=35) textcolor(YELLOW);	else if(p1.pokemon2.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon2.hp); }
			    else if(p1.pokemon3.selection_no== _1_battler) { if(p1.pokemon3.hp>=80) textcolor(GREEN); else if(p1.pokemon3.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon3.hp>=35) textcolor(YELLOW);	else if(p1.pokemon3.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon3.hp); }
			    else if(p1.pokemon4.selection_no== _1_battler) { if(p1.pokemon4.hp>=80) textcolor(GREEN); else if(p1.pokemon4.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon4.hp>=35) textcolor(YELLOW);	else if(p1.pokemon4.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon4.hp); }

/////////////////   UNTIL  HERE  IT IS  JUST THE DISPLAYING  OF DETAILS OF FIRST PLAYER THAT IS  DONE ////////////////

if(no_of_players==2)
  {
	      window(45,5,75,48);
	      clrscr();
	      border_lin(1,1,30,43,2,LIGHTGRAY,LIGHTGRAY);
	      gotoxy(4,4);
	      textcolor(BROWN);
	      cputs(p2.name);  cputs("'s");

		if(p2.pokemon1.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon1.name); }
		else if(p2.pokemon2.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon2.name); }
		else if(p2.pokemon3.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon3.name); }
		else if(p2.pokemon4.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon4.name); }


			textcolor(GREEN);
			for(int i=0,x=3,y=26; _2_po[i]!='\0'; ++i,y=y-2,x=x+2)
			{
			     gotoxy(x,y);
			     putch(_2_po[i]);
			}
			textcolor(LIGHTRED);
			gotoxy(10,28);      cputs("1. ");
			    if(p2.pokemon1.selection_no== _2_battler) {  cputs(p2.pokemon1.attack1.name); }
			    else if(p2.pokemon2.selection_no== _2_battler) {  cputs(p2.pokemon2.attack1.name); }
			    else if(p2.pokemon3.selection_no== _2_battler) {  cputs(p2.pokemon3.attack1.name); }
			    else if(p2.pokemon4.selection_no== _2_battler) {  cputs(p2.pokemon4.attack1.name); }

			gotoxy(10,30);      cputs("2. ");
			    if(p2.pokemon1.selection_no== _2_battler) {  cputs(p2.pokemon1.attack2.name); }
			    else if(p2.pokemon2.selection_no== _2_battler) {  cputs(p2.pokemon2.attack2.name); }
			    else if(p2.pokemon3.selection_no== _2_battler) {  cputs(p2.pokemon3.attack2.name); }
			    else if(p2.pokemon4.selection_no== _2_battler) {  cputs(p2.pokemon4.attack2.name); }

			gotoxy(10,32);      cputs("3. ");
			    if(p2.pokemon1.selection_no== _2_battler) {  cputs(p2.pokemon1.attack3.name); }
			    else if(p2.pokemon2.selection_no== _2_battler) {  cputs(p2.pokemon2.attack3.name); }
			    else if(p2.pokemon3.selection_no== _2_battler) {  cputs(p2.pokemon3.attack3.name); }
			    else if(p2.pokemon4.selection_no== _2_battler) {  cputs(p2.pokemon4.attack3.name); }


			textcolor(YELLOW);
			gotoxy(18,36);      cputs("HP :");
			    if(p2.pokemon1.selection_no== _2_battler)      { if(p2.pokemon1.hp>=80) textcolor(GREEN); else if(p2.pokemon1.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon1.hp>=35) textcolor(YELLOW);	else if(p2.pokemon1.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}       cprintf("%d", p2.pokemon1.hp); }
			    else if(p2.pokemon2.selection_no== _2_battler) { if(p2.pokemon2.hp>=80) textcolor(GREEN); else if(p2.pokemon2.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon2.hp>=35) textcolor(YELLOW);	else if(p2.pokemon2.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}	cprintf("%d", p2.pokemon2.hp); }
			    else if(p2.pokemon3.selection_no== _2_battler) { if(p2.pokemon3.hp>=80) textcolor(GREEN); else if(p2.pokemon3.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon3.hp>=35) textcolor(YELLOW);	else if(p2.pokemon3.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}	cprintf("%d", p2.pokemon3.hp); }
			    else if(p2.pokemon4.selection_no== _2_battler) { if(p2.pokemon4.hp>=80) textcolor(GREEN); else if(p2.pokemon4.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon4.hp>=35) textcolor(YELLOW);	else if(p2.pokemon4.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}	cprintf("%d", p2.pokemon4.hp); }
  }

/////////////////   UNTIL  HERE  IT IS  JUST THE DISPLAYING  OF DETAILS OF second PLAYER THAT IS  DONE ////////////////


else
  {
	      window(45,5,75,48);
	      clrscr();
	      border_lin(1,1,30,43,2,LIGHTGRAY,LIGHTGRAY);
	      gotoxy(4,4);
	      textcolor(BROWN);
	      cputs(p.name);  cputs("'s");

		if(p.pokemon1.selection_no== _2_battler) { strcpy(_2_po , p.pokemon1.name); }
		else if(p.pokemon2.selection_no== _2_battler) { strcpy(_2_po , p.pokemon2.name); }
		else if(p.pokemon3.selection_no== _2_battler) { strcpy(_2_po , p.pokemon3.name); }
		else if(p.pokemon4.selection_no== _2_battler) { strcpy(_2_po , p.pokemon4.name); }


			textcolor(GREEN);
			for(int i=0,x=3,y=26; _2_po[i]!='\0'; ++i,y=y-2,x=x+2)
			{
			     gotoxy(x,y);
			     putch(_2_po[i]);
			}
			textcolor(LIGHTRED);
			gotoxy(10,28);      cputs("1. ");
			    if(p.pokemon1.selection_no== _2_battler) {  cputs(p.pokemon1.attack1.name); }
			    else if(p.pokemon2.selection_no== _2_battler) {  cputs(p.pokemon2.attack1.name); }
			    else if(p.pokemon3.selection_no== _2_battler) {  cputs(p.pokemon3.attack1.name); }
			    else if(p.pokemon4.selection_no== _2_battler) {  cputs(p.pokemon4.attack1.name); }

			gotoxy(10,30);      cputs("2. ");
			    if(p.pokemon1.selection_no== _2_battler) {  cputs(p.pokemon1.attack2.name); }
			    else if(p.pokemon2.selection_no== _2_battler) {  cputs(p.pokemon2.attack2.name); }
			    else if(p.pokemon3.selection_no== _2_battler) {  cputs(p.pokemon3.attack2.name); }
			    else if(p.pokemon4.selection_no== _2_battler) {  cputs(p.pokemon4.attack2.name); }

			gotoxy(10,32);      cputs("3. ");
			    if(p.pokemon1.selection_no== _2_battler) {  cputs(p.pokemon1.attack3.name); }
			    else if(p.pokemon2.selection_no== _2_battler) {  cputs(p.pokemon2.attack3.name); }
			    else if(p.pokemon3.selection_no== _2_battler) {  cputs(p.pokemon3.attack3.name); }
			    else if(p.pokemon4.selection_no== _2_battler) {  cputs(p.pokemon4.attack3.name); }


			textcolor(YELLOW);
			gotoxy(18,36);      cputs("HP :");
			    if(p.pokemon1.selection_no== _2_battler)      { if(p.pokemon1.hp>=80) textcolor(GREEN); else if(p.pokemon1.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon1.hp>=35) textcolor(YELLOW);	else if(p.pokemon1.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}        cprintf("%d", p.pokemon1.hp); }
			    else if(p.pokemon2.selection_no== _2_battler) { if(p.pokemon2.hp>=80) textcolor(GREEN); else if(p.pokemon2.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon2.hp>=35) textcolor(YELLOW);	else if(p.pokemon2.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}	cprintf("%d", p.pokemon2.hp); }
			    else if(p.pokemon3.selection_no== _2_battler) { if(p.pokemon3.hp>=80) textcolor(GREEN); else if(p.pokemon3.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon3.hp>=35) textcolor(YELLOW);	else if(p.pokemon3.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}	cprintf("%d", p.pokemon3.hp); }
			    else if(p.pokemon4.selection_no== _2_battler) { if(p.pokemon4.hp>=80) textcolor(GREEN); else if(p.pokemon4.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon4.hp>=35) textcolor(YELLOW);	else if(p.pokemon4.hp>=20) textcolor(RED); else { textcolor(RED+BLINK);}	cprintf("%d", p.pokemon4.hp); }
  }

/////////////////   UNTIL  HERE  IT IS  JUST THE DISPLAYING  OF DETAILS OF computer PLAYER THAT IS  DONE ////////////////

//    if(finaliso_patrona==0) break;



  //~~~~~~~ VERY VERY IMPORTANT------------------------ this is used make sure that final scores are displayed

    /*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    $$$       Now we will do some operations regarding game , NOW   $$$$$$$$$$$$
    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/



//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//``````````````````` operations for battling_pokemons of player 1''''''''''''''
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
     bla_bla:
	window(5,5,35,48);
	gotoxy(4,38);
	textcolor(GREEN);
	cputs("Choose your attack : ");
	ch=getche();
	_1_a=ch-48;

	if(_1_a<1 || _1_a>3 )
	 {
	  gotoxy(3,40);
	  textcolor(RED);
	  cputs("W R O N G  C H O I C E");  getch();
	  gotoxy(3,40);
	  cputs("                      ");
	  gotoxy(4,38);
	  cputs("                       ");
	  goto bla_bla;
	  }

if(no_of_players==2)
  {		  if(p2.pokemon1.selection_no==_2_battler){ opp_ka_type=p2.pokemon1.type ;}
	     else if(p2.pokemon2.selection_no==_2_battler){ opp_ka_type=p2.pokemon2.type ;}
	     else if(p2.pokemon3.selection_no==_2_battler){ opp_ka_type=p2.pokemon3.type ;}
	     else if(p2.pokemon4.selection_no==_2_battler){ opp_ka_type=p2.pokemon4.type ;}
  }
else
  {		  if(p.pokemon1.selection_no==_2_battler){ opp_ka_type=p.pokemon1.type ;}
	     else if(p.pokemon2.selection_no==_2_battler){ opp_ka_type=p.pokemon2.type ;}
	     else if(p.pokemon3.selection_no==_2_battler){ opp_ka_type=p.pokemon3.type ;}
	     else if(p.pokemon4.selection_no==_2_battler){ opp_ka_type=p.pokemon4.type ;}
  }


	if(p1.pokemon1.selection_no==_1_battler)
	{
	     switch(_1_a)
	     {
	     case 1: attack_ka_num= p1.pokemon1.attack1.a_no;
		     damage       = p1.pokemon1.attack1.damage;
		     break;
	     case 2: attack_ka_num= p1.pokemon1.attack2.a_no;
		     damage       = p1.pokemon1.attack2.damage;
		     break;
	     case 3: attack_ka_num= p1.pokemon1.attack3.a_no;
		     damage       = p1.pokemon1.attack3.damage;
		     break;
	     }
	}

	else if(p1.pokemon2.selection_no==_1_battler)
	{
	     switch(_1_a)
	     {
	     case 1: attack_ka_num= p1.pokemon2.attack1.a_no;
		     damage       = p1.pokemon2.attack1.damage;
		     break;
	     case 2: attack_ka_num= p1.pokemon2.attack2.a_no;
		     damage       = p1.pokemon2.attack2.damage;
		     break;
	     case 3: attack_ka_num= p1.pokemon2.attack3.a_no;
		     damage       = p1.pokemon2.attack3.damage;
		     break;
	     }
	}

	else if(p1.pokemon3.selection_no==_1_battler)
	{
	     switch(_1_a)
	     {
	     case 1: attack_ka_num= p1.pokemon3.attack1.a_no;
		     damage       = p1.pokemon3.attack1.damage;
		     break;
	     case 2: attack_ka_num= p1.pokemon3.attack2.a_no;
		     damage       = p1.pokemon3.attack2.damage;
		     break;
	     case 3: attack_ka_num= p1.pokemon3.attack3.a_no;
		     damage       = p1.pokemon3.attack3.damage;
		     break;
	     }
	}
	else if(p1.pokemon4.selection_no==_1_battler)
	{
	     switch(_1_a)
	     {
	     case 1: attack_ka_num= p1.pokemon4.attack1.a_no;
		     damage       = p1.pokemon4.attack1.damage;
		     break;
	     case 2: attack_ka_num= p1.pokemon4.attack2.a_no;
		     damage       = p1.pokemon4.attack2.damage;
		     break;
	     case 3: attack_ka_num= p1.pokemon4.attack3.a_no;
		     damage       = p1.pokemon4.attack3.damage;
		     break;
	     }
	}
	damager     = damage * damage_synchroniser(attack_ka_num, opp_ka_type);
	A[counter++]= attack_ka_num;


//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//``````````````````` operations for battling_pokemons of player 2''''''''''''''
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

if(no_of_players==2) // ????????  FOR PLAYER 2 (if no_of_players==2) ????????????
 {
   bla_bla2:
	window(45,5,75,48);
	gotoxy(4,38);
	textcolor(GREEN);
	cputs("Choose your attack : ");
	ch=getche();
	_2_a=ch-48;

	if(_2_a<1 || _2_a>3 )
	 {
	  gotoxy(3,40);
	  textcolor(RED);
	  cputs("W R O N G  C H O I C E");  getch();
	  gotoxy(3,40);
	  cputs("                      ");
	  gotoxy(4,38);
	  cputs("                       ");
	  goto bla_bla2;
	  }

		  if(p1.pokemon1.selection_no==_1_battler){ opp_ka_type=p1.pokemon1.type ;}
	     else if(p1.pokemon2.selection_no==_1_battler){ opp_ka_type=p1.pokemon2.type ;}
	     else if(p1.pokemon3.selection_no==_1_battler){ opp_ka_type=p1.pokemon3.type ;}
	     else if(p1.pokemon4.selection_no==_1_battler){ opp_ka_type=p1.pokemon4.type ;}


	if(p2.pokemon1.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p2.pokemon1.attack1.a_no;
		     damage       = p2.pokemon1.attack1.damage;
		     break;
	     case 2: attack_ka_num= p2.pokemon1.attack2.a_no;
		     damage       = p2.pokemon1.attack2.damage;
		     break;
	     case 3: attack_ka_num= p2.pokemon1.attack3.a_no;
		     damage       = p2.pokemon1.attack3.damage;
		     break;
	     }
	}

	else if(p2.pokemon2.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p2.pokemon2.attack1.a_no;
		     damage       = p2.pokemon2.attack1.damage;
		     break;
	     case 2: attack_ka_num= p2.pokemon2.attack2.a_no;
		     damage       = p2.pokemon2.attack2.damage;
		     break;
	     case 3: attack_ka_num= p2.pokemon2.attack3.a_no;
		     damage       = p2.pokemon2.attack3.damage;
		     break;
	     }
	}

	else if(p2.pokemon3.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p2.pokemon3.attack1.a_no;
		     damage       = p2.pokemon3.attack1.damage;
		     break;
	     case 2: attack_ka_num= p2.pokemon3.attack2.a_no;
		     damage       = p2.pokemon3.attack2.damage;
		     break;
	     case 3: attack_ka_num= p2.pokemon3.attack3.a_no;
		     damage       = p2.pokemon3.attack3.damage;
		     break;
	     }
	}
	else if(p2.pokemon4.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p2.pokemon4.attack1.a_no;
		     damage       = p2.pokemon4.attack1.damage;
		     break;
	     case 2: attack_ka_num= p2.pokemon4.attack2.a_no;
		     damage       = p2.pokemon4.attack2.damage;
		     break;
	     case 3: attack_ka_num= p2.pokemon4.attack3.a_no;
		     damage       = p2.pokemon4.attack3.damage;
		     break;
	     }
	}
	damager2    = damage * damage_synchroniser(attack_ka_num, opp_ka_type);
	A[counter++]= attack_ka_num;



 }  ////       END OF if loop for `double player'_condition for PLAYER 2

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////


else // ????????  FOR COMP_PLAYER  (if no_of_players==1) ????????????
 {

	window(45,5,75,48);
	gotoxy(4,38);
	textcolor(GREEN);
	cputs("Choosing  attack : ");
	randomize();
	_2_a=random(3)+1;
	printf("%d",_2_a);
	delay(1000);

		  if(p1.pokemon1.selection_no==_1_battler){ opp_ka_type=p1.pokemon1.type ;}
	     else if(p1.pokemon2.selection_no==_1_battler){ opp_ka_type=p1.pokemon2.type ;}
	     else if(p1.pokemon3.selection_no==_1_battler){ opp_ka_type=p1.pokemon3.type ;}
	     else if(p1.pokemon4.selection_no==_1_battler){ opp_ka_type=p1.pokemon4.type ;}


	if(p.pokemon1.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p.pokemon1.attack1.a_no;
		     damage       = p.pokemon1.attack1.damage;
		     break;
	     case 2: attack_ka_num= p.pokemon1.attack2.a_no;
		     damage       = p.pokemon1.attack2.damage;
		     break;
	     case 3: attack_ka_num= p.pokemon1.attack3.a_no;
		     damage       = p.pokemon1.attack3.damage;
		     break;
	     }
	}

	else if(p.pokemon2.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p.pokemon2.attack1.a_no;
		     damage       = p.pokemon2.attack1.damage;
		     break;
	     case 2: attack_ka_num= p.pokemon2.attack2.a_no;
		     damage       = p.pokemon2.attack2.damage;
		     break;
	     case 3: attack_ka_num= p.pokemon2.attack3.a_no;
		     damage       = p.pokemon2.attack3.damage;
		     break;
	     }
	}

	else if(p.pokemon3.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p.pokemon3.attack1.a_no;
		     damage       = p.pokemon3.attack1.damage;
		     break;
	     case 2: attack_ka_num= p.pokemon3.attack2.a_no;
		     damage       = p.pokemon3.attack2.damage;
		     break;
	     case 3: attack_ka_num= p.pokemon3.attack3.a_no;
		     damage       = p.pokemon3.attack3.damage;
		     break;
	     }
	}
	else if(p.pokemon4.selection_no==_2_battler)
	{
	     switch(_2_a)
	     {
	     case 1: attack_ka_num= p.pokemon4.attack1.a_no;
		     damage       = p.pokemon4.attack1.damage;
		     break;
	     case 2: attack_ka_num= p.pokemon4.attack2.a_no;
		     damage       = p.pokemon4.attack2.damage;
		     break;
	     case 3: attack_ka_num= p.pokemon4.attack3.a_no;
		     damage       = p.pokemon4.attack3.damage;
		     break;
	     }
	}
	damager2    = damage * damage_synchroniser(attack_ka_num, opp_ka_type);
	A[counter++]= attack_ka_num;



 }  ////       END OF if loop for `single player'_condition for PLAYER 2


/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%  Now , THE DAMAGE TO BE DONE HAS BEEN  COLLECTED            %%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

	  if(p1.pokemon1.selection_no==_1_battler) { p1.pokemon1.hp-=damager2;  if(p1.pokemon1.hp<0) p1.pokemon1.hp=0; _1_hp=p1.pokemon1.hp; }
     else if(p1.pokemon2.selection_no==_1_battler) { p1.pokemon2.hp-=damager2;  if(p1.pokemon2.hp<0) p1.pokemon2.hp=0; _1_hp=p1.pokemon2.hp;  }
     else if(p1.pokemon3.selection_no==_1_battler) { p1.pokemon3.hp-=damager2;  if(p1.pokemon3.hp<0) p1.pokemon3.hp=0; _1_hp=p1.pokemon3.hp;  }
     else if(p1.pokemon4.selection_no==_1_battler) { p1.pokemon4.hp-=damager2;  if(p1.pokemon4.hp<0) p1.pokemon4.hp=0; _1_hp=p1.pokemon4.hp;  }

if(no_of_players==2)
{
	  if(p2.pokemon1.selection_no==_2_battler) { p2.pokemon1.hp-=damager;  if(p2.pokemon1.hp<0) p2.pokemon1.hp=0;      _2_hp=p2.pokemon1.hp;  }
     else if(p2.pokemon2.selection_no==_2_battler) { p2.pokemon2.hp-=damager;  if(p2.pokemon2.hp<0) p2.pokemon2.hp=0; _2_hp=p2.pokemon2.hp;  }
     else if(p2.pokemon3.selection_no==_2_battler) { p2.pokemon3.hp-=damager;  if(p2.pokemon3.hp<0) p2.pokemon3.hp=0; _2_hp=p2.pokemon3.hp;  }
     else if(p2.pokemon4.selection_no==_2_battler) { p2.pokemon4.hp-=damager;  if(p2.pokemon4.hp<0) p2.pokemon4.hp=0; _2_hp=p2.pokemon4.hp;  }
}

else if(no_of_players==1)
{
	  if(p.pokemon1.selection_no==_2_battler) { p.pokemon1.hp-=damager;  if(p.pokemon1.hp<0) p.pokemon1.hp=0;      _2_hp=p.pokemon1.hp;  }
     else if(p.pokemon2.selection_no==_2_battler) { p.pokemon2.hp-=damager;  if(p.pokemon2.hp<0) p.pokemon2.hp=0; _2_hp=p.pokemon2.hp;  }
     else if(p.pokemon3.selection_no==_2_battler) { p.pokemon3.hp-=damager;  if(p.pokemon3.hp<0) p.pokemon3.hp=0; _2_hp=p.pokemon3.hp;  }
     else if(p.pokemon4.selection_no==_2_battler) { p.pokemon4.hp-=damager;  if(p.pokemon4.hp<0) p.pokemon4.hp=0; _2_hp=p.pokemon4.hp;  }
}


     // if(_1_hp==0 && _2_hp==0 ) finaliso_patrona=0;

      }



/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*****************************************************************************
**** Displaying the details of the pokemons after death of any pokemon ******
****************************************************************************/
	      window(5,5,35,48);
	      clrscr();
	      border_lin(1,1,30,43,2,LIGHTGRAY,LIGHTGRAY);
	      gotoxy(4,4);
	      textcolor(BROWN);
	      cputs(p1.name);  cputs("'s");

		if(p1.pokemon1.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon1.name); }
		else if(p1.pokemon2.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon2.name); }
		else if(p1.pokemon3.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon3.name); }
		else if(p1.pokemon4.selection_no== _1_battler) { strcpy(_1_po , p1.pokemon4.name); }


			textcolor(GREEN);
			for(int i=0,x=3,y=26; _1_po[i]!='\0'; ++i,y=y-2,x=x+2)
			{
			     gotoxy(x,y);
			     putch(_1_po[i]);
			}
			textcolor(LIGHTRED);
			gotoxy(10,28);      cputs("1. ");
			    if(p1.pokemon1.selection_no== _1_battler) {  cputs(p1.pokemon1.attack1.name); }
			    else if(p1.pokemon2.selection_no== _1_battler) {  cputs(p1.pokemon2.attack1.name); }
			    else if(p1.pokemon3.selection_no== _1_battler) {  cputs(p1.pokemon3.attack1.name); }
			    else if(p1.pokemon4.selection_no== _1_battler) {  cputs(p1.pokemon4.attack1.name); }

			gotoxy(10,30);      cputs("2. ");
			    if(p1.pokemon1.selection_no== _1_battler) {  cputs(p1.pokemon1.attack2.name); }
			    else if(p1.pokemon2.selection_no== _1_battler) {  cputs(p1.pokemon2.attack2.name); }
			    else if(p1.pokemon3.selection_no== _1_battler) {  cputs(p1.pokemon3.attack2.name); }
			    else if(p1.pokemon4.selection_no== _1_battler) {  cputs(p1.pokemon4.attack2.name); }

			gotoxy(10,32);      cputs("3. ");
			    if(p1.pokemon1.selection_no== _1_battler) {  cputs(p1.pokemon1.attack3.name); }
			    else if(p1.pokemon2.selection_no== _1_battler) {  cputs(p1.pokemon2.attack3.name); }
			    else if(p1.pokemon3.selection_no== _1_battler) {  cputs(p1.pokemon3.attack3.name); }
			    else if(p1.pokemon4.selection_no== _1_battler) {  cputs(p1.pokemon4.attack3.name); }


			textcolor(YELLOW);
			gotoxy(18,36);      cputs("HP :");
			textcolor(DARKGRAY);
			    if(p1.pokemon1.selection_no== _1_battler)      { if(p1.pokemon1.hp>=80) textcolor(GREEN); else if(p1.pokemon1.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon1.hp>=35) textcolor(YELLOW);	else if(p1.pokemon1.hp>=20) textcolor(RED); else if(p1.pokemon1.hp>0) { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon1.hp); }
			    else if(p1.pokemon2.selection_no== _1_battler) { if(p1.pokemon2.hp>=80) textcolor(GREEN); else if(p1.pokemon2.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon2.hp>=35) textcolor(YELLOW);	else if(p1.pokemon2.hp>=20) textcolor(RED); else if(p1.pokemon2.hp>0) { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon2.hp); }
			    else if(p1.pokemon3.selection_no== _1_battler) { if(p1.pokemon3.hp>=80) textcolor(GREEN); else if(p1.pokemon3.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon3.hp>=35) textcolor(YELLOW);	else if(p1.pokemon3.hp>=20) textcolor(RED); else if(p1.pokemon3.hp>0) { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon3.hp); }
			    else if(p1.pokemon4.selection_no== _1_battler) { if(p1.pokemon4.hp>=80) textcolor(GREEN); else if(p1.pokemon4.hp>=50) textcolor(LIGHTGREEN); else if(p1.pokemon4.hp>=35) textcolor(YELLOW);	else if(p1.pokemon4.hp>=20) textcolor(RED); else if(p1.pokemon4.hp>0) { textcolor(RED+BLINK);}  cprintf("%d",p1.pokemon4.hp); }

/////////////////   UNTIL  HERE  IT IS  JUST THE DISPLAYING  OF DETAILS OF FIRST PLAYER THAT IS  DONE ////////////////

if(no_of_players==2)
  {
	      window(45,5,75,48);
	      clrscr();
	      border_lin(1,1,30,43,2,LIGHTGRAY,LIGHTGRAY);
	      gotoxy(4,4);
	      textcolor(BROWN);
	      cputs(p2.name);  cputs("'s");

		if(p2.pokemon1.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon1.name); }
		else if(p2.pokemon2.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon2.name); }
		else if(p2.pokemon3.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon3.name); }
		else if(p2.pokemon4.selection_no== _2_battler) { strcpy(_2_po , p2.pokemon4.name); }


			textcolor(GREEN);
			for(int i=0,x=3,y=26; _2_po[i]!='\0'; ++i,y=y-2,x=x+2)
			{
			     gotoxy(x,y);
			     putch(_2_po[i]);
			}
			textcolor(LIGHTRED);
			gotoxy(10,28);      cputs("1. ");
			    if(p2.pokemon1.selection_no== _2_battler) {  cputs(p2.pokemon1.attack1.name); }
			    else if(p2.pokemon2.selection_no== _2_battler) {  cputs(p2.pokemon2.attack1.name); }
			    else if(p2.pokemon3.selection_no== _2_battler) {  cputs(p2.pokemon3.attack1.name); }
			    else if(p2.pokemon4.selection_no== _2_battler) {  cputs(p2.pokemon4.attack1.name); }

			gotoxy(10,30);      cputs("2. ");
			    if(p2.pokemon1.selection_no== _2_battler) {  cputs(p2.pokemon1.attack2.name); }
			    else if(p2.pokemon2.selection_no== _2_battler) {  cputs(p2.pokemon2.attack2.name); }
			    else if(p2.pokemon3.selection_no== _2_battler) {  cputs(p2.pokemon3.attack2.name); }
			    else if(p2.pokemon4.selection_no== _2_battler) {  cputs(p2.pokemon4.attack2.name); }

			gotoxy(10,32);      cputs("3. ");
			    if(p2.pokemon1.selection_no== _2_battler) {  cputs(p2.pokemon1.attack3.name); }
			    else if(p2.pokemon2.selection_no== _2_battler) {  cputs(p2.pokemon2.attack3.name); }
			    else if(p2.pokemon3.selection_no== _2_battler) {  cputs(p2.pokemon3.attack3.name); }
			    else if(p2.pokemon4.selection_no== _2_battler) {  cputs(p2.pokemon4.attack3.name); }


			textcolor(YELLOW);
			gotoxy(18,36);      cputs("HP :");
			textcolor(DARKGRAY);
			    if(p2.pokemon1.selection_no== _2_battler)      { if(p2.pokemon1.hp>=80) textcolor(GREEN); else if(p2.pokemon1.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon1.hp>=35) textcolor(YELLOW);	else if(p2.pokemon1.hp>=20) textcolor(RED); else if(p2.pokemon1.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p2.pokemon1.hp); }
			    else if(p2.pokemon2.selection_no== _2_battler) { if(p2.pokemon2.hp>=80) textcolor(GREEN); else if(p2.pokemon2.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon2.hp>=35) textcolor(YELLOW);	else if(p2.pokemon2.hp>=20) textcolor(RED); else if(p2.pokemon2.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p2.pokemon2.hp); }
			    else if(p2.pokemon3.selection_no== _2_battler) { if(p2.pokemon3.hp>=80) textcolor(GREEN); else if(p2.pokemon3.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon3.hp>=35) textcolor(YELLOW);	else if(p2.pokemon3.hp>=20) textcolor(RED); else if(p2.pokemon3.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p2.pokemon3.hp); }
			    else if(p2.pokemon4.selection_no== _2_battler) { if(p2.pokemon4.hp>=80) textcolor(GREEN); else if(p2.pokemon4.hp>=50) textcolor(LIGHTGREEN); else if(p2.pokemon4.hp>=35) textcolor(YELLOW);	else if(p2.pokemon4.hp>=20) textcolor(RED); else if(p2.pokemon4.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p2.pokemon4.hp); }

  }

/////////////////   UNTIL  HERE  IT IS  JUST THE DISPLAYING  OF DETAILS OF second PLAYER THAT IS  DONE ////////////////


else
  {
	      window(45,5,75,48);
	      clrscr();
	      border_lin(1,1,30,43,2,LIGHTGRAY,LIGHTGRAY);
	      gotoxy(4,4);
	      textcolor(BROWN);
	      cputs(p.name);  cputs("'s");

		if(p.pokemon1.selection_no== _2_battler) { strcpy(_2_po , p.pokemon1.name); }
		else if(p.pokemon2.selection_no== _2_battler) { strcpy(_2_po , p.pokemon2.name); }
		else if(p.pokemon3.selection_no== _2_battler) { strcpy(_2_po , p.pokemon3.name); }
		else if(p.pokemon4.selection_no== _2_battler) { strcpy(_2_po , p.pokemon4.name); }


			textcolor(GREEN);
			for(int i=0,x=3,y=26; _2_po[i]!='\0'; ++i,y=y-2,x=x+2)
			{
			     gotoxy(x,y);
			     putch(_2_po[i]);
			}
			textcolor(LIGHTRED);
			gotoxy(10,28);      cputs("1. ");
			    if(p.pokemon1.selection_no== _2_battler) {  cputs(p.pokemon1.attack1.name); }
			    else if(p.pokemon2.selection_no== _2_battler) {  cputs(p.pokemon2.attack1.name); }
			    else if(p.pokemon3.selection_no== _2_battler) {  cputs(p.pokemon3.attack1.name); }
			    else if(p.pokemon4.selection_no== _2_battler) {  cputs(p.pokemon4.attack1.name); }

			gotoxy(10,30);      cputs("2. ");
			    if(p.pokemon1.selection_no== _2_battler) {  cputs(p.pokemon1.attack2.name); }
			    else if(p.pokemon2.selection_no== _2_battler) {  cputs(p.pokemon2.attack2.name); }
			    else if(p.pokemon3.selection_no== _2_battler) {  cputs(p.pokemon3.attack2.name); }
			    else if(p.pokemon4.selection_no== _2_battler) {  cputs(p.pokemon4.attack2.name); }

			gotoxy(10,32);      cputs("3. ");
			    if(p.pokemon1.selection_no== _2_battler) {  cputs(p.pokemon1.attack3.name); }
			    else if(p.pokemon2.selection_no== _2_battler) {  cputs(p.pokemon2.attack3.name); }
			    else if(p.pokemon3.selection_no== _2_battler) {  cputs(p.pokemon3.attack3.name); }
			    else if(p.pokemon4.selection_no== _2_battler) {  cputs(p.pokemon4.attack3.name); }


			textcolor(YELLOW);
			gotoxy(18,36);      cputs("HP :");
			textcolor(DARKGRAY);
			    if(p.pokemon1.selection_no== _2_battler)      { if(p.pokemon1.hp>=80) textcolor(GREEN); else if(p.pokemon1.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon1.hp>=35) textcolor(YELLOW);	else if(p.pokemon1.hp>=20) textcolor(RED); else if(p.pokemon1.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p.pokemon1.hp); }
			    else if(p.pokemon2.selection_no== _2_battler) { if(p.pokemon2.hp>=80) textcolor(GREEN); else if(p.pokemon2.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon2.hp>=35) textcolor(YELLOW);	else if(p.pokemon2.hp>=20) textcolor(RED); else if(p.pokemon2.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p.pokemon2.hp); }
			    else if(p.pokemon3.selection_no== _2_battler) { if(p.pokemon3.hp>=80) textcolor(GREEN); else if(p.pokemon3.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon3.hp>=35) textcolor(YELLOW);	else if(p.pokemon3.hp>=20) textcolor(RED); else if(p.pokemon3.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p.pokemon3.hp); }
			    else if(p.pokemon4.selection_no== _2_battler) { if(p.pokemon4.hp>=80) textcolor(GREEN); else if(p.pokemon4.hp>=50) textcolor(LIGHTGREEN); else if(p.pokemon4.hp>=35) textcolor(YELLOW);	else if(p.pokemon4.hp>=20) textcolor(RED); else if(p.pokemon4.hp>0) { textcolor(RED+BLINK);}  cprintf("%d", p.pokemon4.hp); }

  }

    getch();
 }
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
///////////  END        OF     " game_boy "         /////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~                                                  ~~~~~~~~~~~~~~~~
~~~~~~~~                                                        ~~~~~~~~~~~~~
~~~~~~       THE             "    MAIN   "                          ~~~~~~~~~
~~~~~~~~                                                        ~~~~~~~~~~~~~
~~~~~~~~~~~                                                         ~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

   void main()
   {
       no_of_players = admin_entry();
       clrscr();
       for(int i=0; i<=60; ++i) A[i]=-1; // initialising all the elements of the array `A' to -1
       textcolor(YELLOW);
       clrscr();

       if(no_of_players==1)
       {
	 p1.getdata();
	 //p1.dispdata();
	 getch();

	 clrscr();
	 textcolor(12);
	 cputs("\n\n\n\n\r     LET'S  HAVE  A  LOOK  AT  THE  DETAILS  OF...... \n\n\n\r     YOUR  OPPONENT  COMPUTER_PLAYER'S  DETAILS.....!!!\n\n\n");
	 p.dispdata();
	 getch();
       }
       else
       {
	 p1.getdata();
	 //p1.dispdata();
	 getch();

	 clrscr();
	 p2.getdata();
	 //p2.dispdata();
	 getch();
       }

/////////////////////////////////////////////////////////////////////////////
       game_starter();    getch();         /////    to play the  GAME
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
       window(1,1,80,50); clrscr();
       int counter_1_=0, counter_2_=0;
       int winner=0;

       while(1)
       {
	 game_boy();
	 if(_1_hp==0){ _p1[counter_1_++]=0;    _1_battler=(_1_battler==1)? 2 : 1;  }
	 if(_2_hp==0){ _p2[counter_2_++]=0;    _2_battler=(_2_battler==1)? 2 : 1;  }

       if(_p1[0]==0 && _p1[1]==0 && _p2[0]==0 && _p2[1]==0)
       {
       clrscr(); cout<<" DRAW ";
	break;
       }
       else if(_p1[0]==0 && _p1[1]==0 )
       {
       clrscr(); cout<<" PLAYER 1 LOSES "; winner=2;
	break;
       }
       else if(_p2[0]==0 && _p2[1]==0 )
       { clrscr(); cout<<" PLAYER 2 LOSES "; winner=1;
	break;

       }
       }
       getch();
////////////////////////// CONCLUSION /////////////////////////////////////

    int gdrive=VGA,gmode=VGAHI;
    initgraph(&gdrive,&gmode,"");

	line_dan();
	settextstyle(1,0,6);
	int h=textheight("K");
	setcolor(CYAN);
	outtextxy(10 ,10+2*h ," Was'nt that quite a");

	delay(1000);
	setcolor(LIGHTGREEN);
	outtextxy(10,10+5*h,"       BATTLE ..");

	delay(1800);
	cleardevice();
char ch;
	settextstyle(1,0,5);
	h=textheight("K");
	setcolor(CYAN);
	outtextxy(40, 10+2*h, "I would like to have");
	outtextxy(60, 10+4*h, "a   REPLAY ... ");
	setcolor(LIGHTGREEN);
	outtextxy(80, 10+7*h, "What about you...? (y/n)");
	ch=getche();
	if(ch=='y')attack_picturiser();

	admin_departure(winner);
	closegraph();

   }

