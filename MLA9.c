#include <stdio.h>

int main(void)
{
    printf("Authors Lat Name: ");
    char Last[1000];
    scanf("%s", Last);
    printf("Authors First Name: ");
    char First[1000];
    scanf("%s", First);
    printf("Title of Journal: " );
    char Title[1000];
    scanf("%s", Title);
    printf("Journal/Magazine/Newspaper Title: " );
    char PublicationName[1000];
    scanf("%s", PublicationName);
    printf("Publication Information: " );
    char Publication[1000];
    scanf("%s", Publication);
    printf("Name of Database: " );
    char Database[1000];
    scanf("%s", Database);
    printf("DOI: " );
    char DOI[1000];
    scanf("%s", DOI);
    printf("URL: " );
    char URL[1000];
    scanf("%s", URL);
    printf("%s, %s. \"%s.\" %s, %s. %s, %s, %s.", Last, First, Title, PublicationName, Publication, Database, DOI, URL);
    puts("");
}