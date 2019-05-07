#include <conio.h>
#include <iostream.h>

int main()
{
int num;
cout << "angka angka kuadtrat \n";
cout << "-------------------------- \n";
for (num = 1; num <= 10; num++)
cout << num << "\t\t" << (num * num) << endl;
getch();
return 0;
}
