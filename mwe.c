#include <stdio.h>

void writetoawg(unsigned int* data)
{
	if (data[3])
		printf("Hello");
	else
		printf("Goodbye");

	if (data[2])
		printf("Hello");
	else
		printf("Goodbye");

}

void strrev(unsigned int* data, unsigned int end)
{
    unsigned int temp;
    unsigned int start = 0;

    while (start < end)
    {
        temp = data[start];   
        data[start] = data[end];
        data[end] = temp;
        start++;
        end--;
    }   
}     


void tobinstr(unsigned long long int value, unsigned int bitsCount, unsigned int* output)
{
	for (int i=(bitsCount-1); i>=0; --i, value>>=1)
		output[i] = (value & 1) + 0;
}


int main(void)
{
	unsigned long long int decimal = 0;
	unsigned int data[19] = {0};
	
	// 10^{18}
	decimal = 4;
	
	tobinstr(decimal, 19, data);

	for(int i=0;i<19;i++) 
		printf("%d", data[i]);

	printf("\n");

	strrev(data, sizeof(data)/sizeof(data[0]) - 1);

	if (data[4])
		printf("Yep");
	else
		printf("Nein");


	printf("\n");

	for(int i=0;i<19;i++) 
		printf("%d", data[i]);

	printf("\n");

	writetoawg(data);

	printf("\n");
}