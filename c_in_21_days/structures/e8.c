/* Using the typedef from exercise 7, allocate and initialize an element called myaddress */

#include<stdio.h>

typedef struct
{
        char *address1;
        char *address2;
        char *city;
        char *state;
        char *Zip;
}RECORD;

int main(void)
{
	RECORD myaddress;

	 myaddress.address1 = "Vyvian Estate";


	printf("\nAddress1:%s\n", myaddress.address1);
        return(0);
}

