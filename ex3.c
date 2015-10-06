#include <stdio.h>
int main(int argc, char const *argv[]) {

    int age;
    int height = 72;

    printf("Enter your age : ");
    scanf("%d", &age );

    printf("Enter your height : ");
    scanf("%d", &height );

    printf("I am %d years old\n", age );
    printf("I am %d cm tall\n", height );

    return 0;
}
