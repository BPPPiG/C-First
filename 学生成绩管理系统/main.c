#include <stdio.h>
#include <stdlib.h>

int main()
{
    void SortScore(int score[],long int num[],int n){
        int i,j,temp;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(score[j]>score[i]){
                temp=score[j];
                score[j]=score[i];
                score[i]=temp;
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
                }
            }
        }
    }



    void OutPutScore(int score[],long int num[],int n)
    {
        for(int i=0;i<n;i++){
        printf("��%d�� %ld %d��\n",i+1,num[i],score[i]);
    }
        printf("\n\n\n");
    }



    void SearchNum(long int num[],int score[],int n){
        long int x;
        printf("������ѧ��:");
        scanf("%ld",&x);
        for(int i=0;i<n;i++){
            if(num[i]==x)
                printf("��%d�� %d��\n\n\n",i+1,score[i]);
        }
    }



    void StatisticsScore(int score[],int n){
        int A=0,B=0,C=0,D=0,E=0;
        for(int i=0;i<n;i++){
            if(score[i]>=90)
                A++;
            if(score[i]>=80&&score[i]<90)
                B++;
            if(score[i]>=70&&score[i]<80)
                C++;
            if(score[i]>=60&&score[i]<70)
                D++;
            if(score[i]>=0&&score[i]<60)
                E++;
        }

        printf("\"����\"��%d��,ռ��Ϊ%.2f\n",A,(float)A/(A+B+C+D+E));
        printf("\"����\"��%d��,ռ��Ϊ%.2f\n",B,(float)B/(A+B+C+D+E));
        printf("\"�е�\"��%d��,ռ��Ϊ%.2f\n",C,(float)C/(A+B+C+D+E));
        printf("\"����\"��%d��,ռ��Ϊ%.2f\n",D,(float)D/(A+B+C+D+E));
        printf("\"������\"��%d��,ռ��Ϊ%.2f\n",E,(float)E/(A+B+C+D+E));
        printf("\n\n\n");
    }



    int a=1,n=0;
    printf("����ѧ������(n<=30):");
    scanf("%d",&n);
    if(n>30){
        printf("�ѳ����������");
    }
    long int num[n];
    int score[n];
    while(a>0)
    {
    printf("1.¼��ÿ��ѧ����ѧ�źͿ��Գɼ���\n");
    printf("2.���ɼ��ɸߵ����ų����α�����������ļ�¼�����\n");
    printf("3.��ѧ�Ų�ѯѧ����������Ҫ�����򣩼����Գɼ���������������\n");
    printf("4.�����㣨90~100�������á��еȡ����񡢲�����5�����ͳ��ÿ�����������Լ���ռ�İٷֱȣ������ͳ�ƽ����\n");
    printf("����\"0\"�˳�");
    printf("����������ѡ���ܣ�");
    scanf("%d",&a);
    switch(a){
    case 1:
        for(int i=0;i<n;i++){
        printf("�������%dλѧ��ѧ�ż��ɼ����Կո��������\n",i+1);
        scanf("%ld %d",&num[i],&score[i]);
        }
        SortScore(score,num,n);
        break;
    case 2:
        OutPutScore(score,num,n);
        break;
    case 3:
        SearchNum(num,score,n);
        break;
    case 4:
        StatisticsScore(score,n);
        break;
    default:
        break;
}}
    return 0;
}
