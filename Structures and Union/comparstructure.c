struct studentrecord
    {
        int rollno;
        char name[30];    
    }s1,s2;

void main(){
    printf("Enter for s1 roll no:");
    scanf("%d",&s1.rollno);
    printf("Enter Name:");
    scanf("%s",&s1.name);
    printf("Enter roll no:");
    scanf("%d",&s2.rollno);
    printf("Enter Name:");
    scanf("%s",&s2.name);
    if (s1.rollno==s2.rollno){
        printf("Same Data");
    }
    else{
        printf("Different Data");
    }
    getch();
}