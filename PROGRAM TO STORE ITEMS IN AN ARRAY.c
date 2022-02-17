/*PROGRAM TO STORE ITEMS IN AN ARRAY AT RUNTIME INNITIALIZATION*/
#include<stdio.h>
#include<conio.h>
main()
{	

	int arr[5],i;

{
	//storing items in an array
	printf("Inializing array items\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nDisplaying array items\n");
	for(i=0;i<5;i++)
	{
		printf("\nItem at index [%d]=%d\n",i,arr[i]);
	}
}
getch();
}
