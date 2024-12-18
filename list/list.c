#include <stdio.h>
#include <stdlib.h>

// 链表节点结构
typedef struct Node
{
    int data;          // 节点存储的数据
    struct Node *next; // 指向下一个节点的指针
} Node;

// 链表结构
typedef struct
{
    Node *head;  // 链表头节点指针
    size_t size; // 链表中的节点个数
} LinkedList;

// 初始化链表
void initLinkedList(LinkedList *list)
{
    list->head = NULL; // 初始化头节点为空
    list->size = 0;    // 初始化节点个数为0
}

// 返回链表的长度
size_t getLength(const LinkedList *list)
{
    return list->size; // 返回链表的节点个数
}

// 在指定位置插入元素
void insertAt(LinkedList *list, size_t index, int element)
{
    if (index > list->size)
    {
        return; // 忽略无效的插入位置
    }

    Node *newNode = (Node *)malloc(sizeof(Node)); // 创建新节点
    newNode->data = element;

 if (index == 0)
 {
 newNode->next = list->head;
 list->head = newNode; // 新节点成为头节点
 }
 else
 {
 Node *prevNode = list->head;

 for (size_t i = 0; i < index - 1; i++)
 {
 prevNode = prevNode->next;
 }

 newNode->next = prevNode->next;
 prevNode->next = newNode; // 新节点插入在前一节点之后
 }

 list->size++; // 更新节点个数
}

// 在末尾插入元素
void insertEnd(LinkedList *list, int element)
{
 insertAt(list, list->size, element); // 在链表末尾插入元素
}

// 删除指定位置的元素并返回被删除的元素
int deleteAt(LinkedList *list, size_t index)
{
 if (index >= list->size)
 {
 return -1; // 忽略无效的删除位置
 }

 int deletedElement;

 if (index == 0)
 {
 Node *temp = list->head;
 list->head = temp->next;
 deletedElement = temp->data;
 free(temp); // 释放被删除节点的内存
 }
 else
 {
 Node *prevNode = list->head;

        for (size_t i = 0; i < index - 1; i++)
        {
            prevNode = prevNode->next;
        }

        Node *temp = prevNode->next;
        prevNode->next = temp->next;
        deletedElement = temp->data;
        free(temp); // 释放被删除节点的内存
    }

    list->size--; // 更新节点个数
    return deletedElement;
}

// 删除末尾元素
int deleteEnd(LinkedList *list)
{
    return deleteAt(list, list->size - 1); // 删除链表末尾的元素
}

// 获取指定位置的元素
int getElementAt(const LinkedList *list, size_t index)
{
    if (index >= list->size)
    {
        return -1; // 返回无效的索引
    }

    Node *currentNode = list->head;
    for (size_t i = 0; i < index; i++)
    {
        currentNode = currentNode->next;
    }

    return currentNode->data; // 返回指定位置的元素
}

// 修改指定位置的元素
void modifyAt(LinkedList *list, size_t index, int newValue)
{
    if (index >= list->size)
    {
        return; // 忽略无效的修改位置
    }

    Node *currentNode = list->head;

    for (size_t i = 0; i < index; i++)
    {
        currentNode = currentNode->next;
    }

    currentNode->data = newValue; // 修改节点的值
}

// 释放链表内存
void destroyLinkedList(LinkedList *list)
{
    Node *currentNode = list->head;
    while (currentNode != NULL)
    {
        Node *temp = currentNode;
        currentNode = currentNode->next;
        free(temp); // 释放每个节点的内存
    }

    list->head = NULL; // 头节点置为空
    list->size = 0;    // 节点个数置为0
}

int main()
{
    LinkedList myList; // 声明链表

    initLinkedList(&myList); // 初始化链表
    printf("初始化链表成功!\n");

    insertEnd(&myList, 1); // 链表尾部插入元素1
    insertEnd(&myList, 2); // 链表尾部插入元素2
    printf("向链表插入了2个元素\n");

    printf("链表长度为: %zu\n", getLength(&myList)); // 获取链表长度

    insertAt(&myList, 1, 3); // 在索引1处插入元素3
    printf("在索引1处插入元素3\n");

    printf("链表长度为: %zu\n", getLength(&myList)); // 再次获取链表长度

    printf("索引1处的元素为: %d\n", getElementAt(&myList, 1)); // 获取索引1处的元素

    modifyAt(&myList, 0, 4); // 修改索引0处的元素
    printf("把索引0处的元素修改为4\n");

    printf("删除索引1处的元素,该元素值是: %d\n", deleteAt(&myList, 1)); // 删除索引1处的元素

    destroyLinkedList(&myList); // 销毁链表
    printf("链表销毁成功!\n");

    return 0;
}