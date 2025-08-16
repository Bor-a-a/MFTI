/*
G15
� ����� input.txt ���� �����������.
���������� �������� ��� ����� �Cao� �� �Ling�
 � �������� ��������� � ���� output.txt.
*/

#include <stdio.h>
#include <string.h>

#define CoM 1001

void namechanger (char SIn[], char SOut[], int *pos_1, int *pos_2) {
    int pks = 0; //������� ����� ������
    int pkw = 0; //������� ����� �����
    int ps = 0; //������� �������� �����
    //��������, ��� �������� ������ ��� ��� ����� � ������
    if (strlen(SIn) < (*pos_1)+2) {
        SOut[*pos_2] = 'C';
        (*pos_1)++;
        (*pos_2)++;
        return;
    }
    //�������� �������� �����
    if ((SIn[*pos_1+1] == 'a') && (SIn[*pos_1+2] == 'o'))
        ps = 1;
    //�������� ����, ��� ������ �������� ������
    if (strlen (SIn) - *pos_1 == 2)
        pks = 1;
    //�������� ����, ��� ����� ��������� PS - ���������, ��� �� ����?
    //if  (((SIn[*pos_1+3] < 'A') ||(SIn[*pos_1+3] > 'z')) && (pks == 0))
        pkw = 1;
    if ((ps == 1) && ((pks == 1) || (pkw == 1))) {
        SOut[*pos_2] = 'L';
        SOut[*pos_2+1] = 'i';
        SOut[*pos_2+2] = 'n';
        SOut[*pos_2+3] = 'g';
        *pos_1 = *pos_1+3;
        *pos_2 = *pos_2+4;
    }
        else {
        SOut[*pos_2] = 'C';
        (*pos_1)++;
        (*pos_2)++;
        }
}


int main (void) {
    FILE *f, *f1;
    char S1[CoM], S2[CoM];
    int counter_1 = 0, counter_2 = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%[^\n]s", S1);
    printf ("Schitano: %s\n", S1);
    while (counter_1 < strlen (S1)) {
        if (S1[counter_1] != 'C') {
            S2[counter_2] = S1[counter_1];
            counter_1++;
            counter_2++;
        }
        else
        namechanger (S1, S2, &counter_1, &counter_2);
    }
    S2[counter_2] = '\0';
    printf ("%s", S2);
    fprintf (f1, "%s", S2);
    fclose (f);
    fclose (f1);
    return 0;
}
