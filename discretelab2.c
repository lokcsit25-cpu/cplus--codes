//wap to print truth table of conjunction(and) and disjunction(or) operation.
#include<stdio.h>
int main()
{
    enum truthvalue {F=0,T=1};
    int p,q;
    printf("P  Q  (P ^ Q) (P V Q)\n");
    for(p=F;p<=T;p++)
    {
        for(q=F;q<=T;q++)
        {
            printf("%s  %s \t %s \t %s\n",p?"T":"F",q?"T":"F",(p&&q)?"T":"F",(p||q)?"T":"F");
        }
    }
   

//wap to print truth table of tautology and contradiction operation.

    
     //q=~p
   printf("p ~p (p ^ ~p) (p V ~p)\n");
    for(p=F;p<=T;p++)
    {
        for(q=F;q<=T;q++)
        {
            printf("%s  %s \t %s \t %s\n",p?"T":"F",q?"T":"F",(p && !p)?"T":"F",(p || !p)?"T":"F");
        }
    }
    return 0;
}