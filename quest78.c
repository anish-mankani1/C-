/*


*/
#include<stdio.h>

int main()
{
    int maths,physics,english;
    printf("enter the value of maths");
    scanf("%d",&maths);
     printf("enter the value of physics");
    scanf("%d",&physics);
     printf("enter the value of english");
    scanf("%d",&english);
    int total=maths+english+physics;
    if((maths>65 && physics>65 && english>65)||total>140)
    {
        printf("student will get admission");
    }
    else{
        printf("student does not get admission");
    }
    

    return 0;
}