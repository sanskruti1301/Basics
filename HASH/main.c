//WAP to simulate faculty database as a hash table. Search a
//particular faculty by using 'divide' as a hash function for linear
//probing with chaining without replcament method of collision
//handling technique. Assume suitable data for faculty record.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct faculty
{
    int faculty_id;
    char name[50];
    char department[50];
    int age;
    struct faculty *next;
};


int divide(int x)
{
    return x % 10;
}


void search(struct faculty** hashTable, int faculty_id)
{

    int index = divide(faculty_id);


    struct faculty* node = hashTable[index];
    while (node != NULL)
    {
        if (node->faculty_id == faculty_id)
            break;
        node = node->next;
    }

    if (node == NULL)
    {
        printf("No record found");
        return;
    }

    printf("\nFaculty id: %d", node->faculty_id);
    printf("\nName: %s", node->name);
    printf("\nDepartment: %s", node->department);
    printf("\nAge: %d", node->age);
}


void insert(struct faculty** hashTable, int faculty_id, char name[],
            char department[], int age)
{
    struct faculty* node =
           (struct faculty*)malloc(sizeof(struct faculty));
    node->faculty_id = faculty_id;
    strcpy(node->name, name);
    strcpy(node->department, department);
    node->age = age;
    node->next = NULL;


    int index = divide(faculty_id);


    if (hashTable[index] == NULL)
    {
        hashTable[index] = node;
        return;
    }


    struct faculty* temp = hashTable[index];
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = node;
}


int main()
{

    struct faculty* hashTable[10];


    for (int i = 0; i < 10; i++)
        hashTable[i] = NULL;


    insert(hashTable, 123, "Parth", "CSE", 30);
    insert(hashTable, 245, "Mark", "ECE", 28);
    insert(hashTable, 367, "Jay", "MECH", 32);
    insert(hashTable, 489, "Joe", "IT", 27);


    search(hashTable, 245);
    return 0;
}
