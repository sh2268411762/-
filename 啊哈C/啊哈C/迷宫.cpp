/*
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char a[100][100] = { "#########################################################",
                      "#O #       ###       #####      ##   ##    ##     ##     ",
                      "# ##       ###       ##         ##   ##     ##   ##     #",
                      "#  #   ##            #####      #######      ## ##      #",
                      "##   #######            ##      ##   ##        #        #",
                      "###   #       ##     #####      ##   ##        #        #",
                      "    #  ##### #                            ##   ##       #",
                      "   ##   ###     ######   ##   ##           ## ##        #",
                      "  ##     #          ##    ## ##             ##    ###   #",
                      "     # #           ##      ###            ## ##    ###  #",
                      "  #####           ##       ###           ##   ##    ### #",
                      "    ######       ##       ## ##     ###            ###  #",
                      "###    ##       ######   ##   ##        #####     ###   #",
                      "   ##                            ## ###                 #",
                      "#########################################################",
    };
    int i, x, y, p, q;
    char ch;

    x = 1; y = 1; p = 1; q = 14;
    for (i = 0; i <= 14; i++)
        puts(a[i]);

    while (x != p || y != q)
    {
        ch = getchar();
        if (ch == 's')
        {
            if (a[x + 1][y] != '#')
            {
                a[x][y] = ' ';
                x++;
                a[x][y] = 'O';
            }
        }

        if (ch == 'w')
        {
            if (a[x - 1][y] != '#')
            {
                a[x][y] = ' ';
                x--;
                a[x][y] = 'O';
            }
        }

        if (ch == 'a')
        {
            if (a[x][y - 1] != '#')
            {
                a[x][y] = ' ';
                y--;
                a[x][y] = 'O';
            }
        }

        if (ch == 'd')
        {
            if (a[x][y + 1] != '#')
            {
                a[x][y] = ' ';
                y++;
                a[x][y] = 'O';
            }
        }
        system("cls");
        for (i = 0; i <= 14; i++)
            puts(a[i]);
    }

    Sleep(5000);
    printf("You win!\n");
    return 0;
}
*/