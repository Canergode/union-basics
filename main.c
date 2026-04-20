#include <stdio.h>
#include <stdlib.h>

// Define a union with three different types
union Data
{
    char a;
    int x;
    float y;
};

int main()
{
    union Data data;

    // Assign and print integer value
    data.x=2;
    printf("%d\n",data.x);

    // Print the size of the union (equalsthe largest member)
    printf("Our union occupies %d bytes\n",sizeof(data));

    // Assign and print float value
    // Note:this overwrites the pervious int value
    data.y=10;
    printf("%.2f",data.y);

    return 0;
}
