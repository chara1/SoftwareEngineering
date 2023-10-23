#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    {
        printf("i Outer loop number %d\n", i);

        // Inner loop
        for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\t j Inner loop number %d\n", j);  // note the use of the tab (\t) option at the start to improve the layout
            
            //Task - Write another level of nesting here
            for (int t = 1; t <= 5; t++)
            {
                printf("\t t Inner loop number %d\n", t);  // note the use of the tab (\t) option at the start to improve the layout

            }
            
        }
    }
}
