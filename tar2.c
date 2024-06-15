#include <stdio.h>
#include <math.h>

float area ( float a, float b, float c);

int main (){
    float areaTriangulo, a, b, c;
    areaTriangulo = area(a,b,c);
    printf("El area es: %f", areaTriangulo);
    printf("\n");

}
float area (float a, float b, float c){
    float area;
    float p;
    printf("medida del lado 1");
    scanf("%f", &a);
    printf("medida del lado 2");
    scanf("%f", &b);
    printf("medida del lado 3");
    scanf("%f", &c);
    p = (a + b+ c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}