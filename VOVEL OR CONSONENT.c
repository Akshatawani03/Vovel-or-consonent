#include <stdio.h>
int main()
{
    char c;
    printf("\nEnter a Character:");
    scanf("%c",&c);
    if (c=='a'||c=='e'||c=='i'||c=='O'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("\nEntered Chracter is VOVEL",c);
    }
    else
    {
        printf("\n Entered Character is CONSONENT",c);
    }      

    return 0;
}