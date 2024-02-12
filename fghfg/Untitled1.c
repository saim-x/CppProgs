
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct personal_info
{
    int id;
    char name[20];
};

struct Departement_info
{
    int id;
    char salary[20];
};
//personal txt
void personal_txt(){
    FILE *fp;
    fp = fopen("personal.txt", "w");
    struct personal_info p1[3];
    p1[0].id = 101;
    strcpy(p1[0].name, "Zeeshan");
    p1[1].id = 102;
    strcpy(p1[1].name, "Shiraz");
    p1[2].id = 103;
    strcpy(p1[2].name, "Bilal");
    for (int i = 0; i < 3; i++)
    {
        fprintf(fp, "%d %s\n", p1[i].id, p1[i].name);
    }
    fclose(fp);

}
void Departement_txt(){
    FILE *fp;
    fp = fopen("Departement.txt", "w");
    struct Departement_info p2[3];
    p2[0].id = 103;
    strcpy(p2[0].salary, "50000");
    p2[1].id = 101;
    strcpy(p2[1].salary, "45000");
    p2[2].id = 102;
    strcpy(p2[2].salary, "55000");
    for (int i = 0; i < 3; i++)
    {
        fprintf(fp, "%d %s\n", p2[i].id, p2[i].salary);
    }
    fclose(fp);
}
int main() {
    system("cls");
    personal_txt();
    Departement_txt();
    printf("The code comes now");
    //getinfo
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("personal.txt", "r");
    fp2 = fopen("Departement.txt", "r");
    if (fp1 == NULL)
    {
        printf("Error opening file!\n");
        sleep(1);
        return 0;
    }
    if (fp2 == NULL)
    {
        printf("Error opening file!\n");
        sleep(1);
        return 0;
    }
    struct personal_info p1[3];
    struct Departement_info p2[3];
    for (int i = 0; i < 3; i++)
    {
        fscanf(fp1, "%d %s\n", &p1[i].id, p1[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        fscanf(fp2, "%d %s\n", &p2[i].id, p2[i].salary);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}




    // char c;
    // printf("\n\n\nThe base information is:\n");

    // while ((c = getc(file)) != EOF)
    // {
    //     printf("%c", c);
    // }
    // sleep(5);
    // fclose(file);
