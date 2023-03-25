#include <stdio.h>
#include <unistd.h>
void abtoba (void)
{
char c;
char t;
char r;
int i;
r = 'G';
t = r;
while (r >= 'A')
{
c = 'A';
while (c <= r)
{
write (1, &c, 1);
if (c == 'G')
{
c++;
continue;
}
write (1, " ", 1);
c++;
}
c = c - 1;
if (c != 'G')
{
i = 4 * (t - r) - 3;
while (i != 0)
{
write (1, " ", 1);
i--;
}
}
while (c >= 'A')
{
if (c == 'G')
{
c--;
continue;
}
write (1, " ", 1);
write (1, &c, 1);
c--;
}
write (1, "\n", 1);
r--;
}
}
int main ()
{
abtoba ();
}
