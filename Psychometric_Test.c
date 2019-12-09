/*program for psychometric test*/

#include<stdio.h>
#include<conio.h>

int main()

{

char c,ch;
int sum=0;
clrscr();
printf("\t\t\t\tLET'S KNOW ABOUT YOURSELF\n\n\n");
printf("INSTRUCTIONS\n\n");
printf("1.There are 12 Questions\n2.You should answer all the Qustions\n");
printf("3.Each questions has 10 sec Each\n4.Answer all the questions which will come your mind first\n\n\n\n");
printf(" Are you ready (Y or N) :\n\n\n ");
scanf("%c",&c);

if(c=='y' || c=='Y')

{
clrscr();
printf("\t\t\t\t QUESTION 1.\n\n\n");
printf("1.let's Assume there is a function related to you what would you think about it?\n\n\npress Enter for Options");
getch();
clrscr();
printf("\n\n\n\na.Anxiety\nb.Confidence\nc.Lack of intrest\nd.Hope\ne.Boaring\n\n\t\t\t");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);

switch(ch)

{
case 'a':
sum=sum+40;
break;
case 'b':
sum=sum+30;
break;
case 'c':
sum=sum+10;
break;
case 'd':
sum=sum+50;
break;
case 'e':
sum=sum+20;
break;
default:
printf("invalid input");

}

clrscr();
printf("\t\t\t\t QUESTION 2.\n\n\n");
printf("2.What would you like to do when you are FREE?\n\n\npress Enter to Options");
getch();
clrscr();
printf("\n\n\n\na.Reading\nb.Going to park\nc.Simply sitting at home\nd.Going to shopping\ne.None of the above\n\n\n\t\t\t");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);

switch(ch)

{

case 'a':
sum=sum+20;
break;
case 'b':
sum=sum+30;
break;
case 'c':
sum=sum+10;
break;
case 'd':
sum=sum+40;
break;
case 'e':
sum=sum+50;
break;
default:
printf("invalid input");

}

clrscr();
printf("\t\t\t\t QUESTION 3.\n\n\n");
printf("3.What is extremely true about you?\n\n\npress Enter to Options");
getch();
clrscr();
printf("\n\n\n\na.Maturity\nb.Intelligent\nc.Emotional\nd.Introvert\ne.Extrovert\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);
switch(ch)

{

case 'a':
sum=sum+10;
break;
case 'b':
sum=sum+30;
break;
case 'c':
sum=sum+20;
break;
case 'd':
sum=sum+40;
break;
case 'e':
sum=sum+50;
break;
default:
printf("invalid input");

}

clrscr();
printf("\t\t\t\t QUESTION 4.\n\n\n");
printf("What would you prefer among given options?\n\n\npress Enter to Options");
getch();
clrscr();
printf("\n\n\n\na.Body\nb.Soul\nc.Spirit\nd.Hormons\ne.None of the above\n\n\n\t\t\t");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);

switch(ch)

{
case 'a':
sum=sum+30;
break;
case 'b':
sum=sum+40;
break;
case 'c':
sum=sum+10;
break;
case 'd':
sum=sum+20;
break;
case 'e':
sum=sum+50;
break;
default:
printf("invalid input");
break;

}

clrscr();
printf("\t\t\t\t QUESTION 5.\n\n\n");
printf("5.Which given options you can be connected to?\n\n\npress Enter for Options");
getch();
clrscr();
printf("\n\n\n\na.Earth\nb.Metal\nc.Water\nd.Fire\ne.Tree\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);
switch(ch)


{

case 'a':
sum=sum+40;
break;
case 'b':
sum=sum+50;
break;
case 'c':
sum=sum+10;
break;
case 'd':
sum=sum+30;
break;
case 'e':
sum=sum+20;
break;
default:
printf("invalid input");


}

clrscr();
printf("\t\t\t\t QUESTION 6.\n\n\n");
printf("Which animal is mostly ressembling to you?\n\n\npress Enter to Options");
getch();
clrscr();
printf("\n\n\n\na.Fox\nb.Wolf\nc.Cat\nd.Tiger\ne.None of the above\n\n\n\t\t\t");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);
switch(ch)
{
case 'a':
sum=sum+40;
break;
case 'b':
sum=sum+10;
break;
case 'c':
sum=sum+50;
break;
case 'd':
sum=sum+30;
break;
case 'e':
sum=sum+20;
break;
default:
printf("invalid input");
break;
}
clrscr();
printf("\t\t\t\t QUESTION 7.\n\n\n");
printf("Where would you like to go in hollidays?\n\n\npress Enter to Options");
getch();
clrscr();
printf("\n\n\n\na.Hill\nb.Willage\nc.Forest\nd.Beach\ne.None of the above\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);
switch(ch)
{
case 'a':
sum=sum+20;
break;
case 'b':
sum=sum+50;
break;
case 'c':
sum=sum+40;
break;
case 'd':
sum=sum+10;
break;
case 'e':
sum=sum+30;
break;
default:
printf("invalid input");
break;

}

clrscr();
printf("\t\t\t\t QUESTION 8.\n\n\n");
printf("Which among these problems you will solve first\n\n\n\t\t\tPress enter for options");
getch();
clrscr();
printf("\n\n\n\na.Cancer\nb.Poorty\nc.Air polution\nd.Harrasing aganist women\ne.Forest fire\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);

switch(ch)

{

case 'a':
sum=sum+40;
break;
case 'b':
sum=sum+30;
break;
case 'c':
sum=sum+20;
break;
case 'd':
sum=sum+10;
break;
case 'e':
sum=sum+50;
break;
default:
printf("invalid input");
break;

}

clrscr();
printf("\t\t\t\t QUESTION 9.\n\n\n");
printf("Which sense is mostly experience to you\n\n\n\t\t\tPress enter for options");
getch();
clrscr();
printf("\n\n\n\na.Touch\nb.Taste\nc.Smell\nd.Hearing\ne.Vision\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);

switch(ch)

{
case 'a':
sum=sum+20;
break;
case 'b':
sum=sum+50;
break;
case 'c':
sum=sum+10;
break;
case 'd':
sum=sum+40;
break;
case 'e':
sum=sum+30;
break;
default:
printf("invalid input");
break;

}

clrscr();
printf("\t\t\t\t QUESTION 10\n\n\n");
printf("Whis is your favourate climate\n\n\n\t\t\tPress enter for options");
getch();
clrscr();
printf("\n\n\n\na.Summer\nb.Rain\nc.Spring\nd.Winter\ne.All climate\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);
switch(ch)

{

case 'a':
sum=sum+40;
break;
case 'b':
sum=sum+10;
break;
case 'c':
sum=sum+50;
break;
case 'd':
sum=sum+30;
break;
case 'e':
sum=sum+20;
break;
default:
printf("invalid input");
break;

}

clrscr();

printf("\t\t\t\t QUESTION 11\n\n\n");
printf("What you think about your self\n\n\t\t\tPress enter for options");
getch();
clrscr();
printf("\n\n\n\na.Friendly\nb.Energetic\nc.Emotional\nd.Finding problems\ne.Solving problems\n\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);

switch(ch)

{

case 'a':
sum=sum+50;
break;
case 'b':
sum=sum+30;
break;
case 'c':
sum=sum+10;
break;
case 'd':
sum=sum+20;
break;
case 'e':
sum=sum+40;
break;
default:
printf("invalid input");
break;

}

clrscr();
printf("\t\t\t\t QUESTION 12\n\n\n");
printf("What is your favourite colour\n\n\t\t\tPress enter for options");
getch();
clrscr();
printf("\n\n\n\na.Orange\nb.Red\nc.Green\nd.Blue\ne.Black\n");
sleep(9);
clrscr();
printf("\t\t\t\tPress a,b,c,d or e\n");
scanf(" %c",&ch);
clrscr();

switch(ch)

{

case 'a':
sum=sum+30;
break;
case 'b':
sum=sum+20;
break;
case 'c':
sum=sum+50;
break;
case 'd':
sum=sum+40;
break;
case 'e':
sum=sum+10;
break;
default:
printf("invalid input");
break;

}

}

else

{

printf("\t\t\tGOOD BYE THANK YOU");
getch();
exit(0);

}


if(sum>=120 && sum<=190)

{

printf("\t\t\t\tABOUT YOURSELF\n\n\n\n\n");

printf("You are the person who utilize there 5 scence well\n*You will quickly obseve and understand all the fact happend around you\n");
printf("*You probebly little shy\n*Who would trying to get details of issues happened\n*You will understand all the things quickly\n");

}

else if(sum>=200 && sum <=290)

{

printf("\t\t\t\tABOUT YOURSELF\n\n\n\n\n");

printf("*You are brillient person\n*you have exelent taught\n*Your thought is extreamly diffrent from others\n");

printf("*You can make a solutions for the problems others would try and failed\n*You will think diffrently and find out diffrent solution\n*But the problem is that you wont agree that you are brillient");

}


else if(sum>=300 && sum<= 390)

{
printf("*Your tallent is your speed\n*You will do all the things quickly but accuracy is bit lower\n*You have punctuality and regularity\n");

}

else if(sum>=400 && sum<=490)

{

printf("*You have exellent concentration power and mind\n*You can profecies about person,consequences of any incidents\n");

}

else if(sum>=500 && sum<=600)

{

printf("You are brillient person and exelent obsevation power\n*You can predict the person easly\n*You can understand person if he said lie\n*You can predict the person by seeing his face\n*You have extramly friendly and having lot of friends\n");

}

else
printf("Invalid input");

getch();

clrscr();

printf("This is the psycometric test it maynot 100% true but 80%");



getch();

return 0;

}
