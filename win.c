Long ago, there was a war between the Trojans and Greeks. The Trojan and Greek armies met outside the walls of Troy. Seeing the bloodshed, the two kings decided to end the battle as early as possible as both the armies suffered a lot.The shape of the battleground is square. To win the war is to conquer the flag first by the opposite army and place the flag post at the exact center of the battlefield. Can you please help them in placing the flag post at the exact center? Given the coordinates of the left bottom vertex of the square ground and the length of the side of the battlefield, you need to write a program to determine the coordinates of the center of the ground. 

Solution:
#include<stdio.h>
int main()
{
    int x,y,len;
    scanf("%d %d %d",&x,&y,&len);
    int center1=x+len/2;
    int center2=y+len/2;
    printf("%d %d",center1,center2);
    return 0;
}
