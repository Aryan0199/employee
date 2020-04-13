#include <stdio.h>
#include <malloc.h>
struct employee{
    int empno;
    char empname[100];
    char deptname[100];
    float salary;
    struct employee *next;
};
struct employee *head=NULL;
struct employee *newnode,*temp;
void display(){
    struct employee *temp1;
    temp1=head;
    while (temp1!=NULL){
        printf("Employee number--> %d\n",temp1->empno);
        printf("Employee name--> %s\n",temp1->empname);
        printf("Department name--> %s\n",temp1->deptname);
        printf("Employee's salary--> %f\n",temp1->salary);
        temp1=temp1->next;
        printf("\n");
        printf("\n");
    }

}
int main(){
    int i=1;
    while(i<=20) {
        newnode = (struct employee *) malloc(sizeof(struct employee));
        printf("Enter employee number\n");
        scanf("%d", &newnode->empno);
        printf("Enter employee name\n");
        scanf("%s",newnode->empname);
        printf("Enter department name\n");
        scanf("%s", newnode->deptname);
        printf("Enter employee's salary\n");
        scanf("%f", &newnode->salary);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        i++;
    }
    display();
}
