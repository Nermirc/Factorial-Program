#include <stdio.h>
#include <stdlib.h>


    int faktoriyel(int sayim)
    {
        int i;
        int sonuc=1;
        for(i=1;i<=sayim;i++)
        {
            sonuc=sonuc*i;
        }
        return sonuc;
    }

int main()
{
    //Klavyeden girilen bir tamsayinin faktoriyelini hesaplayan bir C program� yaz�n�z.
    int sayi;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&sayi);
    printf("%d! == %d",sayi,faktoriyel(sayi));
}
