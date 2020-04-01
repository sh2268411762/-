/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, e, f;
    for (a = 1; a <= 6; a++)
    {
        for (b = 1; b <= 6; b++)
        {
            for (c = 1; c <= 6; c++)
            {
                for (d = 1; d <= 6; d++)
                {
                    for (e = 1; e <= 6; e++)
                    {
                        for (f = 1; f <= 6; f++)
                        {
                            if (a != b && a != c && a != d && a != e && a != f
                                && b != c && b != d && b != e && b != f
                                && c != d && c != e && c != f
                                && d != e && d != f)
                            {
                                if (a + b + c == a + d + f && a + b + c == c + e + f && a + d + f == c + e + f)
                                {
                                    printf("  %d\n", a);
                                    printf(" %d %d\n", d, b);
                                    printf("%d %d %d\n", f, e, c);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}//														a
   //                                                  / \
     //                                               d   b
          //                                         /     \
        //                                          f---e---c
         //                                         用1~6这六个自然数组成一个三角形，并让这个三角形三条边上数字之和相等             
*/