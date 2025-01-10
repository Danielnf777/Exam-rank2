#include <unistd.h>

int     main(int ac, char **av)
 {
         int     i;
         int     flag;

         i = 0;
         flag = 0;
         if (ac == 2)
         {
                 while (av[1][i] == ' ' || av[1][i] == 9)
                         i++;
                 while (av[1][i])
                 {
                         if (av[1][i] == ' ' || av[1][i] == 9)
                                 flag = 1;
                         if (av[1][i] != ' ' && av[1][i] != 9)
                         {
                                 if (flag)
                                         write(1, "   ", 3);
                                 write(1, &av[1][i], 1);
                                 flag = 0;
                         }
                         i++;
                 }
         }
         write(1, "\n", 1);
         return (0);
 }

