In Japan, there was a very huge Tsunami. Millions and millions worth buildings and property were destroyed.
Many people lost their lives while some of them were injured and few were safe. A news reporter arrives at
the spot to take the current survey regarding the situation of the people alive, dead and injured. He 
wanted to publish it in the newspaper and reach out to other countries asking to help the affected people.
Can you please help him in this noble cause by writing a program to generate the newspaper report ?


SOLUTION:
#include<stdio.h>
int main()
{
    //fill the code
    int dead,injured,safe;
    scanf("%d %d %d",&dead,&injured,&safe);
    printf("1)Dead : %d\n",dead);
    printf("2)Injured : %d\n",injured);
    printf("3)Safe : %d\n",safe);
    printf("Please help the people who are suffering!!!");
    return 0;
}
