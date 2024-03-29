#include "List.h"

/* Return true if L is empty */
int IsEmpty( List L )
{
	return L->Next == NULL;
}

/* Return true if P is the last position of list L */
/* Parameter L is unused in this implementation */
int IsLast( Position P, List L )
{
	return P->Next == NULL;
}

/* Return Position of X in L; NULL if not found */
Position Find( ElementType X, List L )
{
	Position P;

	P = L->Next;
	while( P->Element != X && P != NULL )
		P = P->Next;
	return P;
}

/* Delete first occurrence of X from a list */
/* Assume use of a header node */
void Delete( ElementType X, List L )
{
	Position P, TmpCell;

	P = FindPrevious( X, L );

	if( !IsLast( P, L ) )
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
}

/* If X is not found, then Next field of returned Position is NULL */
/* Assumes a header */
Position FindPrevious( ElementType X, List L )
{
	Position P;

	P = L;
	while( P->Next != NULL && P->Next->Element != X )
		P = P->Next;

	return P;
}

/* Insert (after legal position P) */
/* Header implementation assumed */
/* Parameter L is unused in this implementation */
void Insert( ElementType X, List L, Position P )
{
	Position TmpCell;

	TmpCell = malloc( sizeof( struct Node ) );
	if( TmpCell = NULL )
		FatalError( "Out of space!" );

	TmpCell->Element = X;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;
}
