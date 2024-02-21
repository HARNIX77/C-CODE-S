#include<stdio.h>
int main()
{
    float dis,tim,con;
    printf("enter the distance travelled in kilometers==>");
    scanf("%f",&dis);
    printf("enter time taken for travelling in hours==>");
    scanf("%f",&tim);

    con=dis/tim;

    printf("average consumption==>%f km/h\n",con);
    return 0;
}