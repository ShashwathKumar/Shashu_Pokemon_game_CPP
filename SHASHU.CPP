#include<HEADERS_.cpp>
/* It contains all header_files required              */

#include<T_PROS.cpp>
/* It contains the definitions of all text functions of mine (shashu) */


  float damage_controller=1;  // this variable is used to control the pace of the game
const int   ELECTRIC=0, FIRE=1, GRASS=2, WATER =3;
int total=0;

#include<G_PROS.cpp>
/* It contains the definitions of all graphics functions of mine (shashu) */

  int no_of_players;

#include<ADMIN.cpp>
// It contains the functions and classes required for the administration
// of this program

  int A[61];
  //pokemons_1_[2]={-1,-1};
  //pokemons_2_[2]={-1,-1};

#include<ATTACKO.cpp>
// It contains a function that picturises the battle that happens

#include<ADMIN_DE.cpp>
// It contains the functions required to end the program properly



/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@                                              @@@@@@@@@@@@@@@@
@@@@@@@@@@     DAMAGE-HANDLER function -- " damage_synchroniser"  @@@@@@@@@@@
@@@@@@@@@@@@@@@                                              @@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/


  float damage_synchroniser(int attack_no, int opp_type) // the function that gives the effect of a particular attack on a particular type
  {
      float damage_multiple;

/////////////////////////////////////////////////////////////////////////////
////////////            For  Electric  attacks          /////////////////////
/////////////////////////////////////////////////////////////////////////////

      if( attack_no>=21 && attack_no<=23 ) // for electric attacks
      {
	  switch(attack_no%10)
	  {
		case 1: switch(opp_type)     //for lightning tail
			{
				case 0:
				case 1:
				case 2: damage_multiple = 1;  break;
				case 3: damage_multiple = 2;  break;
			 }

		case 2: switch(opp_type)     //for thunder
			{

				case 0: damage_multiple =  0.5; break;
				case 1: damage_multiple =  1  ; break;
				case 2: damage_multiple =  0.5; break;
				case 3: damage_multiple =  2  ; break;
			 }

		case 3: switch(opp_type)     //for thunder bolt
			{
				case 0: damage_multiple =  0.5;  break;
				case 1: damage_multiple =  1  ;  break;
				case 2: damage_multiple =  1  ;  break;
				case 3: damage_multiple =  2  ;  break;
			 }
	  }

      }

/////////////////////////////////////////////////////////////////////////////
///////////////   For  fire  attacks  ///////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

      else if( attack_no>=31 && attack_no<=33 ) // for fire attacks
      {
	  switch(attack_no%10)
	  {
		case 1: switch(opp_type)     //for dragon rage
			{
				case 0: damage_multiple =  0.5;  break;
				case 1: damage_multiple =  1  ;  break;
				case 2: damage_multiple =  1  ;  break;
				case 3: damage_multiple =  1  ;  break;
			 }

		case 2: switch(opp_type)     //for fire blast
			{
				case 0: damage_multiple =  2; break;
				case 1: damage_multiple =  1; break;
				case 2: damage_multiple =  2; break;
				case 3: damage_multiple =  1; break;
			 }

		case 3: switch(opp_type)     //for fire spin
			{
				case 0: damage_multiple =  1  ; break;
				case 1: damage_multiple =  0.5; break;
				case 2: damage_multiple =  2  ; break;
				case 3: damage_multiple =  1  ; break;
			 }
	  }

      }

/////////////////////////////////////////////////////////////////////////////
///////////////////    For  grass  attacks               ////////////////////
/////////////////////////////////////////////////////////////////////////////

       else if( attack_no>=41 && attack_no<=43 ) // for grass attacks
      {
	  switch(attack_no%10)
	  {
		case 1: switch(opp_type)     //for leach seed
			{
				case 0: damage_multiple =  1  ;  break;
				case 1: damage_multiple =  0.5;  break;
				case 2: damage_multiple =  1  ;  break;
				case 3: damage_multiple =  2  ;  break;
			 }

		case 2: switch(opp_type)     //for razor  leaf
			{
				case 0: damage_multiple =  1;    break;
				case 1: damage_multiple =  1;    break;
				case 2: damage_multiple =  1;    break;
				case 3: damage_multiple =  3;    break;
			 }

		case 3: switch(opp_type)     //for wine whip
			{
				case 0: damage_multiple =  1  ;  break;
				case 1: damage_multiple =  1  ;  break;
				case 2: damage_multiple =  1  ;  break;
				case 3: damage_multiple =  2  ;  break;
			 }
	  }

      }

/////////////////////////////////////////////////////////////////////////////
//////////////  For   water  attacks     ////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

       else if( attack_no>=11 && attack_no<=13 ) // for water attacks
      {
	  switch(attack_no%10)
	  {
		case 2: switch(opp_type)     //for tail whip
			{
				case 0: damage_multiple =  1  ;  break;
				case 1: damage_multiple =  2  ;  break;
				case 2: damage_multiple =  1  ;  break;
				case 3: damage_multiple =  1  ;  break;
			 }

		case 1: switch(opp_type)     //for bubble
			{
				case 0: damage_multiple =  1;    break;
				case 1: damage_multiple =  2;    break;
				case 2: damage_multiple =  2;    break;
				case 3: damage_multiple =  1;    break;
			 }

		case 3: switch(opp_type)     //for water gun
			{
				case 0: damage_multiple =  1  ;  break;
				case 1: damage_multiple =  2  ;  break;
				case 2: damage_multiple =  0.5;  break;
				case 3: damage_multiple =  0.5;  break;
			 }
	  }

      }

      return damage_multiple;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@                                         @@@@@@@@@@@@@@@@@@
@@@@@@@@@@    The function "damage_synchroniser"  ENDS           @@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@                                         @@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
