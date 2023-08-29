#include <cs50.h>
#include <stdio.h>

int main(void)
{
int start_population, end_population, years = 0;
do {
        printf("Start size：");
        scanf("%d", &start_population);
    } while (start_population < 9);
    // TODO: Prompt for start size
do {
        printf("End size：");
        scanf("%d", &end_population);
    } while (end_population < start_population);  
    // TODO: Prompt for end size
 while (start_population < end_population) {
        int newborn_camels = start_population / 3;
        int dead_camels = start_population / 4;
        start_population = start_population + newborn_camels - dead_camels;
        years++;
    }
    // TODO: Calculate number of years until we reach threshold
   printf("Years: %d\n", years);

    return 0;
    // TODO: Print number of years
}
