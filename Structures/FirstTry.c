#include <stdio.h>

int main()
{
	struct book { char name; float price ; int pages;};

	struct book b1, b2, b3;
	
	printf("Enter names, price and pages of 3 books\n");

	scanf("%c %f %i", &b1.name, &b1.price, &b1.pages);
	scanf(" %c %f %i", &b2.name, &b2.price, &b2.pages);
	scanf(" %c %f %i", &b3.name, &b3.price, &b3.pages);

	printf("this is what has been entered:\n");

	printf("%c %f %i\n", b1.name, b1.price, b1.pages);
	printf("%c %f %i\n", b2.name, b2.price, b2.pages);
	printf("%c %f %i\n", b3.name, b3.price, b3.pages);

	return 0;
}
