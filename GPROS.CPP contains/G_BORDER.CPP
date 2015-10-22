/****************************************************************************
*****************                                     ***********************
********      Its  a  bordering  program                   ******************
*****************                                     ***********************
****************************************************************************/

void g_border(int x1=0,int y1=0,int x2=639,int y2=479,int n=4,int gap=5,int s=0,int width=3)
 {
  randomize();
  setcolor(random(14)+1);
  setlinestyle(s,3,width);

   for(int i=0;i<n*gap; i=i+gap)
   {
   //setcolor(i);
   rectangle(x1+i ,y1+i ,x2-i ,y2-i);
   delay(50);
   }
  }
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
////// 1.   First two arguments - coordinates of top_left corner   //////////
////// 2.   Next  two arguments - coordinates of bottom_right coner   ///////
////// 3.   Fifth argument - no. of lines in the border    //////////////////
////// 4.   Sixth argument - gap b/w every line in the border  //////////////
////// 5. Seventh argument - style of the lines in the border  //////////////
////// 6.   Eigth argument - width of lines to be printed in border  ////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
