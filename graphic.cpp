#include <iostream>
#include<dos.h>
#include <graphics.h>
#include <unistd.h>
//int main(int argc , char const *argv[])
int main(){
    
//int gd = DETECT, gm ;
  //  initgraph(&gd,&gm,(char*)"");

  initwindow(800,800);
    setcolor(CYAN);
outtextxy(100,20,"This Is the Given Matchstick Array");
     setcolor(YELLOW);
    line(10,60,50,60);
    line(100,60,150,60);
    line(200,60,300,60);
    line(350,60,450,60);
    line(500,60,600,60);
    
    line(10,65,50,65);
    outtextxy(30,70,"1");

    line(100,65,150,65);
        outtextxy(125,70,"1");

    line(200,65,300,65);
        outtextxy(250,70,"2");

    line(350,65,450,65);
        outtextxy(400,70,"2");

    line(500,65,600,65);
        outtextxy(550,70,"2");

        //for x axis
        setcolor(CYAN);
        outtextxy(100,100,"From the above Array of Match Sticks");
        outtextxy(100,130,"This square can be formed");

        line(0,170,800,170); 
        line(0,470,800,470); 

        setcolor(YELLOW);
         outtextxy(250,185,"2");
         
        line(200,205,300,205);
        line(200,200,300,200);
    //for left y axis  split 
        outtextxy(185,230,"1");
        setcolor(YELLOW);
        line(200,205,200,255);//first half
        line(195,205,195,255);//first half

        outtextxy(185,285,"1");
        setcolor(YELLOW);
        line(200,260,200,310);//second half
        line(195,260,195,310);//second half
// for down x axis
        setcolor(YELLOW);
        line(200,315,300,315);
        line(200,320,300,320);
        outtextxy(250,325,"2");

 // for right y axis
        setcolor(YELLOW);
        line(300,205,300,310);
        line(305,205,305,310);
         outtextxy(310,258,"2");

     setcolor(CYAN);
    outtextxy(150,350,"[1,1,2,2,2]");
    outtextxy(150,370,"Square can be Formed");


   // line(50,70,100,70);
   // line(150,70,200,70);
   // line(250,70,350,70);
   // line(400,70,500,70);
  // line(550,70,650,70);

 //   line(100,65,150,65);
 //   line(200,65,250,65);
 //   line(300,65,400,65);
 //   line(450,65,550,65);
 //    line(600,65,700,65);
//

 //   line(100,70,150,70);
  //  line(200,70,250,70);
  //  line(300,70,400,70);
  //  line(450,70,550,70);
  //   line(600,70,700,70);


    

    getch();
    //closegraph();
    return 0;
}