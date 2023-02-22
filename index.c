#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define stu 100
    struct Student
{	int num;				//学号
	char name[20];		//姓名
	char sex[6];			//性别
	int age;				//年龄
	float score;			//成绩
}prod[stu];
int All=0;
int a=0;
stu1()//录入学生信息
{
    int i,m;
    printf("请输入要输入的人数\n");
    scanf("%d",&m);
    for(i=All;i<All+m;i++)
 {
     printf("请输入学号\n");scanf("%d",&prod[i].num);
     printf("请输入姓名\n");scanf("%s",prod[i].name);
     printf("请输入性别\n");scanf("%s",prod[i].sex);
     printf("请输入年龄\n");scanf("%d",&prod[i].age);
     printf("请输入成绩\n");scanf("%f",&prod[i].score);
 }
 a=All;
 All=All+m;
}
stu2()//打印学生信息
{
    int i;
for(i=a;i<All;i++)
    {

        printf("学号:%d姓名:%s性别:%s年龄:%d成绩:%.1f\n",prod[i].num,prod[i].name,prod[i].sex,prod[i].age,prod[i].score);
    }
}
stu3()//保存学生信息
{
    FILE *fp;
    int i;
    fp=fopen("D:\student.txt","w");
    struct Student *p=prod;
    for(i=0;i<All;i++)
    {
        if(p->num==0)
        {
            printf("打开文件失败！\n");
        }
        else
        {
        printf("保存成功！\n");
        fprintf(fp,"%d %s %s %d %f\n",p->num,p->name,p->sex,p->age,p->score);
        p++;
        }
    }
}

stu4()//读取学生信息
{
    int i,m;

    for(m=0;m<All;m++)
    {
        printf("学号:%d,姓名:%s性别:%s年龄:%d成绩:%.1f\n",prod[m].num,prod[m].name,prod[m].sex,prod[m].age,prod[m].score);
    }
}
stu5()//统计所有学生人数
{
printf("共有%d个学生\n",All);
}
stu6()//查找学生信息
{
int i,m,n=0;
printf("请输入学号\n");
scanf("%d",&m);
for(i=0;i<All;i++)
    {
        if(prod[i].num==m)
        printf("学号:%d姓名:%s性别:%s年龄:%d成绩:%f.1\n",prod[i].num,prod[i].name,prod[i].sex,prod[i].age,prod[i].score);
        n=1;
    }
    if(n==0) printf("没有找到该学号！\n");
}
stu7()//修改学生信息
{
    int i=0,m=0,j=0;
	printf("请输入要修改的学号:\n");
	scanf("%d",&m);
	for (i=0;i<All;i++)
	{
		if (prod[i].num==m)
		{
     printf("请输入学号\n");scanf("%d",&prod[i].num);
     printf("请输入姓名\n");scanf("%s",prod[i].name);
     printf("请输入性别\n");scanf("%s",prod[i].sex);
     printf("请输入年龄\n");scanf("%d",&prod[i].age);
     printf("请输入成绩\n");scanf("%f",&prod[i].score);
        }
    }
    printf("修改成功!\n");
}


stu8()//删除学生信息
{
    int i=0,m=0,j=0;
printf("请输入要删除的学号：");
scanf("%d",&m);
for(i=0;i<=All-1;i++)
   {
    if(m==prod[i].num)
       {
       for(j=i;j<=All-2;j++)
          {
          prod[j]=prod[j+1];
}
}
}
   printf("删除成功！\n");
All=All-1;
}
int main()
{int select;
while(1){
    printf("*************************************************\n");
    printf("*\t欢迎使用高校学生成绩管理系统V1.0\t*\n");
    printf("*\t\t请选择功能\t\t\t\*\n");
    printf("*************************************************\n");
    printf("*\t\t1.录入学生信息\t\t\t*\n");
    printf("*\t\t2.打印学生信息\t\t\t*\n");
    printf("*\t\t3.保存学生信息\t\t\t*\n");
    printf("*\t\t4.读取学生信息\t\t\t*\n");
    printf("*\t\t5.统计所有学生人数\t\t*\n");
    printf("*\t\t6.查找学生信息\t\t\t*\n");
    printf("*\t\t7.修改学生信息\t\t\t*\n");
    printf("*\t\t8.删除学生信息\t\t\t*\n");
    printf("*\t\t0.退出系统\t\t\t*\n");
    printf("*************************************************\n");    //以上为界面
    printf("请选择功能\n");
    scanf("%d",&select);
    if(select==1) stu1();
    else if(select==2) stu2();
    else if(select==3) stu3();
    else if(select==4) stu4();
    else if(select==5) stu5();
    else if(select==6) stu6();
    else if(select==7) stu7();
    else if(select==8) stu8();
    else if(select==0) break;   //选择序号
    else{printf("选择有误，请重新选择！\n");continue;}
}
printf("谢谢使用！再见！\n");
}
