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
        printf("第%d名 %ld %d分\n",i+1,num[i],score[i]);
    }
        printf("\n\n\n");
    }



    void SearchNum(long int num[],int score[],int n){
        long int x;
        printf("请输入学号:");
        scanf("%ld",&x);
        for(int i=0;i<n;i++){
            if(num[i]==x)
                printf("第%d名 %d分\n\n\n",i+1,score[i]);
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

        printf("\"优秀\"有%d人,占比为%.2f\n",A,(float)A/(A+B+C+D+E));
        printf("\"良好\"有%d人,占比为%.2f\n",B,(float)B/(A+B+C+D+E));
        printf("\"中等\"有%d人,占比为%.2f\n",C,(float)C/(A+B+C+D+E));
        printf("\"及格\"有%d人,占比为%.2f\n",D,(float)D/(A+B+C+D+E));
        printf("\"不及格\"有%d人,占比为%.2f\n",E,(float)E/(A+B+C+D+E));
        printf("\n\n\n");
    }



    int a=1,n=0;
    printf("输入学生个数(n<=30):");
    scanf("%d",&n);
    if(n>30){
        printf("已超出最大人数");
    }
    long int num[n];
    int score[n];
    while(a>0)
    {
    printf("1.录入每个学生的学号和考试成绩。\n");
    printf("2.按成绩由高到低排出名次表，并将排名后的记录输出。\n");
    printf("3.按学号查询学生排名（即要先排序）及考试成绩，并将结果输出。\n");
    printf("4.按优秀（90~100）、良好、中等、及格、不及格5个类别，统计每个类别的人数以及所占的百分比，并输出统计结果。\n");
    printf("输入\"0\"退出");
    printf("请输入数字选择功能：");
    scanf("%d",&a);
    switch(a){
    case 1:
        for(int i=0;i<n;i++){
        printf("请输入第%d位学生学号及成绩（以空格隔开）：\n",i+1);
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
