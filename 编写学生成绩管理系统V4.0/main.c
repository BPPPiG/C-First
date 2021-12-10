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
        printf("学号：%ld 姓名：%s 总分：%d 平均分：%.2f\n",stu[i].num,stu[i].name,stu[i].sum,stu[i].ave);
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
        printf("科目%d 总分:%d 平均分：%.2f\n",i+1,sum[i],ave[i]);
    }
}
void Ranking(STU stu[],int n){
    for(int i=0;i<n;i++){
        printf("次序:%d 学号:%ld 姓名:%s 总分:%d\n",i+1,stu[i].num,stu[i].name,stu[i].sum);
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
        printf("按序输入该学生 学号 姓名 成绩\n");
        for(int i=0;i<n;i++){
            stu[i].sum=0;
            printf("请输入第%d位学生信息：",i+1);
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
    printf("请输入查询的姓名:");
    scanf("%s",temp);
    printf("%s\n",temp);
    for(int i=0;i<n;i++){
        if(!strcmp(temp,stu[i].name)){
            printf("名次:%d ",i+1);
            for(int j=0;j<m;j++){
                printf("科目%d:%d ",j+1,stu[i].score[j]);
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
        printf("科目%d:\n",j+1);
        printf("\"优秀\"有%d人,占比为%.2f\n",A,(float)A/(A+B+C+D+E));
        printf("\"良好\"有%d人,占比为%.2f\n",B,(float)B/(A+B+C+D+E));
        printf("\"中等\"有%d人,占比为%.2f\n",C,(float)C/(A+B+C+D+E));
        printf("\"及格\"有%d人,占比为%.2f\n",D,(float)D/(A+B+C+D+E));
        printf("\"不及格\"有%d人,占比为%.2f\n",E,(float)E/(A+B+C+D+E));
        A=B=C=D=E=0;
    }}
void OutPut(STU stu[],int n,int m){
    for(int i=0;i<n;i++){
    printf("学号:%ld 姓名:%s ",stu[i].num,stu[i].name);
    for(int j=0;j<m;j++){
        printf("科目%d:%d分 ",j+1,stu[i].score[j]);
    }
    printf("总分:%d 平均分:%.2f ",stu[i].sum,stu[i].ave);
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
        printf("次序:%d 学号:%ld 姓名:%s 总分:%d\n",i+1,stu[i].num,stu[i].name,stu[i].sum);
        }
};
int main()
{
    int a=1;
    int n,m;

    STU *stu=NULL;
    while(a>0){
        printf("1)	录入每个学生的学号、姓名和各科考试成绩\n");
        printf("2)	计算每门课程的总分和平均分\n");
        printf("3)	计算每个学生的总分和平均分\n");
        printf("4)	按每个学生的总分由高到低排出名次表\n");
        printf("5)	按每个学生的总分由低到高排出成绩表\n");
        printf("6)	按姓名的字典顺序排出成绩表\n");
        printf("7)	按姓名查询学生的排名及各科考试成绩\n");
        printf("8)	按优秀（90~100）、良好、中等、及格、不及格5个类别，对每门课程分别统计每个类别的人数以及所占的百分比。\n");
        printf("9)	输出每个学生的学号、姓名、各科考试成绩、总分、平均分，以及每门课程的总分和平均分。\n");
        printf("输入数字选择功能:");
        scanf("%d",&a);
        switch(a){
        case 1:
            free(stu);
            printf("已清空先前数据\n");
            printf("请输入学生人数(<=30):");
            scanf("%d",&n);
            printf("请输入总科目数(<=6):");
            scanf("%d",&m);
            stu=(STU *)malloc(n*sizeof(STU));
            InPut(stu,n,m);
            break;
        case 2:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            break;}
            ClassAve(stu,n,m);
            break;
        case 3:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            break;}
            PerAve(stu,n);
            break;
        case 4:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            break;}
            Swap(stu,n,Descending);
            Ranking(stu,n);
            break;
        case 5:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            break;}
            Swap(stu,n,Ascending);
            Ranking(stu,n);
            break;
        case 6:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            break;}
            SortString(stu,n);
            break;
        case 7:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            break;}
            Swap(stu,n,Descending);
            SearchName(stu,n,m);
            break;
        case 8:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            return 0;}
            StatisticsScore(stu,n,m);
            break;
        case 9:
            if(n==0){
            printf("没有记录，请重新选择所需功能。");
            break;}
            OutPut(stu,n,m);
            ClassAve(stu,n,m);
            break;
        case 0:
            printf("退出系统");
            break;
        default:
            printf("输入错误，请重新输入:\n");
            break;
        }}
    return 0;
}
