#include<stdio.h>
/*����ṹ��student�����ñ���stud*/ 
/*ͬ����4�д���*/
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
    printf("������ѧ����Ϣ��ѧ�ţ����ĳɼ� ��ѧ�ɼ� Ӣ��ɼ�\n"); 
    for(i=0;i<3;i++){
    	scanf("%d%f%f%f",&stu[i].num,&stu[i].yuwen,&stu[i].yingyu,&stu[i].math);
	} 
	printf("ѧ��\t����\t��ѧ\tӢ��\t�ܷ�\tƽ���ɼ�\n");
    for(i=0;i<3;i++)
    {
    	stu[i].sorce = stu[i].yuwen+stu[i].yingyu+stu[i].math;
    	stu[i].avg = stu[i].sorce/3;
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].num,stu[i].yuwen,stu[i].yingyu,stu[i].math,stu[i].sorce,stu[i].avg);
    }
    return 0;
}
