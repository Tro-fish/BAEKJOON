#include <stdio.h>
#include <math.h>

/*double dist(double point1[],double point2[]);
double max_dist(double dist1,double dist2);
*/

int main()
{
    double x, y = 0;
    double point[3][2];
    // (1,2) (3,5) (6,9)
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf %lf", &x, &y);
        point[i][0] = x;
        point[i][1] = y;
    }

    // printf("%f\n",point[0][0]);

    double apo[2] = {point[0][0], point[0][1]};
    double bpo[2] = {point[1][0], point[1][1]};
    double cpo[2] = {point[2][0], point[2][1]};

    double disAB = sqrt((apo[0] - bpo[0]) * (apo[0] - bpo[0]) + (apo[1] - bpo[1]) * (apo[1] - bpo[1]));
    double disAC = sqrt((apo[0] - cpo[0]) * (apo[0] - cpo[0]) + (apo[1] - cpo[1]) * (apo[1] - cpo[1]));

    double max = disAB;
    // printf("disAB is %f, dis AC is %f\n",disAB,disAC);

    if (disAC >= disAB)
    {
        max = disAC;
    }

    printf("%.2lf", max);
}

/*double dist(double point1[], double point2[]){
   return sqrt();
}
double max_dist(double dist1, double dist2){
   return;
}*/