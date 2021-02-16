#include <stdio.h>
struct stud{int roll_number ; char name[70] ; float marks ; char grade;};
int main()
{
    struct stud students[10];
    int i,roll,y=0;

    for (i=0;i<10;i++)
    {
        scanf("%d%s%f%c", &students[i].roll_number, &students[i].name, &students[i].marks, &students[i].grade);
    }

    scanf("%d",&roll);
    
    for(i=0; i<10 ; i++)
    {
        if (roll == students[i].roll_number)
        {
            y += 1;
            break;
        }
    }
    if (y=1)
    {
        printf("%s %0.1f %c", students[i].name, students[i].marks, students[i].grade);
    }
    else
    {
        printf("Student details are not found in the database\n");
    }

    return 0;
}