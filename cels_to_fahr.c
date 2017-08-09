#include <stdio.h>

main()
{
	float cels, fahr;
	int upper, lower, step;
	
	lower = -20;
	upper = 160;
	step = 20;
	
	printf("C\tF\n");
	cels = lower;
	while(cels <= upper){
		fahr = ((9.0/5.0) * cels) + 32.0;
		printf("%3.0f\t%6.1f\n", cels, fahr);
		cels = cels + step;
	}
}

