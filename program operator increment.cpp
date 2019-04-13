# include <stdio.h>

main () {

	int count, loop;

	count = 0;

		loop = ++count; /* count=count+1; loop=count; */

			printf("loop = %d, count = %d\n", loop, count);

		loop = count++; /* loop=count; count=count+1; */

			printf("loop = %d, count = %d\n", loop, count);

}
