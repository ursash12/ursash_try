#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,an,bn,hn,gn,as,bs,cs,ds,es,aj,bj,cj,dj,ej;
    int score=0; 
    printf("WELCOME\n");
    printf("To start game press 1 \n To exit game press 2\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("GAME STARTING \n GET READY\n");
    }
    else
    {
        printf("Tap X in your screen to exit\n");
    }
    printf("Select game mode\n");
    printf("1. Science quiz 2.Maths quiz 3.General knowladge Quiz 4. Programming Quiz\n");
    scanf("%d",&b);
    switch(b){
    case 1 : printf("Welcome to Science quiz game\n ");
    printf("Answer the following questions\n");
    printf("Which virus cause AIDS=?\n");
    printf("options:\n 1:- HIV\n 2:- SARS\n 3:-MERS\n 4:- HDV\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("YOU ARE CORRECT\n ");
        score++;
    } 
    printf("Which is not a virus name\n");
    printf("\noptions: \n 1:- SARS \n 2:- MERS\n 3:- AIDS\n 4:- rabies\n");
    scanf("%d", &d );
    if(d==3)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    
    printf("Which of the following is caused by becteria\n ");
    printf("1.COVID \n 2. E-COLI\n 3. MALERIA\n 4. DENGUE\n");
    scanf("%d",&an);
    if(an==2)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    printf("Which of the following is caused by virus\n ");
    printf("1.TB \n 2. E-COLI\n 3. MALERIA\n 4. DENGUE\n");
    scanf("%d",&bn);
    if(bn==4)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    printf("score=%d out of 5",score);
    break;

    case 2 : printf("WELCOME TO MATHS QUIZ GAME\n ");
    printf("Solve the following questions :-\n");
    printf("12+2*5=?");
    printf("options:-\n 1.15 \n 2. 22\n 3. 32\n 4. 42\n ");
    scanf("%d",&f);
    if (f==2)
    {
        printf("YOU ARE CORRECT\n ");
        score++;
    }
    printf("12+3*5=?\n");
    printf("\noptions:-\n 1.25 \n 2. 21\n 3. 27\n 4. 42\n ");
    scanf("%d",&g);
    if (g==3)
    {
        printf("YOU ARE CORRECT \n");
        score++;
    }
    printf("2+2*5=?");
    printf("\noptions:-\n 1.12 \n 2. 22\n 3. 32\n 4. 42\n ");
    scanf("%d",&h);
    if (h==1)
    {
        printf("YOU ARE CORRECT\n ");
        score++;
    }
    printf("8+2*5=?");
    printf("\noptions:-\n 1.12 \n 2. 22\n 3. 18\n 4. 42\n ");
    scanf("%d",&hn);
    if (hn==3)
    {
        printf("YOU ARE CORRECT\n ");
        score++;
    }
    printf("5+2*5=?");
    printf("\noptions:-\n 1.12 \n 2. 15\n 3. 32\n 4. 42\n ");
    scanf("%d",&gn);
    if (gn==2)
    {
        printf("YOU ARE CORRECT\n ");
        score++;
    }
    printf("score=%d out of 5",score);
    break;
    case 3 : printf("WELCOME TO GENERAL KNOWLADGE QUIZ GAME\n");
    printf("Answer the following questions:-\n");
    printf("Which is the deepest ocean in the world? ");
    printf("Options :- \n 1. Indian Ocean\n 2. Pacific ocean\n 3. Atlantic ocean\n 4. Arctic Ocean\n");
    scanf("%d",&as);
    if(as==2)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    printf("What is the capital of japan?");
    printf("Options:\n 1. Tokyo\n 2. Tokiyo\n 3. London\n 4. Delhi\n ");
    scanf("%d",&bs);
    if(bs==1)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    printf("What is the largest planet in our solar system?");
    printf("Options:\n 1. Saturn \n 2. Jupitor\n 3. Earth \n 4. Mercury\n");
    scanf("%d",&cs);
    if(cs==2)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    printf("What is the chemical symbol of water?");
    printf("Options:-\n 1. H2O \n 2. N2O\n 3. H2So4 \n 4. HCl");
    scanf("%d",&ds);
    if(ds==1)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    printf("What is the chemical formuala of Hydrochoric acid?");
    printf("Options:-\n 1. H2O \n 2. N2O\n 3. H2So4 \n 4. HCl");
    scanf("%d",&es);
    if(es==1)
    {
        printf("YOU ARE CORRECT\n");
        score++;
    }
    printf("score=%d out of 5",score);
   break;
   case 4 :  printf("WELCOME TO PROGRAMMING QUIZ GAME\n");
    printf("Answer the following questions:-\n");
    printf("Which is not a data type in C?");
    printf("1.float\n 2.int\n 3.char\n 4.switch\n ");
    scanf("%d",&aj);
    if(aj==4)
    {
        printf("YOU ARE CORRECT");
        score++;
    }
    printf("Which is a data type in C?");
    printf("1.float\n 2.case\n 3.floor\n 4.switch\n ");
    scanf("%d",&bj);
    if(bj==1)
    {
        printf("YOU ARE CORRECT");
        score++;
    }
    printf("Which is a bitwise operator in C?");
    printf("1.&&\n 2.++\n 3.==\n 4.$$\n ");
    scanf("%d",&cj);
    if(cj==1)
    {
        printf("YOU ARE CORRECT");
        score++;
    }
    printf("Which is a not bitwise operator in C?");
    printf("1.&&\n 2.||\n 3.!\n 4.==\n ");
    scanf("%d",&dj);
    if(dj==4)
    {
        printf("YOU ARE CORRECT");
        score++;
    }
    printf("Which is the following is a relational operator in c?");
    printf("1.>\n 2. (\n 3. ^\n 4. &\n");
    scanf("%d",&ej);
    if(ej==1)
    {
        printf("YOU ARE CORRECT");
        score++;
    }
    printf("score=%d out of 5",score);
}
return 0;
}
