#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

struct coordinate
{
    int x, y, direction;
};

typedef struct coordinate coordinate;

coordinate head, bend[500], food, body[30];
int length = 5, bend_no = 0, life = 3;
char key;

void gotoxy(int x, int y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Delay(long double k)
{
    for (long double i = 0; i <= 10000000; i++);
}

void Boarder()
{
    system("cls");
    gotoxy(food.x, food.y);
    printf("F");
    for (int i = 10; i < 71; i++)
    {
        gotoxy(i, 10);
        printf("#");
        gotoxy(i, 30);
        printf("#");
    }
    for (int i = 10; i < 31; i++)
    {
        gotoxy(10, i);
        printf("#");
        gotoxy(70, i);
        printf("#");
    }
}

void Food()
{
    if (head.x == food.x && head.y == food.y)
    {
        length++;
        srand(time(0));
        food.x = rand() % 60 + 11;
        food.y = rand() % 20 + 11;
    }
    else if (food.x == 0)
    {
        food.x = rand() % 60 + 11;
        food.y = rand() % 20 + 11;
    }
}

void Move();
void ExitGame();

void Up()
{
    for (int i = 0; i <= (bend[bend_no].y - head.y) && i < length; i++)
    {
        gotoxy(head.x, head.y - i);
        printf(i == 0 ? "^" : "*");
        body[i] = (coordinate)
        {
            head.x, head.y - i
        };
    }
    if (!kbhit()) head.y--;
}

void Down()
{
    for (int i = 0; i <= (head.y - bend[bend_no].y) && i < length; i++)
    {
        gotoxy(head.x, head.y + i);
        printf(i == 0 ? "v" : "*");
        body[i] = (coordinate)
        {
            head.x, head.y + i
        };
    }
    if (!kbhit()) head.y++;
}

void Left()
{
    for (int i = 0; i <= (bend[bend_no].x - head.x) && i < length; i++)
    {
        gotoxy(head.x - i, head.y);
        printf(i == 0 ? "<" : "*");
        body[i] = (coordinate)
        {
            head.x - i, head.y
        };
    }
    if (!kbhit()) head.x--;
}

void Right()
{
    for (int i = 0; i <= (head.x - bend[bend_no].x) && i < length; i++)
    {
        gotoxy(head.x + i, head.y);
        printf(i == 0 ? ">" : "*");
        body[i] = (coordinate)
        {
            head.x + i, head.y
        };
    }
    if (!kbhit()) head.x++;
}

void Move()
{
    do
    {
        Food();
        Delay(length);
        Boarder();
        if (head.direction == RIGHT) Right();
        else if (head.direction == LEFT) Left();
        else if (head.direction == DOWN) Down();
        else if (head.direction == UP) Up();
        ExitGame();
    }
    while (!kbhit());

    key = getch();
    if (key == 27) exit(0);

    if ((key == RIGHT && head.direction != LEFT) ||
            (key == LEFT && head.direction != RIGHT) ||
            (key == UP && head.direction != DOWN) ||
            (key == DOWN && head.direction != UP))
    {
        bend[++bend_no] = head;
        head.direction = key;
        Move();
    }
    else Move();
}

void ExitGame()
{
    for (int i = 4; i < length; i++)
    {
        if (body[0].x == body[i].x && body[0].y == body[i].y)
        {
            life--;
            if (life >= 0)
            {
                head = (coordinate)
                {
                    25, 20, RIGHT
                };
                bend_no = 0;
                Move();
            }
            else
            {
                system("cls");
                printf("Game Over! Better luck next time!\n");
                exit(0);
            }
        }
    }
    if (head.x <= 10 || head.x >= 70 || head.y <= 10 || head.y >= 30)
    {
        life--;
        if (life >= 0)
        {
            head = (coordinate)
            {
                25, 20, RIGHT
            };
            bend_no = 0;
            Move();
        }
        else
        {
            system("cls");
            printf("Game Over! Better luck next time!\n");
            exit(0);
        }
    }
}

void PrintIntro()
{
    printf("Welcome to the Snake Game! Press any key to start.\n");
    getch();
    system("cls");
    printf("Game Instructions:\n");
    printf("- Use arrow keys to move.\n");
    printf("- Eat food (F) to grow.\n");
    printf("- Avoid walls and yourself.\n");
    printf("- You have 3 lives.\n");
    printf("Press any key to begin...");
    getch();
}

int main()
{
    PrintIntro();
    system("cls");
    head = (coordinate)
    {
        25, 20, RIGHT
    };
    Boarder();
    Food();
    bend[0] = head;
    Move();
    return 0;
}

