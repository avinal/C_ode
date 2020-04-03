#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct marks {
    int mark;
    struct marks * next;
};
typedef struct marks score;
struct swarnamlink {
    char name[10], roll[10];
    struct swarnamlink * next;
    score * per;
};
typedef struct swarnamlink node;
node * start = NULL;
node * insert(node *, char *, char *);
score * entry(score *, int);
int * display(node *);

int main(int argc, char const * argv[]) {
    int test;
    scanf("%d", &test);

    while (test--) {
        int student, evaluation;
        scanf("%d%d", &student, &evaluation);
        char name[10], roll[10];
        int Id = 0;

        while (student--) {
            scanf("%s %s", roll, name);
            start = insert(start, roll, name);
            Id++;
        }

        while (evaluation--) {
            int num;
            scanf("%s %d", roll, &num);
            node * var = start;

            while (strcmp(var->roll, roll) != 0) {
                var = var->next;
            }

            var->per = entry(var->per, num);
        }

        display(start);
    }

    return 0;
}

node * insert(node * start, char roll[], char name[]) {
    node * newdata, *var;
    newdata = (node *)malloc(sizeof(node));
    strcpy(newdata->name, name);
    strcpy(newdata->roll, roll);
    newdata->per = NULL;

    if (start == NULL) {
        start = newdata;
        newdata->next = NULL;
    }
    else {
        var = start;

        while (var->next != NULL) {
            var = var->next;
        }

        var->next = newdata;
        newdata->next = NULL;
    }

    return (start);
}

score * entry(score * first, int mark) {
    score * newdata, *var;
    newdata = (score *)malloc(sizeof(score));
    newdata->mark = mark;

    if (first == NULL) {
        first = newdata;
        newdata->next = NULL;
    }
    else {
        var = first;

        while (var->next != NULL) {
            var = var->next;
        }

        var->next = newdata;
        newdata->next = NULL;
    }

    return (first);
}

int * display(node * start) {
    node * var_node = start;
    score * var_score;

    while (var_node != NULL) {
        int sum = 0;
        printf("%s %s ", var_node->roll, var_node->name);
        var_score = var_node->per;

        while (var_score != NULL) {
            printf("%d ", var_score->mark);
            sum += var_score->mark;
            var_score = var_score->next;
        }

        printf("%d\n", sum);
        var_node = var_node->next;
    }

    return 0;
}