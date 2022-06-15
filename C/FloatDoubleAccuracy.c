#include <stdio.h>

int main()
{
    // Double type constant(3.14) converts to Float type by 
    // truncating it's bits representation 
    float a = 3.14; 
    // Problem: float type 'a' promotes to double type and the value 
    // of 'a'  depends on how many bits added to represent it.
    if(a == 3.14)   
        printf("a: Equal");
    else
        printf("a: Not Equal"); 

    float b = 3.14f; // No type conversion
    if(b == 3.14)    // Problem: Float to Double conversion
        printf("\nb: Equal");
    else
        printf("\nb: Not Equal");

    float c = 3.14; // Double to Float conversion (OK even though is not a good practice )
    if(c == 3.14f)  // No type conversion 
        printf("\nc: Equal");  // OK
    else
        printf("\nc: Not Equal");

    float d = 3.14f;
    if(d == 3.14f)
        printf("\nd: Equal"); // OK
    else
        printf("\nd: Not Equal");

    return 0;
}    