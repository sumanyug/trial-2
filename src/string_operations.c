#include <stdio.h>
char *strct(char *s1,char *s2){
	char *strct = s1;
	return strct;


}

size_t my_strlen(const char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] =
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)

   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}

char *mycpy(char *t){
  char*p = t;
  return p;
}
