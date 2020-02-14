#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int t=0;
	char c1,c2,c3,c4,c5;
	printf("**************************************************************************\n***************************** WELCOME TO KBC *****************************\n**************************************************************************\n\nRules : 1)Each Right answer give you Rs 10,000\n\n\t2)For each wrong answer Rs 5,000 will be detected\n\n\t3)If the First answer is wrong then you are out of the Game\n\n*********** Press Any Key to Begin the Game ***********\n");
	getch();
	system("cls");
	printf("1)What is the Capital of China ?\n\nA)Shanghai\nB)Hong Kong\nC)Beijing \nD)Macau\n\nEnter your choice A,B,C or D\n");
	scanf(" %c",&c1);
	if(c1=='c'||c1=='C')
	{
		printf("\n*****Your Answer is Correct ..!*****\n\n*****You have won Rs 10,000*****\n\n");
		t=t+10000;
	}
	else
	{
		printf("\n*****Your Answer is Incorrect ..!*****\n***** You are out of Game *****\n\n");
		return 0;
	}
	getch();
	system("cls");	
	printf("2)Where is the HeadQuater of U.N ?\n\nA)Washinton DC\nB)New york\nC)London\nD)Manchester\n\nEnter your choice A,B,C or D\n");
	scanf(" %c",&c2);
	if(c2=='b'||c2=='B')
	{
		printf("\n*****Your Answer is Correct ..!*****\n\n*****You have won Rs 10,000*****\n\n");
		t=t+10000;
	}
	else
	{
		printf("\n*****Your Answer is Incorrect ..!*****\n\n");
		t=t-5000;
	}
	getch();
	system("cls");
	printf("3)What is the Currency of Germany ?\n\nA)Euro\nB)Pound\nC)yen\nD)Dollar\n\nEnter your choice A,B,C or D\n");
	scanf(" %c",&c3);
	if(c3=='a' || c3=='A')
	{
		printf("\n*****Your Answer is Correct ..!*****\n\n*****You have won Rs 10,000*****\n\n");
		t=t+10000;
	}
	else
	{
		printf("\n*****Your Answer is Incorrect ..!*****\n\n");
		t=t-5000;
	}
	getch();
	system("cls");
	printf("4)Who was the first President of Pakistan ?\n\nA)Qaid e Azam Muhammad Ali Jinnah\nB)Liaqat Ali Khan\nC)General Ayub Khan\nD)Khuwaja Nazim ud din\n\nEnter your choice A,B,C or D\n");
	scanf(" %c",&c4);
	if(c4=='d'||c4=='D')
	{
		printf("\n*****Your Answer is Correct ..!*****\n\n*****You have won Rs 10,000*****\n\n");
		t=t+10000;
	}
	else
	{
		printf("\n*****Your Answer is Incorrect ..!*****\n\n");
		t=t-5000;
	}
	getch();
	system("cls");
	printf("5)The only batsman of Pakistan to score 10,000 runs in Test cricket ?\n\nA)Javed miandad\nB)Misbah ul haq\nC)Yonus Khan\nD)Zaheer Abbas\n\nEnter your choice A,B,C or D\n");
	scanf(" %c",&c5);
	if(c5=='c'||c5=='C')
	{
		printf("\n*****Your Answer is Correct ..!*****\n\n*****You have won Rs 10,000*****\n\n");
		t=t+10000;
	}
	else
	{
		printf("\n*****Your Answer is Incorrect ..!*****\n\n");
		t=t-5000;
	}
	getch();
	system("cls");
	if(t>=5000)
	{
	    printf("\n\n******** TOTAL PRICE YOU HAVE WON ===> Rs %d ********",t);
	}
	else
	{
		printf("\n\n******** TOTAL PRICE YOU HAVE WON ===> Rs 0 ********");
	}
	getch();
}
