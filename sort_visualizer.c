#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 900
#define HEIGHT 600

#define COUNT 50

int numbers[COUNT];

void draw_bars()
{
    for ( int i = 0; i < COUNT; i++)
    {
        int value = numbers[i];
        int bar_height = value*HEIGHT*0.75/COUNT;
        DrawRectangle(((float)i/COUNT)*WIDTH,HEIGHT*0.75 - bar_height,WIDTH/COUNT-2,bar_height,WHITE);
    }
    
}

void swap(int i,int j)
{
    int tmp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = tmp;
}
void init_numbers()
{
    for (int i = 0; i < COUNT; i++)
    {
        numbers[i]=i;
    }
    
    //Fisher Yates Shuffer
    for (int i = COUNT-1; i >= 0; i--)
    {
        //generates a random number between 0 and i
        int j  = rand() % (i + 1); 

        //swap the arrays entries
        swap(i,j);
    }
}

void sort_step()
{
    static int i = 0;
    int current_value = numbers[i];
    int next_value = numbers[i+1];
    
    if (i >= COUNT-1)
    {
        i=0;
        return;
    }
    if (current_value > next_value)
        {
            swap(i,i+1);
        }
    
    i++;
}

int main()
{
    init_numbers();   

    InitWindow(WIDTH, HEIGHT, "Sort Visual");

    SetTargetFPS(COUNT);
    while (!WindowShouldClose())
    {
        sort_step();

        BeginDrawing();
        ClearBackground(BLACK);
        //desenhar as barras
        draw_bars();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}