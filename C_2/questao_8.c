#include <stdio.h>
#include <math.h>
#define RAIO 6371

int main(){

    double latitude1, latitude2, longitude1, longitude2;
    double latitude_rad1, longitude_rad1, latitude_rad2, longitude_rad2;
    double delta_latitude, delta_longitude, distancia;
    printf("Me de a latitude e longitude dos pontos A e B que eu calcularei a distancia deles no planeta Terra (obs: usando a formula de Haversine)\n");
    printf("Ponto A\n");
    scanf("%lf", &latitude1);
    scanf("%lf", &longitude1);
    printf("Ponto B\n");
    scanf("%lf", &latitude2);
    scanf("%lf", &longitude2);
    latitude_rad1 = latitude1 * (M_PI/180);
    latitude_rad2 = latitude2 * (M_PI/180);
    longitude_rad1 = longitude1 * (M_PI/180);
    longitude_rad2 = longitude2 * (M_PI/180);
    delta_latitude = latitude_rad1 - latitude_rad2;
    delta_longitude = longitude_rad1 - longitude_rad2;
    distancia = 2*RAIO*asin(pow((pow(sin((delta_latitude/2)),2)+cos(latitude1)*cos(latitude2)*(pow((sin((delta_longitude/2))), 2))), 0.5));
    printf("Distancia = %.2lf quilometros", distancia);
    return 0;

}