#include <raylib.h>
#include <stdio.h>

#define WIDTH 900
#define HEIGHT 600


#define WIDTH 900
#define HEIGHT 600

#define COUNT 10

int numbers[COUNT];

void draw_bars()
{
    for ( int i = 0; i < COUNT; i++)
    {
        int value = numbers[i];
        DrawRectangle(i*50,HEIGHT*0.75,20,value*HEIGHT*0.75/COUNT,WHITE);
    }
    
}

int main()
{
    for (int i = 0; i < COUNT; i++)
    {
        numbers[i]=i;
        printf("numbers[i] = %d\n", numbers[i]);
    }    

    InitWindow(WIDTH, HEIGHT, "Sort Visual");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        
        //desenhar as barras
        draw_bars();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}