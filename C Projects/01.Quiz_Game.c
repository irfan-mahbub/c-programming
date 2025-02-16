#include <stdio.h>

int main() {
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
    int total = 0;

    printf(" READY TO TEST YOUR KNOWLEDGE? LET THE QUIZ BEGIN!\n\n");

    printf("> Press 1 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if (i == 1) {
        printf("The game has started\n\n");

        printf("1) Which function is used to print output in C?\n\n");
        printf("1) input()\n");
        printf("2) output()\n");
        printf("3) printf()\n");
        printf("4) print()\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans1);

        if (ans1 == 3) {
            printf("Correct Answer\n");
            point1 = 5;
        }
        else {
            printf("Wrong Answer\n");
        }
        printf("You have scored %d point\n\n", point1);

        printf("2) What is the correct syntax to declare an integer variable in C?\n\n");
        printf("1) int x;\n");
        printf("2) integer x;\n");
        printf("3) x int;\n");
        printf("4) var x;\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans2);

        if (ans2 == 1) {
            printf("Correct Answer\n");
            point2 = 5;
        }
        else {
            printf("Wrong Answer\n");
        }
        printf("You have scored %d point\n\n", point2);

        printf("3) What device is used to store digital data permanently?\n\n");
        printf("1) RAM\n");
        printf("2) Hard Drive\n");
        printf("3) Processor\n");
        printf("4) Monitor\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans3);

        if (ans3 == 2) {
            printf("Correct Answer\n");
            point3 = 5;
        }
        else {
            printf("Wrong Answer\n");
        }
        printf("You have scored %d point\n\n", point3);

        printf("4) Which social media platform is known for short 280-character posts?\n\n");
        printf("1) Insta\n");
        printf("2) Fb\n");
        printf("3) X\n");
        printf("4) Snap\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans4);

        if (ans4 == 3) {
            printf("Correct Answer\n");
            point4 = 5;
        }
        else {
            printf("Wrong Answer\n");
        }
        printf("You have scored %d point\n\n", point4);

        printf("5) If NULL is nothing, does that mean it's something?\n\n");
        printf("1) NO, it's nothing\n");
        printf("2) YES, it's the idea of nothing\n");
        printf("3) Schrodinger's pointer - it both exists & doesn't\n");
        printf("4) My brain isn't braining\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans5);

        if (ans5 == 3) {
            printf("Correct Answer\n");
            point5 = 5;
        }
        else {
            printf("Wrong Answer\n");
        }
        printf("You have scored %d point\n\n", point5);

        total = point1 + point2 + point3 + point4 + point5;
        printf("Your total score is %d out of 25\n", total);

    } else if (i == 0) {
        printf("The game has ended\n\n");
    } else {
        printf("Invalid input\n\n");
    }

    return 0;
}
