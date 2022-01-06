#include <stdio.h>
struct student
{
  char name[50];
  int roll;
  float marks;
} s[100];
int
main ()
{
  int i, n, rn, k;
  struct student s[100];
  printf ("Enter total of students:\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      printf ("\n Enter information of student %d:\n", i + 1);
      printf ("Enter name: ");
      scanf ("%s", s[i].name);
      printf ("Enter roll number: ");
      scanf ("%d", &s[i].roll);
      printf ("Enter marks: ");
      scanf ("%f", &s[i].marks);
      printf("------------------------------------\n");
    }
    printf("Displaying Information:\n");
for(i=0;i<n;i++)
{
printf("\n %d no. student info\n",i+1);
printf("\tName:%s\n ",s[i].name);

printf("\t Roll number: %d\n",s[i].roll);

printf("\t Marks: %.1f\n\n",s[i].marks);

}
  printf ("Type Roll number to search student details:\n");
  scanf ("%d", &rn);
  for (i = 0; i < n; i++)
    {
      if (s[i].roll == rn)
	{
	  k = i;
	  printf ("\n Record found at position no %d \n", k + 1);
	  printf ("\tName:%s\n ", s[k].name);
	  printf ("\t Roll number: %d\n", s[k].roll);
	  printf ("\t Marks: %.1f\n\n", s[k].marks);
	}
    }
  return 0;
}