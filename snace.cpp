
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

const int width = 20;
const int height = 20;
int x, y, fruitCordX, fruitCordY, playerScore, snakeTailLen;
int snakeTailX[100], snakeTailY[100];
bool isGameOver;

enum snakesDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
snakesDirection sDir;

void GameInit()
{
    isGameOver = false;
    sDir = STOP;
    x = width / 2;
    y = height / 2;
    fruitCordX = rand() % width;
    fruitCordY = rand() % height;
    playerScore = 0;
}

void GameRender(string playerName)
{
    system("cls");
    for (int i = 0; i < width + 2; i++)
        cout << "-";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= width; j++)
        {
            if (j == 0 || j == width)
                cout << "|";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitCordY && j == fruitCordX)
                cout << "#";
            else
            {
                bool prTail = false;
                for (int k = 0; k < snakeTailLen; k++)
                {
                    if (snakeTailX[k] == j && snakeTailY[k] == i)
                    {
                        cout << "o";
                        prTail = true;
                    }
                }
                if (!prTail)
                    cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "-";
    cout << endl;

    cout << playerName << "'s Score: " << playerScore << endl;
}

void UpdateGame()
{
    int prevX = snakeTailX[0];
    int prevY = snakeTailY[0];
    int prev2X, prev2Y;
    snakeTailX[0] = x;
    snakeTailY[0] = y;

    for (int i = 1; i < snakeTailLen; i++)
    {
        prev2X = snakeTailX[i];
        prev2Y = snakeTailY[i];
        snakeTailX[i] = prevX;
        snakeTailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (sDir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    if (x > width || x < 0 || y > height || y < 0)
        isGameOver = true;

    for (int i = 0; i < snakeTailLen; i++)
    {
        if (snakeTailX[i] == x && snakeTailY[i] == y)
            isGameOver = true;
    }

    if (x == fruitCordX && y == fruitCordY)
    {
        playerScore += 10;
        fruitCordX = rand() % width;
        fruitCordY = rand() % height;
        snakeTailLen++;
    }
}

void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            sDir = LEFT;
            break;
        case 'd':
            sDir = RIGHT;
            break;
        case 'w':
            sDir = UP;
            break;
        case 's':
            sDir = DOWN;
            break;
        case 'x':
            isGameOver = true;
            break;
        default:
            break;
        }
    }
}

int main()
{
    GameInit();
    while (!isGameOver)
    {
        GameRender("Player");
        Input();
        UpdateGame();
        Sleep(50);
    }
    return 0;
}
// ```

// This code uses the `conio.h` library to detect keyboard input and the `windows.h` library to clear the console screen. The game board is rendered using ASCII characters, and the player controls the snake using the `w`, `a`, `s`, and `d` keys. The game ends if the snake hits a wall or its own tail.

// I hope this helps! Let me know if you have any questions.

// Source: Conversation with Bing, 07/01/2024
// (1) Snake Code in C++ - GeeksforGeeks. https://www.geeksforgeeks.org/snake-code-cpp/.
// (2) C++ Snake Game (Simple!) - Instructables. https://www.instructables.com/C-Snake-Game-Simple/.
// (3) Snake Game | Learn How to Make a Snake Game in C++. https://www.instructables.com/Snake-Gamelearn-How-to-Make-a-Snake-Game-in-C/.
// (4) undefined. http://bloodshed-dev-c.en.softonic.com.
// (5) github.com. https://github.com/ilyabodo/basic-snake/tree/8a1ee1c7bb4d6972e6dd7e50c8b9b9c9ec7adee8/main.cpp.
// (6) github.com. https://github.com/nv-she-a2/Snake-Game/tree/1898603f9a6de67e51bdfeb65bc704af9b128035/snakeGame.cpp.
// (7) github.com. https://github.com/faxpr/CPP/tree/68cdebc648cbff5770a1f04d141200fbce4ead6e/main.cpp.
// (8) github.com. https://github.com/stonecoldanmol/Snake-Game/tree/e4aa80dd314577871164bb0132fa2271af483381/main.cpp.