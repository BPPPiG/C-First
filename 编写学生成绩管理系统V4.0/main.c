#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Student{
    long num;
    char name[12];
    int score[6];
    int sum;
    float ave;
}STU;
void PerAve(STU stu[],int n){
    for(int i=0;i<n;i++){
        printf("ѧ�ţ�%ld ������%s �ܷ֣�%d ƽ���֣�%.2f\n",stu[i].num,stu[i].name,stu[i].sum,stu[i].ave);
    }
}
void ClassAve(STU stu[],int n,int m){
    int sum[6];
    float ave[6];
    for(int i=0;i<m;i++){
        sum[i]=0;
        for(int j=0;j<n;j++){
            sum[i]+=stu[j].score[i];
            }
        ave[i]=(float)sum[i]/n;
        printf("��Ŀ%d �ܷ�:%d ƽ���֣�%.2f\n",i+1,sum[i],ave[i]);
    }
}
void Ranking(STU stu[],int n){
    for(int i=0;i<n;i++){
        printf("����:%d ѧ��:%ld ����:%s �ܷ�:%d\n",i+1,stu[i].num,stu[i].name,stu[i].sum);
    }
}
void Swap(STU stu[],int n,int (*p)(int x,int y)){
        int i,j;
        STU temp;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if((*p)(stu[j].sum,stu[i].sum)){
                temp=stu[j];
                stu[j]=stu[i];
                stu[i]=temp;
                }
            }
        }
    };
int Ascending(int x,int y){
    return x<y;
}
int Descending(int x,int y){
    return x>y;
}
void InPut(STU stu[],int n,int m){
        printf("���������ѧ�� ѧ�� ���� �ɼ�\n");
        for(int i=0;i<n;i++){
            stu[i].sum=0;
            printf("�������%dλѧ����Ϣ��",i+1);
            scanf("%ld",&stu[i].num);
            scanf("%s",stu[i].name);
            for(int j=0;j<m;j++){
                scanf("%d",&stu[i].score[j]);
                }
            for(int j=0;j<m;j++){
                stu[i].sum+=stu[i].score[j];
                }
            stu[i].ave=(float)stu[i].sum/m;
            }
        for(int i=0;i<n;i++){
            printf("%ld %s ",stu[i].num,stu[i].name);
            for(int j=0;j<m;j++){
                printf("%d ",stu[i].score[j]);
                }
            printf("%d",stu[i].sum);
            printf("\n");
            }
}
void SearchName(STU stu[],int n,int m){
    char temp[12];
    printf("�������ѯ������:");
    scanf("%s",temp);
    printf("%s\n",temp);
    for(int i=0;i<n;i++){
        if(!strcmp(temp,stu[i].name)){
            printf("����:%d ",i+1);
            for(int j=0;j<m;j++){
                printf("��Ŀ%d:%d ",j+1,stu[i].score[j]);
            }
            printf("\n");

        break;
        }
    }
}
void StatisticsScore(STU stu[],int n,int m){
        int A=0,B=0,C=0,D=0,E=0;
        for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(stu[i].score[j]>=90)
                A++;
            if(stu[i].score[j]>=80&&stu[i].score[j]<90)
                B++;
            if(stu[i].score[j]>=70&&stu[i].score[j]<80)
                C++;
            if(stu[i].score[j]>=60&&stu[i].score[j]<70)
                D++;
            if(stu[i].score[j]>=0&&stu[i].score[j]<60)
                E++;
        }
        printf("��Ŀ%d:\n",j+1);
        printf("\"����\"��%d��,ռ��Ϊ%.2f\n",A,(float)A/(A+B+C+D+E));
        printf("\"����\"��%d��,ռ��Ϊ%.2f\n",B,(float)B/(A+B+C+D+E));
        printf("\"�е�\"��%d��,ռ��Ϊ%.2f\n",C,(float)C/(A+B+C+D+E));
        printf("\"����\"��%d��,ռ��Ϊ%.2f\n",D,(float)D/(A+B+C+D+E));
        printf("\"������\"��%d��,ռ��Ϊ%.2f\n",E,(float)E/(A+B+C+D+E));
        A=B=C=D=E=0;
    }}
void OutPut(STU stu[],int n,int m){
    for(int i=0;i<n;i++){
    printf("ѧ��:%ld ����:%s ",stu[i].num,stu[i].name);
    for(int j=0;j<m;j++){
        printf("��Ŀ%d:%d�� ",j+1,stu[i].score[j]);
    }
    printf("�ܷ�:%d ƽ����:%.2f ",stu[i].sum,stu[i].ave);
    printf("\n");
    }
}
void SortString(STU stu[],int n){
    STU temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(stu[j].name,stu[i].name)<0){
                temp=stu[j];
                stu[j]=stu[i];
                stu[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("����:%d ѧ��:%ld ����:%s �ܷ�:%d\n",i+1,stu[i].num,stu[i].name,stu[i].sum);
        }
};
int main()
{
    int a=1;
    int n,m;

    STU *stu=NULL;
    while(a>0){
        printf("1)	¼��ÿ��ѧ����ѧ�š������͸��ƿ��Գɼ�\n");
        printf("2)	����ÿ�ſγ̵��ֺܷ�ƽ����\n");
        printf("3)	����ÿ��ѧ�����ֺܷ�ƽ����\n");
        printf("4)	��ÿ��ѧ�����ܷ��ɸߵ����ų����α�\n");
        printf("5)	��ÿ��ѧ�����ܷ��ɵ͵����ų��ɼ���\n");
        printf("6)	���������ֵ�˳���ų��ɼ���\n");
        printf("7)	��������ѯѧ�������������ƿ��Գɼ�\n");
        printf("8)	�����㣨90~100�������á��еȡ����񡢲�����5����𣬶�ÿ�ſγ̷ֱ�ͳ��ÿ�����������Լ���ռ�İٷֱȡ�\n");
        printf("9)	���ÿ��ѧ����ѧ�š����������ƿ��Գɼ����ܷ֡�ƽ���֣��Լ�ÿ�ſγ̵��ֺܷ�ƽ���֡�\n");
        printf("��������ѡ����:");
        scanf("%d",&a);
        switch(a){
        case 1:
            free(stu);
            printf("�������ǰ����\n");
            printf("������ѧ������(<=30):");
            scanf("%d",&n);
            printf("�������ܿ�Ŀ��(<=6):");
            scanf("%d",&m);
            stu=(STU *)malloc(n*sizeof(STU));
            InPut(stu,n,m);
            break;
        case 2:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            break;}
            ClassAve(stu,n,m);
            break;
        case 3:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            break;}
            PerAve(stu,n);
            break;
        case 4:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            break;}
            Swap(stu,n,Descending);
            Ranking(stu,n);
            break;
        case 5:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            break;}
            Swap(stu,n,Ascending);
            Ranking(stu,n);
            break;
        case 6:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            break;}
            SortString(stu,n);
            break;
        case 7:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            break;}
            Swap(stu,n,Descending);
            SearchName(stu,n,m);
            break;
        case 8:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            return 0;}
            StatisticsScore(stu,n,m);
            break;
        case 9:
            if(n==0){
            printf("û�м�¼��������ѡ�����蹦�ܡ�");
            break;}
            OutPut(stu,n,m);
            ClassAve(stu,n,m);
            break;
        case 0:
            printf("�˳�ϵͳ");
            break;
        default:
            printf("�����������������:\n");
            break;
        }}
    return 0;
}
