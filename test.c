#include <stdio.h> 
//����һ���ٷ��Ƶĳɼ�M������ת���ɶ�Ӧ�ĵȼ�������ת���������£� 90~100ΪA; 80~89ΪB; 70~79ΪC; 60~69ΪD; 0~59ΪE;
int main() {
    int T;
    int n;
    char c;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &n);

        if (n >= 90)
            c = 'A';

        else if (n >= 80)
            c = 'B';

        else if (n >= 70)
            c = 'C';

        else if (n >= 60)
            c = 'D';

        else
            c = 'E';

        printf("%c\n", c);
    }
    return 0;
}