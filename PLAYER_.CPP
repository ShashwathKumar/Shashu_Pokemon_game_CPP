/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@                                  @@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@   It contains the classes  -- `player' and ` comp_player' @@@@@@@@@@
@@@@@@@@@@@@@@@@@@@                                  @@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

 class player{

      public:
      char name[40], password[40] ,ch;
      int player_no;
      int po1,po2,temp_po1,temp_po2;

      goldeen_    pokemon1;
      pikachu_    pokemon2;
      torchic_    pokemon3;
      weepinbell_ pokemon4;


	player(int player_num)
	{
	 player_no = player_num;

	 pokemon1.setplayer_no(player_num);
	 pokemon2.setplayer_no(player_num);
	 pokemon3.setplayer_no(player_num);
	 pokemon4.setplayer_no(player_num);
	}


	void getdata();
	void dispdata();
      } p1(1), p2(2) ;


/////////////////////////////////////////////////////////////////////////////
///////////          Function --- getdata()           ///////////////////////
/////////////////////////////////////////////////////////////////////////////


      void player::getdata()
      {
       randomize();
       int UNKNOWN[8], asc_ch ,ctr=0 ;
       char pass_check[40];

       clrscr();
       if(no_of_players==1) textcolor(BLUE);
       else if(player_no==1) textcolor(MAGENTA);
       else if(player_no==2) textcolor(GREEN);
	 cputs("\n\n\n\n\r     COME ON...   PLAYER ");
	 cprintf("%d",player_no);
	 cputs("  ENTER  YOUR  DETAILS\n\n\n");

       textcolor(GREEN);

/////////////////////////////////////////////////////////////////////////////
///////       Randomizing values of elements of UNKNOWN    //////////////////
/////////////////////////////////////////////////////////////////////////////

       for(int i=0; i<8; ++i)   UNKNOWN[i] = random(4) +1; // the randomizer



       for(i=0; i<8; ++i)  if(UNKNOWN[i]==1) ctr=1;
       if(ctr==0) UNKNOWN[6]=1;
       ctr=0;     //  bringing the counter variable --- `ctr' to its original value

       for(i=0; i<8; ++i)  if(UNKNOWN[i]==2) ctr=2;
       if(ctr==0) UNKNOWN[5]=2;
       ctr=0;     //  bringing the counter variable --- `ctr' to its original value

       for(i=0; i<8; ++i)  if(UNKNOWN[i]==3) ctr=3;
       if(ctr==0) UNKNOWN[4]=3;
       ctr=0;     //  bringing the counter variable --- `ctr' to its original value

       for(i=0; i<8; ++i)  if(UNKNOWN[i]==4) ctr=4;
       if(ctr==0) UNKNOWN[3]=1;


//////////////////////////////////////////////////////////////////////////////
////////  Randomizing UNKNOWN --- elements close......     ///////////////////
//////////////////////////////////////////////////////////////////////////////
       START:

       cout<<"\n\n     Enter  your  name :";
       gets(name);

	if(!strcmp(name,""))
	 {
	  textcolor(RED);
	  cputs("\n\n    Sorry , but some character must be there in your name ");
	  textcolor(BLUE);
	  goto START;
	 }

/////////////////////////////////////////////////////////////////////////////
///////////////            PASSWORD         zone  .............   ///////////
/////////////////////////////////////////////////////////////////////////////
       password_checker:

       cout<<"\n\n     Enter  the  password :";

	    for(i=0; ; ++i)
	    {
	     ch=getche();
	     asc_ch=ch;
	     if(asc_ch==13) { password[i]='\0'; break;}
	     password[i]=ch;

	     putch(8);
	     putch('*');
	    }

       cout<<"\n\n     Please enter  the  password again :";

	    for(i=0; ; ++i)
	    {
	     ch=getche();
	     asc_ch=ch;
	     if(asc_ch==13) { pass_check[i]='\0'; break;}
	     pass_check[i]=ch;

	     putch(8);
	     putch('*');
	    }

		if(strcmp(password,pass_check)) // checking whether both the passwords entered are same or not
		{
		 textcolor(RED);
		 cputs("\n\n     The passwords do not match ");

		 textcolor(BLUE);
		 goto password_checker;
		 }
		else if(!strcmp(password,""))
		 {
		  textcolor(RED);
		  cputs("\n\n     Sorry , but some character must be there in your password ");

		  textcolor(BLUE);
		  goto password_checker;
		 }
		 else if(!strcmp(password,name))
		 {
		  textcolor(LIGHTGREEN);
		  cputs("\n\n     Password Accepted !!! ");
		 }
		else if(strcmp(password,name))
		 {
		  textcolor(RED);
		  cputs("\n\n     Sorry , Password Denied ");

		  textcolor(BLUE);
		  goto password_checker;
		 }


	   textcolor(BLUE);
/////////////////////////////////////////////////////////////////////////////
/////////      PASSWORD   zone close..                   ////////////////////
/////////////////////////////////////////////////////////////////////////////

      cout<<"\n\n     Choose  your  two  pokemons \n\n     ( you will not be knowning what you are choosing )";

	 for(i=0; i<8; ++i)
	 {
	  cout<<"\n\t"<<i+1<<". unknown";
	 }
	  cout<<"\t";
	  zoo:
	  cin>>temp_po1>>temp_po2;

	  if( (temp_po1==temp_po2)|| (temp_po1>8)|| (temp_po2>8)|| (temp_po1<1)|| (temp_po2<1) )
	   {
	      textcolor(RED);
	      cout<<"\n\n     WRONG CHOICE !!!!!! \n\n      Choose your pokemons again ";

	      textcolor(BLUE);
	      goto zoo;
	    }

	   for( i=0; i<8; ++i)
	   {
	      if(temp_po1==i+1)    po1=UNKNOWN[i] ;
	 else if(temp_po2==i+1)    po2=UNKNOWN[i] ;
	   }


	   cout<<"\n\n     The pokemons you have chosen are :    ";

	    switch(po1)
	    {
	     case 1: cout<<"Goldeen "   ; pokemon1.ALIVE=0;  pokemon1.selection_no=1; break;
	     case 2: cout<<"Pikachu "   ; pokemon2.ALIVE=0;  pokemon2.selection_no=1; break;
	     case 3: cout<<"Torchic "   ; pokemon3.ALIVE=0;  pokemon3.selection_no=1; break;
	     case 4: cout<<"Weepinbell "; pokemon4.ALIVE=0;  pokemon4.selection_no=1; break;

	     default: cout<<"Pikachu "   ; pokemon2.ALIVE=0;  pokemon2.selection_no=1; break; // this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }

		 cout<<" and ";


	    if(po1==po2) --po2;   //making sure that both the pokemons chosen are not same
	    if(po2<1) po2=po2+2;  // if the value of po1=0 (ie, when po2=1) , po1 will be made 2;



	    switch(po2)
	    {
	     case 1: cout<<"Goldeen "   ; pokemon1.ALIVE=0;  pokemon1.selection_no=2; break;
	     case 2: cout<<"Pikachu "   ; pokemon2.ALIVE=0;  pokemon2.selection_no=2; break;
	     case 3: cout<<"Torchic "   ; pokemon3.ALIVE=0;  pokemon3.selection_no=2; break;
	     case 4: cout<<"Weepinbell "; pokemon4.ALIVE=0;  pokemon4.selection_no=2; break;

	     default: cout<<"Pikachu "   ; pokemon2.ALIVE=0;  pokemon2.selection_no=2; break; // this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }



	}

//////////////////////////////////////////////////////////////////////////////
///////////    Function ---  dispdata()           ///////////////////////////
/////////////////////////////////////////////////////////////////////////////



      void player::dispdata()
      {
       //textcolor(GREEN);

       cout<<"\n\n 	   name           :";  cout<<name;

       cout<<"\n\n\n     The pokemons chosen are :   ";

	 switch(po1)
	    {
	     case 1: cout<<"Goldeen "   ; break;
	     case 2: cout<<"Pikachu "   ; break;
	     case 3: cout<<"Torchic "   ; break;
	     case 4: cout<<"Weepinbell "; break;

	     default: cout<<"Pikachu "  ; break; // this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }

		 cout<<" and ";

	    switch(po2)
	    {
	     case 1: cout<<"Goldeen "   ; break;
	     case 2: cout<<"Pikachu "   ; break;
	     case 3: cout<<"Torchic "   ; break;
	     case 4: cout<<"Weepinbell "; break;

	     default: cout<<"Pikachu "  ; break;// this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }


      }


/*
                                  
       Definition of ----  COMPUTER PLAYER         
                                  
*/



       class comp_player{

      public:
      char name[40] ;
      int player_no;


      int po1,po2;

      goldeen_    pokemon1;
      pikachu_    pokemon2;
      torchic_    pokemon3;
      weepinbell_ pokemon4;

	comp_player();
	void dispdata();

      } p;

/////////////////////////////////////////////////////////////////////////////
//////////////   comp_player's   constructor  //////////////////////////////
////////////////////////////////////////////////////////////////////////////


	comp_player::comp_player()
	{
	 player_no = 2;

	 pokemon1.setplayer_no(2);
	 pokemon2.setplayer_no(2);
	 pokemon3.setplayer_no(2);
	 pokemon4.setplayer_no(2);

	 randomize();
	 po1=random(4) +1;
	 po2=random(4) +1;


	 strcpy(name,"Computer");


	     switch(po1)
	    {
	     case 1: cout<<"Goldeen "   ; pokemon1.ALIVE=0;  pokemon1.selection_no=1; break;
	     case 2: cout<<"Pikachu "   ; pokemon2.ALIVE=0;  pokemon2.selection_no=1; break;
	     case 3: cout<<"Torchic "   ; pokemon3.ALIVE=0;  pokemon3.selection_no=1; break;
	     case 4: cout<<"Weepinbell "; pokemon4.ALIVE=0;  pokemon4.selection_no=1; break;

	     default: cout<<"Pikachu "  ; pokemon2.ALIVE=0;  pokemon2.selection_no=1; break; // this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }

		 cout<<" and ";


	    if(po1==po2) --po2;   //making sure that both the pokemons chosen are not same
	    if(po2<1) po2=po2+2;  // if the value of po1=0 (ie, when po2=1) , po1 will be made 2;



	    switch(po2)
	    {
	     case 1: cout<<"Goldeen "   ; pokemon1.ALIVE=0;  pokemon1.selection_no=2; break;
	     case 2: cout<<"Pikachu "   ; pokemon2.ALIVE=0;  pokemon2.selection_no=2; break;
	     case 3: cout<<"Torchic "   ; pokemon3.ALIVE=0;  pokemon3.selection_no=2; break;
	     case 4: cout<<"Weepinbell "; pokemon4.ALIVE=0;  pokemon4.selection_no=2; break;

	     default: cout<<"Pikachu "  ; pokemon2.ALIVE=0;  pokemon2.selection_no=2; break; // this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }


	}





//////////////////////////////////////////////////////////////////////////////
///////////    Function ---  dispdata()           ///////////////////////////
/////////////////////////////////////////////////////////////////////////////



      void comp_player::dispdata()
      {
       //textcolor(GREEN);

       cout<<"\n\n             name           :";  cout<<name;


       cout<<"\n\n\n     The pokemons  chosen are :   ";

	    switch(po1)
	    {
	     case 1: cout<<"Goldeen "   ; break;
	     case 2: cout<<"Pikachu "   ; break;
	     case 3: cout<<"Torchic "   ; break;
	     case 4: cout<<"Weepinbell "; break;

	     default: cout<<"Pikachu "  ; break; // this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }

		 cout<<" and ";



	    switch(po2)
	    {
	     case 1: cout<<"Goldeen "   ; break;
	     case 2: cout<<"Pikachu "   ; break;
	     case 3: cout<<"Torchic "   ; break;
	     case 4: cout<<"Weepinbell "; break;

	     default: cout<<"Pikachu "  ; break; // this to handle the error ( because sometimes it happens that no pokemon would be selected !!!
	    }


      }
