#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;

int main()
{
    int Choice;
    cout << "---------------PROGRAM LIST---------------\n\n";
    cout << " 1. NATIONAL FLAG\n 2. SMILEY FACES EMOJI\n 3. DRAWING A HOUSE\n 4. ANALOG CLOCK\n 5. CRUISE SHIP\n 6. PIECHART PROGRAM\n 7. VILLAGE SCENARIO";
    cout << "\n=============================\n#############################\n+++++++++++++++++++++++++++++\n";
    while(1)
    {
        cout << "\nEnter your Choice:";
        cin  >> Choice;
        cout << "The Current program is:\n";

        int i,gd=DETECT, gm;// Path of the program
        initgraph(&gd,&gm,"");
        initwindow(800,700,"Program Window");
        line(5,5,5,35);//E
        line(5,5,15,5);
        line(5,35,15,35);
        line(5,20,15,20);

        line(20,5,20,35);//M
        line(20,5,25,20);
        line(30,5,25,20);
        line(30,5,30,35);

        line(40,5,40,35);//T
        line(35,5,45,5);

        line(55,5,55,35);//I
        line(50,5,60,5);
        line(50,35,60,35);

        line(70,5,65,35);//A
        line(70,5,75,35);
        line(67.5,20,72.5,20);

        line(80,5,90,5);//Z
        line(90,5,80,35);
        line(80,35,90,35);

        line(105,5,100,35);//A
        line(105,5,110,35);
        line(102.5,20,107.5,20);

        line(115,5,115,35);//H
        line(125,5,125,35);
        line(115,20,125,20);

        line(130,5,130,35);//M
        line(130,5,135,20);
        line(135,20,140,5);
        line(140,5,140,35);

        line(145,5,145,35);//E
        line(145,5,155,5);
        line(145,35,155,35);
        line(145,20,155,20);

        line(160,5,160,35);//D
        line(160,5,165,5);
        line(165,5,170,20);
        line(170,20,165,35);
        line(165,35,160,35);

        line(180,5,190,5);//T
        line(185,5,185,35);

        line(195,5,195,20);//U
        line(195,20,200,35);
        line(200,35,205,20);
        line(205,5,205,20);

        line(210,5,210,35);//H
        line(220,5,220,35);
        line(210,20,220,20);

        line(225,5,235,5);//I
        line(230,5,230,35);
        line(225,35,235,35);

        line(240,5,240,35);//N
        line(240,5,250,35);
        line(250,35,250,5);
        //ID part
        line(5,45,15,45);//I
        line(5,75,15,75);
        line(10,45,10,75);

        line(20,45,20,75);//D
        line(20,45,25,45);
        line(25,45,30,60);
        line(30,60,25,75);
        line(25,75,20,75);

        circle(40,50,3);
        circle(40,70,3);

        line(50,45,65,45);//C
        line(50,45,50,75);
        line(50,75,60,75);

        line(70,45,80,45);//S
        line(70,45,70,60);
        line(70,60,80,60);
        line(80,60,80,75);
        line(80,75,70,75);

        line(85,45,85,75);//E
        line(85,45,95,45);
        line(85,60,95,60);
        line(85,75,95,75);

        line(100,45,110,45);//2
        line(110,45,110,60);
        line(110,60,100,60);
        line(100,60,100,75);
        line(100,75,110,75);

        line(115,45,125,45);//0
        line(125,45,125,75);
        line(125,75,115,75);
        line(115,45,115,75);

        line(130,45,140,45);//0
        line(140,45,140,75);
        line(140,75,130,75);
        line(130,75,130,45);

        line(150,45,150,75);//1
        line(145,75,155,75);
        line(145,50,150,45);

        line(160,45,170,45);//0
        line(170,45,170,75);
        line(170,75,160,75);
        line(160,75,160,45);

        line(180,45,180,75);//1
        line(175,75,185,75);
        line(175,50,180,45);

        line(190,45,200,45);//9
        line(200,45,200,75);
        line(200,75,190,75);
        line(190,45,190,60);
        line(190,60,200,60);

        line(210,45,210,75);//1
        line(205,75,215,75);
        line(205,50,210,45);

        line(220,45,230,45);//0
        line(230,45,230,75);
        line(230,75,220,75);
        line(220,45,220,75);

        line(235,45,245,45);//7
        line(245,45,235,75);

        switch (Choice)
        {
        case 1:
        {
            setcolor(10);
            outtextxy(50,450,"NATIONAL FLAG");
            setcolor(RED);
            rectangle(40,150,45,400);
            setfillstyle(1,WHITE);
            floodfill(43,180,RED);

            setcolor(RED);
            circle(42.5,143,7);
            setfillstyle(1,WHITE);
            floodfill(43,142,RED);

            setcolor(RED);
            rectangle(30.5,400,54.5,410);
            setfillstyle(1,WHITE);
            floodfill(42,402,RED);

            setcolor(RED);
            rectangle(25,410,60,420);
            setfillstyle(1,WHITE);
            floodfill(50,412,RED);

            setcolor(WHITE);
            rectangle(45,150,170,230);
            setfillstyle(1,GREEN);
            floodfill(120,160,WHITE);

            setcolor(BLACK);
            circle(107,190,25);
            setfillstyle(1,RED);
            floodfill(108,192,BLACK);
        }
        break;
        case 2:
            setcolor(14);
            outtextxy(230,420,"SMILEY FACES EMOJI");
            setcolor(RED);
            circle(300,300,100);
            setfillstyle(1,YELLOW);
            floodfill(310,310,RED);

            setcolor(BLACK);
            circle(270,270,20);
            setfillstyle(1,WHITE);
            floodfill(260,260,BLACK);

            setcolor(BLACK);
            circle(330,270,20);
            setfillstyle(1,WHITE);
            floodfill(340,260,BLACK);

            setcolor(RED);
            circle(270,270,10);
            setfillstyle(1,BLACK);
            floodfill(271,275,RED);

            setcolor(BLACK);
            circle(330,270,10);
            setfillstyle(1,BLACK);
            floodfill(335,272,BLACK);

            setcolor(BLACK);
            line(300,300,280,320);
            line(300,300,320,320);
            line(280,320,320,320);
            setfillstyle(1,BLACK);
            floodfill(300,310,BLACK);

            setcolor(BLACK);
            ellipse(300,350,0,360,30,10);
            setfillstyle(1,BLACK);
            floodfill(300,355,BLACK);

            setcolor(WHITE);
            ellipse(300,348,0,360,15,5);
            setfillstyle(1,WHITE);
            floodfill(302,350,WHITE);
            break;
        case 3:
            setcolor(4);
            outtextxy(260,435,"DRAWING A HOUSE");
            //Shed(house1)
            setcolor(RED);
            line(195,205,405,205);
            line(195,205,300,150);
            line(300,150,405,205);
            setfillstyle(1,RED);
            floodfill(300,200,RED);

            //Shed(house2)
            setcolor(RED);
            line(320,170,500,170);
            line(500,170,510,200);
            line(510,200,320,200);
            line(320,200,320,180);
            setfillstyle(1,RED);
            floodfill(410,195,RED);

            //Body
            line(200,400,400,400);
            line(200,400,200,205);
            line(400,400,400,205);

            //Gates
            setcolor(RED);
            rectangle(270,390,330,400);
            setfillstyle(1,WHITE);
            floodfill(275,395,RED);

            setcolor(RED);
            rectangle(280,320,320,390);
            setfillstyle(1,WHITE);
            floodfill(285,385,RED);

            //window1

            setcolor(RED);
            rectangle(230,250,270,300);
            setfillstyle(1,WHITE);
            floodfill(250,270,RED);
            line(230,275,270,275);
            setfillstyle(1,WHITE);
            floodfill(250,270,RED);


            setcolor(RED);
            rectangle(330,250,370,300);
            setfillstyle(1,WHITE);
            floodfill(350,270,RED);
            line(330,275,370,275);
            setfillstyle(1,WHITE);
            floodfill(350,270,RED);

            //Body(house2)
            line(505,200,505,380);
            line(505,380,400,400);
            //bottom
            line(200,400,190,410);
            line(190,410,400,410);
            line(400,410,505,390);
            line(505,390,505,380);

            //window2
            setcolor(RED);
            rectangle(450,245,480,280);
            setfillstyle(1,WHITE);
            floodfill(460,270,RED);
            line(450,262.5,480,262.5);


            //tree
            setcolor(RED);
            rectangle(110,300,140,400);
            setfillstyle(1,RED);
            floodfill(125,350,RED);

            setcolor(GREEN);
            line(100,300,150,300);
            line(125,250,150,300);
            line(125,250,100,300);
            setfillstyle(1,GREEN);
            floodfill(125,295,GREEN);

            setcolor(GREEN);
            line(100,280,150,280);
            line(100,280,125,230);
            line(125,230,150,280);
            setfillstyle(1,GREEN);
            floodfill(120,250,GREEN);

            setcolor(GREEN);
            line(100,250,150,250);
            line(100,250,125,200);
            line(125,200,150,250);
            setfillstyle(1,GREEN);
            floodfill(120,230,GREEN);
            break;
        case 4:
            setcolor(9);
            outtextxy(150,400,"ANALOG CLOCK");
            //circle1
            setcolor(WHITE);
            circle(200,250,120);
            setfillstyle(1,RED);
            floodfill(210,260,WHITE);

            //circle2
            setcolor(WHITE);
            circle(200,250,110);
            setfillstyle(1,BLUE);
            floodfill(210,260,WHITE);

            //clock rotation
            line(200,150,200,170);
            line(200,350,200,330);
            line(100,250,120,250);
            line(300,250,280,250);


            setcolor(WHITE);
            circle(200,250,5);
            setfillstyle(1,WHITE);
            floodfill(202,252,WHITE);
            line(200,250,230,200);
            line(200,250,260,200);
            line(200,250,210,320);
            break;
        case 5:

            // window color
            setcolor(BLUE);
            line(0,100,800,100);
            line(0,0,0,700);
            line(0,700,800,700);
            line(800,0,800,700);
            setfillstyle(1,WHITE);
            floodfill(120,120,BLUE);

            setcolor(13);
            outtextxy(300,480,"CRUISE SHIP");

            // padel
            setcolor(BLUE);
            rectangle(100,400,600,450);
            setfillstyle(1,BLUE);
            floodfill(200,420,BLUE);

            //Border 1
            setcolor(BLACK);
            line(220,330,220,350);
            line(220,330,230,340);
            line(230,340,245,340);


            //Body
            setcolor(BLACK);
            line(250,400,450,400);
            line(250,400,200,350);
            line(500,350,450,400);
            line(200,350,500,350);
            setfillstyle(1,BLACK);
            floodfill(350,380,BLACK);


            //window 1st
            setcolor(WHITE);
            rectangle(280,360,300,380);
            setfillstyle(1,BLACK);
            floodfill(290,375,WHITE);

            setcolor(WHITE);
            rectangle(320,360,340,380);
            setfillstyle(1,BLACK);
            floodfill(325,375,WHITE);

            setcolor(WHITE);
            rectangle(360,360,380,380);
            setfillstyle(1,BLACK);
            floodfill(370,375,WHITE);

            setcolor(WHITE);
            rectangle(400,360,420,380);
            setfillstyle(1,BLACK);
            floodfill(410,375,WHITE);


            //body 2
            setcolor(DARKGRAY);
            rectangle(250,300,450,350);
            setfillstyle(1,DARKGRAY);
            floodfill(350,310,DARKGRAY);

            setcolor(DARKGRAY);
            rectangle(280,280,420,300);
            setfillstyle(1,DARKGRAY);
            floodfill(290,290,DARKGRAY);



            //window 2nd
            setcolor(WHITE);
            rectangle(300,305,330,312);
            setfillstyle(1,WHITE);
            floodfill(305,306,WHITE);


            setcolor(WHITE);
            rectangle(340,305,370,312);
            setfillstyle(1,WHITE);
            floodfill(342,306,WHITE);

            setcolor(WHITE);
            rectangle(380,305,410,312);
            setfillstyle(1,WHITE);
            floodfill(385,306,WHITE);

            //Door
            setcolor(RED);
            rectangle(265,310,285,350);
            setfillstyle(1,RED);
            floodfill(275,320,RED);


            //Border 1
            setcolor(BLACK);
            line(260,330,260,350);//
            line(245,340,260,330);
            line(300,330,300,350);//
            line(300,330,290,340);
            line(290,340,270,340);
            line(270,340,260,330);

            line(340,330,340,350);//
            line(340,330,330,340);
            line(330,340,310,340);
            line(310,340,300,330);

            line(380,330,380,350);//
            line(380,330,370,340);
            line(370,340,350,340);
            line(350,340,340,330);

            line(420,330,420,350);//
            line(420,330,410,340);
            line(410,340,395,340);
            line(395,340,380,330);

            line(460,330,460,350);//
            line(460,330,450,340);
            line(450,340,435,340);
            line(435,340,420,330);


            // pillers
            setcolor(BLACK);
            rectangle(300,230,320,280);
            setfillstyle(1,BLACK);
            floodfill(310,240,BLACK);

            setcolor(RED);
            rectangle(300,220,320,230);
            setfillstyle(1,RED);
            floodfill(310,225,RED);

            //
            setcolor(BLACK);
            rectangle(340,230,360,280);
            setfillstyle(1,BLACK);
            floodfill(350,240,BLACK);

            setcolor(RED);
            rectangle(340,220,360,230);
            setfillstyle(1,RED);
            floodfill(350,225,RED);

            //
            setcolor(BLACK);
            rectangle(380,230,400,280);
            setfillstyle(1,BLACK);
            floodfill(390,240,BLACK);

            setcolor(RED);
            rectangle(380,220,400,230);
            setfillstyle(1,RED);
            floodfill(390,225,RED);

            //Border 2
            setcolor(BLACK);
            line(290,280,290,260);
            line(330,280,330,260);//
            line(330,260,320,270);
            line(320,270,310,270);
            line(310,270,290,260);

            line(370,280,370,260);//
            line(370,260,360,270);
            line(360,270,350,270);
            line(350,270,330,260);

            line(410,280,410,260);//
            line(410,260,400,270);
            line(400,270,390,270);
            line(390,270,370,260);

            break;
        case 6:
        {
            cout << "============================================================\n";
            cout << "    Number of students admitted in different faculties\n";
            cout << "============================================================\n";

            //enter the details
            float CSE, EEE, mechanical, architecture, fashion_design, english, bangla ;
            cout << "\n How many students admitted in CSE faculties:";
            cin  >> CSE;
            cout << "\n How many students admitted in EEE faculties:";
            cin  >> EEE;
            cout << "\n How many students admitted in Mechanical faculties:";
            cin  >> mechanical;
            cout << "\n How many students admitted in Architecture faculties:";
            cin  >> architecture;
            cout << "\n How many students admitted in Fashion design faculties:";
            cin  >> fashion_design ;
            cout << "\n How many students admitted in English faculties:";
            cin  >> english;
            cout << "\n How many students admitted in Bangla faculties:";
            cin  >> bangla ;

            // Calculate the angle of pie chart
            double total= CSE+ EEE+ mechanical+ architecture+ fashion_design+ english+ bangla;
            float h1=CSE/total;
            float e1=EEE/total;
            float d1=mechanical/total;
            float de1=architecture/total;
            float s1=fashion_design/total;
            float so1=english/total;
            float he1=bangla/total;

            double arr[8];
            arr[0]=0;
            arr[1]=h1*360;
            arr[2]=e1*360;
            arr[3]=d1*360;
            arr[4]=de1*360;
            arr[5]=s1*360;
            arr[6]=so1*360;
            arr[7]=he1*360;

            setcolor(4);
            outtextxy(190,320,"PIECHART PROGRAM");
            for(int i=0; i<7; i++)
            {
                arr[i+1]+=arr[i];
                setfillstyle(1,i+3);
                pieslice(250,200,arr[i],arr[i+1],100);
                delay(300);
            }
            setcolor(4);
            outtextxy(10,100,"CSE");
            setcolor(5);
            outtextxy(10,120,"EEE");
            setcolor(6);
            outtextxy(10,140,"mechanical");
            setcolor(7);
            outtextxy(10,160,"architecture");
            setcolor(8);
            outtextxy(10,180,"fashion_design");
            setcolor(9);
            outtextxy(10,200,"english");
            setcolor(10);
            outtextxy(10,220,"bangla");
        }
        break;
        case 7:
            //river
            setcolor(BLUE);
            rectangle(0,510,800,650);
            setfillstyle(1,LIGHTBLUE);
            floodfill(50,520,BLUE);

            setcolor(BLACK);//boat1
            line(360,600,420,600);
            line(360,600,340,580);
            line(420,600,440,580);
            line(340,580,440,580);
            setfillstyle(1,BLACK);
            floodfill(350,585,BLACK);

            setcolor(RED);
            rectangle(360,560,420,580);
            setfillstyle(1,RED);
            floodfill(370,570,RED);


            setcolor(BLACK);//boat2
            line(500,580,560,580);
            line(480,560,500,580);
            line(560,580,580,560);
            line(480,560,580,560);
            setfillstyle(1,BLACK);
            floodfill(520,570,BLACK);


            setcolor(RED);
            rectangle(500,560,560,540);
            setfillstyle(1,RED);
            floodfill(520,550,RED);


            setcolor(YELLOW);//part 3
            rectangle(0,150,800,360);
            setfillstyle(1,LIGHTCYAN);
            floodfill(120,320,YELLOW);


            setcolor(RED);//mount
            line(540,240,450,358);
            line(540,240,600,358);
            line(450,358,600,358);
            setfillstyle(1,RED);
            floodfill(540,340,RED);

            setcolor(YELLOW);//sun
            circle(720,210,30);
            setfillstyle(1,YELLOW);
            floodfill(730,220,YELLOW);

            line(720,170,720,155);
            line(720,250,720,270);
            line(690,210,670,210);
            line(750,210,770,210);

            setcolor(BROWN);//Birds
            ellipse(150,210,0,90,20,40);
            ellipse(190,210,90,180,20,40);

            ellipse(240,270,0,90,20,40);
            ellipse(280,270,90,180,20,40);

            ellipse(190,270,0,90,20,40);
            ellipse(230,270,90,180,20,40);

            ellipse(120,240,0,90,20,40);
            ellipse(160,240,90,180,20,40);

            ellipse(600,270,0,90,20,40);
            ellipse(640,270,90,180,20,40);

            ellipse(600,230,0,90,10,20);
            ellipse(620,230,90,180,10,20);

            ellipse(550,250,0,90,10,20);
            ellipse(570,250,90,180,10,20);

            ellipse(90,230,0,90,10,20);
            ellipse(110,230,90,180,10,20);

            setcolor(WHITE);//cloud
            ellipse(360,210,0,360,25,25);
            setfillstyle(1,WHITE);
            floodfill(350,220,WHITE);
            ellipse(335,230,0,360,30,20);
            setfillstyle(1,WHITE);
            floodfill(340,240,WHITE);


            setcolor(WHITE);//cloud
            ellipse(400,210,0,360,25,25);
            setfillstyle(1,WHITE);
            floodfill(410,220,WHITE);
            ellipse(375,230,0,360,30,20);
            setfillstyle(1,WHITE);
            floodfill(380,240,WHITE);


            setcolor(RED);
            line(660,270,570,358);
            line(720,300,660,270);
            line(720,358,720,300);
            line(720,358,570,358);
            setfillstyle(1,RED);
            floodfill(670,340,RED);

            setcolor(RED);
            line(720,330,780,280);
            line(780,280,798,280);
            line(798,280,798,358);
            line(798,358,720,358);
            line(720,330,720,358);
            setfillstyle(1,RED);
            floodfill(750,340,RED);


            setcolor(LIGHTGREEN);// part 1
            rectangle(0,360,800,510);
            setfillstyle(1,LIGHTGREEN);
            floodfill(520,500,LIGHTGREEN);

            setcolor(RED);//Tree
            rectangle(90,400,100,450);
            setfillstyle(1,RED);
            floodfill(92,420,RED);


            setcolor(GREEN);//1
            line(80,400,110,400);
            line(80,400,95,380);
            line(110,400,95,380);
            setfillstyle(1,GREEN);
            floodfill(95,390,GREEN);

            setcolor(GREEN);
            line(95,360,80,380);
            line(80,380,110,380);
            line(110,380,95,360);
            setfillstyle(1,GREEN);
            floodfill(100,370,GREEN);

            setcolor(GREEN);//Tree2
            line(150,380,180,380);
            line(150,380,165,350);
            line(165,350,180,380);
            setfillstyle(1,GREEN);
            floodfill(165,355,GREEN);


            setcolor(RED);
            rectangle(160,380,170,450);
            setfillstyle(1,RED);
            floodfill(165,395,RED);


            setcolor(GREEN);//Tree3
            line(600,350,580,370);
            line(600,350,620,370);
            line(580,370,620,370);
            setfillstyle(1,GREEN);
            floodfill(605,360,GREEN);

            setcolor(RED);
            rectangle(595,370,605,430);
            setfillstyle(4,RED);
            floodfill(602,390,RED);


            setcolor(GREEN);//Tree4
            line(660,340,640,360);
            line(660,340,680,360);
            line(640,360,680,360);
            setfillstyle(1,GREEN);
            floodfill(660,350,GREEN);


            setcolor(RED);//part2
            rectangle(655,360,665,450);
            setfillstyle(4,RED);
            floodfill(660,390,RED);

            setcolor(GREEN);
            line(660,390,640,410);
            line(660,390,680,410);
            line(640,410,680,410);
            setfillstyle(1,GREEN);
            floodfill(660,400,GREEN);


            setcolor(RED);//Tree3
            rectangle(720,390,750,450);
            setfillstyle(4,RED);
            floodfill(730,395,RED);

            setcolor(GREEN);
            circle(735,380,30);
            setfillstyle(1,GREEN);
            floodfill(740,390,GREEN);

            setcolor(MAGENTA);//House 1
            line(300,370,270,410);
            line(300,370,330,410);
            line(270,410,330,410);
            setfillstyle(2,MAGENTA);
            floodfill(300,400,MAGENTA);

            setcolor(LIGHTMAGENTA);
            rectangle(280,410,320,450);
            setfillstyle(1,LIGHTMAGENTA);
            floodfill(300,420,LIGHTMAGENTA);


            setcolor(YELLOW);
            rectangle(290,430,310,450);
            setfillstyle(1,YELLOW);
            floodfill(300,440,YELLOW);

            setcolor(LIGHTRED);//House 2
            line(480,380,420,420);
            line(480,380,540,420);
            line(420,420,540,420);
            setfillstyle(2,LIGHTRED);
            floodfill(490,390,LIGHTRED);

            setcolor(LIGHTMAGENTA);
            rectangle(430,420,530,490);
            setfillstyle(1,LIGHTMAGENTA);
            floodfill(450,430,LIGHTMAGENTA);


            setcolor(YELLOW);
            rectangle(470,445,495,490);
            setfillstyle(1,YELLOW);
            floodfill(480,450,YELLOW);


            setcolor(5);
            outtextxy(300,670,"VILLAGE SCENARIO");

            break;

        default :
            cout << "SORRY!!! INVALID INPUT. PLEASE TRY AGAIN.";
            break;

        }
    }

    return 0;
}

