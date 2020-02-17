#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

struct btreenode
{
    struct btreenode *leftchild ;
    int data ;
    struct btreenode *rightchild ;
} ;

void insert ( struct btreenode **, int ) ;
void inorder ( struct btreenode * ) ;


int* sort(int *array, int arr_size)
{
    struct btreenode *bt ;
    int i;
    bt = NULL;

    for ( i = 0 ; i <= 9 ; i++ )
        insert ( &bt, array[i] ) ;

    inorder ( bt ) ;


    //return ordered array
    return array;
}

void insert ( struct btreenode* *sr, int num )
{
    if ( *sr == NULL )
    {
        *sr = malloc ( sizeof ( struct btreenode ) ) ;

        ( *sr ) -> leftchild = NULL ;
        ( *sr ) -> data = num ;
        ( *sr ) -> rightchild = NULL ;
    }
    else
    {
        if ( num < ( *sr ) -> data )
            insert ( &( ( *sr ) -> leftchild ), num ) ;
        else
            insert ( &( ( *sr ) -> rightchild ), num ) ;
    }
}

void inorder ( struct btreenode *sr )
{
    if ( sr != NULL )
    {
        inorder ( sr -> leftchild ) ;
        //printf ( "%d\t", sr -> data ) ;
        inorder ( sr -> rightchild ) ;
    }
}
