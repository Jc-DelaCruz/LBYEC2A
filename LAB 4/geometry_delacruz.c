#include <stdio.h> 
#include <math.h>
#define pi 3.1415929

// FUNCTIONS
float sphereVolume(float r);
float sphereSurface(float r);
float cylinderVolume(float r, float h);
float cylinderSurface(float r, float h);
float coneVolume(float r, float h);
float coneSurface(float r, float h);
// In the main, prompt the user for the values of r and h, call the six functions, and print the result.

//main 
int main(){
    float r, h; 
    
    printf("============================================\n");
    printf("ENTER YOUR RADIUS AND HEIGHT VALUE: (x, y):");
    printf("\n============================================\n");
    scanf("%f %f", &r, &h);
           
    printf("\n\nVolume of a sphere: %.3f", sphereVolume(r)); 
    printf("\nSurface of a sphere: %.3f", sphereSurface(r)); 
    printf("\nVolume of a cylinder: %.3f", cylinderVolume(r, h)); 
    printf("\nSurface of a cylinder: %.3f", cylinderSurface(r, h));   
    printf("\nVolume of a cone: %.3f", coneVolume(r, h));
    printf("\nSurface of a cone: %.3f", coneSurface(r, h));

    return 0;
}


float sphereVolume(float r)
{
    float result;
    result = (4 * pi * (r * r * r)) / 3;
    return result;                 
}

float sphereSurface(float r)
{
    float result;
    result = 4 * pi * (r * r);
    return result;   
}

float cylinderVolume(float r, float h)
{
    float result;
    result = pi * (r * r) * h;
    return result;   
}

float cylinderSurface(float r, float h)
{
    float result;
    result = ((2 * pi) * r * h) + ((2 * pi) * (r * r));
    return result;
}

float coneVolume(float r, float h)      
{
    float result;
    result = (pi * (r * r)) * h / 3;
    return result;   
}

float coneSurface(float r, float h)      
{
    float result, sqr;
    sqr = sqrt((r * r) + (h * h));
    result = (pi * r) * (r + sqr);
    return result;   
}