#include<stdio.h>
/*定义结构体student并设置别名stud*/ 
/*同上面4行代码*/
struct student{
    int num;
    float yuwen;
    float math;
    float yingyu;
    float sorce;
    float avg;
};
typedef struct student stud;


stud stu[6] = {};

int main()
{
    int i;
    printf("请输入学生信息：学号：语文成绩 数学成绩 英语成绩\n"); 
    for(i=0;i<3;i++){
    	scanf("%d%f%f%f",&stu[i].num,&stu[i].yuwen,&stu[i].yingyu,&stu[i].math);
	} 
	printf("学号\t语文\t数学\t英语\t总分\t平均成绩\n");
    for(i=0;i<3;i++)
    {
    	stu[i].sorce = stu[i].yuwen+stu[i].yingyu+stu[i].math;
    	stu[i].avg = stu[i].sorce/3;
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].num,stu[i].yuwen,stu[i].yingyu,stu[i].math,stu[i].sorce,stu[i].avg);
    }
    return 0;
}
