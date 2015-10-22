//////////////////////////////////////////////////////////////////////////////
/////////////////////                                      ///////////////////
/////////   The function --"attack_picturiser"  to picturise the battle ///////
/////////////////////                                      ///////////////////
//////////////////////////////////////////////////////////////////////////////

	void attack_picturiser()
    {
	  int actual_attack_no;
	  int actual_pokemon_no_[2];
	  int actual_pokemon_no;

	  goldeen_    g;
	  pikachu_    p;
	  torchic_    t;
	  weepinbell_ w;
	  int player_ka_num;
	  int temp_player;
	  char ch;

	  delay(500);
	  cleardevice();
	  delay(1500);

	  setcolor(DARKGRAY);
	  settextstyle(TRIPLEX_FONT,0,2);
	  outtextxy(160,420,"Press <0> to skip the replay");

	  for(int i=0; A[i]!=-1 && i<=60 ; ++i)
	  {
	   if(kbhit())
	   {
	     ch=getche();
	     Y:
	     if(ch=='0') break;
	   }
	   player_ka_num    =  (i%2==0)? 1 : 2;
	   actual_attack_no =  A[i]%10;
	   if(i%2==0){ actual_pokemon_no_[0]=  (A[i]   - actual_attack_no)/10;
		       actual_pokemon_no_[1]=  (A[i+1] - A[i+1]%10 )/10;   }
	   actual_pokemon_no=  (A[i]   - actual_attack_no)/10;

		for(int j=0; j<=1; ++j)
		{
	   if(kbhit())
	   {
	     ch=getche();
	     if(ch=='0') goto Y;
	   }

		       if(j==0) temp_player=1;
		  else if(j==1) temp_player=2;

			if(g.po_no==actual_pokemon_no_[j]){ g.setplayer_no(temp_player); g.po_picture();  }
		   else if(p.po_no==actual_pokemon_no_[j]){ p.setplayer_no(temp_player); p.po_picture();  }
		   else if(t.po_no==actual_pokemon_no_[j]){ t.setplayer_no(temp_player); t.po_picture();  }
		   else if(w.po_no==actual_pokemon_no_[j]){ w.setplayer_no(temp_player); w.po_picture();  }
		}



		if(g.po_no==actual_pokemon_no){ g.setplayer_no(player_ka_num); g.po_picture(); delay(500); }
	   else if(p.po_no==actual_pokemon_no){ p.setplayer_no(player_ka_num); p.po_picture(); delay(500); }
	   else if(t.po_no==actual_pokemon_no){ t.setplayer_no(player_ka_num); t.po_picture(); delay(500); }
	   else if(w.po_no==actual_pokemon_no){ w.setplayer_no(player_ka_num); w.po_picture(); delay(500); }

	     setbkcolor(BLACK);

	    if(g.po_no==actual_pokemon_no)
	     {
		 switch(actual_attack_no)
		 {
		  case 1: g.attack1.a(player_ka_num);  break;
		  case 2: g.attack2.a(player_ka_num);  break;
		  case 3: g.attack3.a(player_ka_num);  break;
		 }
	     }

	     else if(p.po_no==actual_pokemon_no)
	     {
		 switch(actual_attack_no)
		 {
		  case 1: p.attack1.a(player_ka_num);  break;
		  case 2: p.attack2.a(player_ka_num);  break;
		  case 3: p.attack3.a(player_ka_num);  break;
		 }
	     }


	     else if(t.po_no==actual_pokemon_no)
	     {
		 switch(actual_attack_no)
		 {
		  case 1: t.attack1.a(player_ka_num);  break;
		  case 2: t.attack2.a(player_ka_num);  break;
		  case 3: t.attack3.a(player_ka_num);  break;
		 }
	     }

	     else if(w.po_no==actual_pokemon_no)
	     {
		 switch(actual_attack_no)
		 {
		  case 1: w.attack1.a(player_ka_num);  break;
		  case 2: w.attack2.a(player_ka_num);  break;
		  case 3: w.attack3.a(player_ka_num);  break;
		 }
	     }

		   if(player_ka_num==1) setviewport(440,80,630,380,0);
		   else                setviewport(10 ,80,200,380,0);

		   delay(800);

	 }

   }
