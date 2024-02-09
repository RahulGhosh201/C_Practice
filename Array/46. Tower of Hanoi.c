#include <stdio.h>

void toh(int num_disks, char source, char destination, char auxiliary)
{
    if (num_disks == 1)
    {
        printf("Move disk  1 from %c to %c\n", source, destination);
        return;
    }

    toh(num_disks - 1, source, auxiliary, destination);
    printf("Move disk from %d from %c to %c\n", num_disks, source, destination);
    toh(num_disks - 1, auxiliary, destination, source);
}

int main()
{
    int num_disks = 3;
    printf("The sequence of moves involved are: \n");
    toh(num_disks, 'A', 'C', 'B');
    return 0;
}