
#include <string.h>
main (){
   char a[50], b[50];
   printf ("enter a source string");
   scanf("%s", a);
   printf("enter destination string");
   scanf("%s",b);
   strcpy ( b,a);
   printf ("copied string = %s",b);
   getch ();
}
