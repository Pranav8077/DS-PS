#include <stdio.h>
int main()
{
    float a, b, c;
    float discriminant, root1, root2, realpart, imaginarypart;
    printf("Enter cofficients of a,b and c -> ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0){

        root1 = -b - discriminant / 2 * a;
    root2 = -b + discriminant / 2 * a;
    printf("Roots are real and equal");
    printf("Root 1=%.2f\n ", root1);
    printf("Root 2=%.2f\n ", root2);
}
else if (discriminant == 0)
{
    root1 = root2 = -b / (2 * a);
    printf("Roots are real and equal.\n");
    printf("Root 1 = Root 2 = %.2f\n", root1);
}
 else {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realpart, imaginarypart);
        printf("Root 2 = %.2f - %.2fi\n", realpart, imaginarypart);
    }

    return 0;

}