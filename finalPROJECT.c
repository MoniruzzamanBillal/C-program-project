#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//about this game
void about()
{
    printf("\n\n\t\t\t>This is a quiz game\n");
    printf("\n\n\t\t\t>This game is designed to test your knowledge on different sectors.\n");
}
//about the developer
void dev()
{
    printf("\n\n\t\tThis program is developed by Md. Moniruzzaman\n\n");
    printf("\t\tMd. Moniruzzaman is currently studying at IUBAT in department of computer science and engineering.\n\t\tFrom his childhood his ambition was to bacome an engineer.\n\t\tHis current goal is to getting job at Google/Meta/Amazon.\n\t\tHe is trying his best to reach his goal.\n\t\tHe always tries to make his mother happy.\n\n");

}
//slot 1 function
void slot1()
{
    int cou,i,j;
    char guess,choice;
    //slot 1 questions
    char questionslot1[][200]= {"Q1:When the constituent assembly adopted the constitution of Bangladesh?",
                                "Q2:When BANGLADESH joined the United Nations?",
                                "Q3:What is the literacy rate of Bangladesh?",
                                "Q4:What was the GDP of Bangladesh in 2021?",
                                "Q5:What is the national animal of Bangladesh?"
                               };
//options of slot 1
    char opslot1[][200]= {"A:1 January 1972","B:4 November 1972","C:4 December 1972","D:5 April 1973",
                          "A:1972","B:1973","C:1971","D:1974",
                          "A:74.91%","B:70.24","C:78.81","D:72.15",
                          "A:$2,203","B:$2,503","C:$2,003","D:$2,103",
                          "A:Cat","B:Horse","C:Elephant","D:Tiger"
                         };
//answer of slot 1
    char ansslot1[5]= {'B','D','A','B','D'};
    int slot1len=sizeof(questionslot1)/sizeof(questionslot1[0]);
    char message[40]="Choose A,B,C,D from the option.\n";
    system("cls");
    printf("\n\t\t\t\t%s\n",message);
    cou=0;
    for(i=0; i<slot1len; i++)
    {
        printf("\t\t\t\t%s\n",questionslot1[i]);

        for(j=(i*4); j<(i*4)+4; j++)
        {
            printf("\t\t\t\t%s\n",opslot1[j]);
        }
        printf("\t\t\t\tAns:");
        fflush(stdin);
        scanf("%c",&guess);
        guess=toupper(guess);
        if(guess==ansslot1[i])
        {
            printf("\n\t\t\t\tYour ans is correct");
            cou++;
        }
        else
        {
            printf("\n\t\t\t\tYour ans is not correct\n");
            printf("\t\t\t\tCorrect Ans:%c",ansslot1[i]);
        }
        printf("\n\t\t\t\t--------------------------\n\n");
    }
    if(cou==1)
    {
        printf("\n\t\t\t\tYou have got %d point\n\n\n",cou);
    }
    else
    {
        printf("\n\t\t\t\tYou have got %d points\n\n\n",cou);
    }
}
//slot 2 function
void slot2()
{
    int cou,i,j;
    char guess,choice;
    //slot 2 questions
    char questionslot2[][200]= {"Q1:How many years the ottoman empire rule?",
                                "Q2:World-war 2 lasted from?",
                                "Q3:BERMUDA TRIANGLE region is located at?",
                                "Q4:Total numbers of ocean in the world-",
                                "Q5:Which of the following weapon plays crucial role in Nagorno-Karabakh war(A war between Azerbaijan and Armenia)?"
                               };
//options of slot 2
    char opslot2[][200]= {"A:523","B:600","C:150","D:623",
                          "A:1939-1945","B:1914-1919","C:1940-1945","D:1942-1948",
                          "A:South Atlantic","B:Southern oceans","C:North Atlantic Ocean","D:Arctic",
                          "A:5","B:7","C:4","D:6",
                          "A:S-400 missile system","B:Cruise missile","C:Bayraktar TB2(UAV)","D:Ballistic missile"
                         };
//answer of slot 2
    char ansslot2[5]= {'D','A','C','C','C'};
    int slot2len=sizeof(questionslot2)/sizeof(questionslot2[0]);
    char message[40]="Choose A,B,C,D from the option.\n";
    system("cls");
    printf("\n\t\t\t\t%s\n",message);
    cou=0;
    for(i=0; i<slot2len; i++)
    {
        printf("\t\t\t\t%s\n",questionslot2[i]);
        for(j=(i*4); j<(i*4)+4; j++)
        {
            printf("\t\t\t\t%s\n",opslot2[j]);
        }
        printf("\t\t\t\tans:");
        fflush(stdin);
        scanf("%c",&guess);
        guess=toupper(guess);
        if(guess==ansslot2[i])
        {
            printf("\n\t\t\t\tYour ans is correct");
            cou++;
        }
        else
        {
            printf("\n\t\t\t\tYour ans is not correct\n");
            printf("\t\t\t\tCorrect Ans:%c",ansslot2[i]);
        }
        printf("\n\t\t\t\t--------------------------\n\n");
    }
    if(cou==1)
    {
        printf("\n\t\t\t\tYou have got %d point\n\n\n",cou);
    }
    else
    {
        printf("\n\t\t\t\tYou have got %d points\n\n\n",cou);
    }
}
//slot 3 function
void slot3()
{
    int cou,i,j;
    char guess,choice;
    //slot 3 questions
    char questionslot3[][200]= {"Q1:what is the most played soprt in the world?",
                                "Q2:What is the market size of sports in 2022?",
                                "Q3:What is the most viewed sports?",
                                "Q4:What is the most popular esport game",
                                "Q5:Where the world cup 2022 will held?"
                               };
//options of slot 3
    char opslot3[][200]= {"A:Football","B:Cricket","C:Volleyball","D:Base-ball",
                          "A:$801.43 billion","B:$501.43 billion","C:$201.43 billion","D:$100.43 billion",
                          "A:Cricket world cup","B:NBA","C:Olympic","D:Football world cup",
                          "A:DOTA-2","B:PUBGM","C:PUBG","D:Call of duty",
                          "A:U.S.A","B:Brazil","C:Japan","D:Quatar"
                         };
//answer of slot 3
    char ansslot3[5]= {'C','B','D','A','D'};
    int slot3len=sizeof(questionslot3)/sizeof(questionslot3[0]);
    char message[40]="Choose A,B,C,D from the option.\n";
    system("cls");
    printf("\n\t\t\t\t%s\n",message);
    cou=0;
    for(i=0; i<slot3len; i++)
    {
        printf("\t\t\t\t%s\n",questionslot3[i]);

        for(j=(i*4); j<(i*4)+4; j++)
        {
            printf("\t\t\t\t%s\n",opslot3[j]);
        }
        printf("\t\t\t\tans:");
        fflush(stdin);
        scanf("\t\t\t\t%c",&guess);
        guess=toupper(guess);
        if(guess==ansslot3[i])
        {
            printf("\n\t\t\t\tYour ans is correct");
            cou++;
        }
        else
        {
            printf("\n\t\t\t\tYour ans is not correct\n");
            printf("\t\t\t\tCorrect Ans:%c",ansslot3[i]);
        }
        printf("\n\t\t\t\t--------------------------\n\n");
    }
    if(cou==1)
    {
        printf("\n\t\t\t\tYou have got %d point\n\n\n",cou);
    }
    else
    {
        printf("\n\t\t\t\tYou have got %d points\n\n\n",cou);
    }
}
int main()
{
    char name[20];
    int cou=0;
    int score=0;
    int i,j,r;
    char choice;
    char choice2;
    char guess;
    int age;
    system("color E0");

mainmenu:
    system("cls");
    printf("\n\t\t\t\t........................QUIZ GAME...........................\n");
    printf("\n\n\t\t\t\t\t\t    Welcome To The Game");
    printf("\n\t\t\t\t____________________________________________________________\n");
    printf("\n\t\t\t\t>Press A to learn About this game\n");
    printf("\n\t\t\t\t>Press L to get info about the developer");
    printf("\n\n\t\t\t\t>Press S to Start the Game\n");
    printf("\n\t\t\t\t>Press Q to Quit\n\n");
    printf("\n\n\t\t\t\tEnter Your Choice:");

    fflush(stdin);
    scanf("%c",&choice);
    choice=toupper(choice);

    if(choice == 'A')
    {
        system("cls");
        about();
        printf("\n\n\t\t\tPress any key to go to main menu:");
        getch();
        goto mainmenu;
    }
    else if(choice == 'L')
    {
        system("cls");
        dev();
        printf("\n\t\tPress any key to go to main menu:");
        getch();
        goto mainmenu;
    }
    else if(choice == 'Q')
    {
        printf("\n\n");
        return ;
    }
    else if(choice == 'S')
    {
        system("cls");
        printf("\n\n\n\n\t\t\t\t\t\tEnter your name:");
        fflush(stdin);
        gets(name);

        printf("\n\t\t\t\t\t\tEnter your age:");
        scanf("%d",&age);

        if(age<=12)
        {
            system("cls");
            printf("\n\n\t\t\t\t\t\t Your age is under 13\n\n");
            printf("\n\t\t\t\t\t So you are not eligible to play quiz\n\n\n");
            printf("\t\t\t\t\tPress any key to goto main menu:");
            getch();
            goto mainmenu;
        }
        else
        {
            system("cls");
            printf("\n\t\t\t\t\t\tWelcome %s to this game\n",name);
            printf("\n\n\t\t\t\t\t\t Rule of this game:\n");
            printf("\n\t\t\t\tRule1:You have to choose a slot of the question.");
            printf("\n\t\t\t\tRule2:Choose the right answer.\n\n\n\n");

            printf("   >>Enter S to go to next\n");
            printf("   >>Enter any key to go to main menu\n\n");
            printf("   Enter your choice:");

            fflush(stdin);
            scanf("%c",&choice2);
            choice2=toupper(choice2);

            if(choice2 == 'S')
            {
                goto start_game;
            }
            else
            {
                goto mainmenu;
            }
        }
    }
    else
    {
        getch();
        goto mainmenu;
    }

start_game:
    system("cls");

    printf("\n\n\t\t\t\t\t  Select a slot of question:\n\n");
    printf("\t\t\t\t\t  slot A : About BANGLADESH\n");
    printf("\t\t\t\t\t  slot B : About world\n");
    printf("\t\t\t\t\t  slot C : About sports\n\n");
    printf("\t\t\t\t\t  Enter your choice:");

    fflush(stdin);
    scanf("%c",&choice);
    choice=toupper(choice);

    if(choice == 'A')
    {
        slot1();
        printf("\t\t\t\t>>Press S to play again\n");
        printf("\t\t\t\t>>Press M to go to menu\n");
        printf("\t\t\t\t>>Press any key to end\n\n");
        printf("\t\t\t\tEnter your choice:");

        fflush(stdin);
        scanf("%c",&choice);
        choice=toupper(choice);
        if(choice=='M')
        {
            goto mainmenu;
        }
        else if(choice=='S')
        {
            goto start_game;
        }
        else
        {
            printf("\n\n\n\n");
            return ;
        }
    }
    else if(choice == 'B')
    {
        slot2();
        printf("\t\t\t\t>>Press S to play again\n");
        printf("\t\t\t\t>>Press M to go to menu\n");
        printf("\t\t\t\t>>Press any key to end\n\n");
        printf("\t\t\t\tEnter your choice:");

        fflush(stdin);
        scanf("%c",&choice);
        choice=toupper(choice);

        if(choice=='M')
        {
            goto mainmenu;
        }
        else if(choice=='S')
        {
            goto start_game;
        }
        else
        {
            printf("\n\n\n\n");
            return ;
        }
    }
    else if(choice == 'C')
    {
        slot3();

        printf("\t\t\t\t>>Press S to play again\n");
        printf("\t\t\t\t>>Press M to go to menu\n");
        printf("\t\t\t\t>>Press any key to end\n\n");
        printf("\t\t\t\tEnter your choice:");

        fflush(stdin);
        scanf("%c",&choice);
        choice=toupper(choice);

        if(choice=='M')
        {
            goto mainmenu;
        }

        else if(choice=='S')
        {
            goto start_game;
        }

        else
        {
            printf("\n\n\n\n");
            return ;
        }
    }
    else
    {
        printf("\n\t\t\t\t\t  >>Invalid choice\n");
        printf("\t\t\t\t\t  Press enter and then choose a valid slot");
        getch();
        goto start_game;
    }

    printf("\n\n\n\n");
    getch();
}
