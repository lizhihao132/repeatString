#ifndef REPEATSTRING_H
#define REPEATSTRING_H

typedef struct 
{
	int isLoop;
	size_t length;
	size_t count;
} LoopBody;

/************************************************************************/
/* 
ʹkmp �㷨�жϳ���Ϊ srcLen ���ַ��� str �Ƿ����ظ���
*/
/************************************************************************/
LoopBody checkRepeatByKmp(char* str, size_t srcLen);

/************************************************************************/
/* 
����Ϊ len ���ַ��� str �Ƿ��� l ����Ϊ������Ԫ���ظ� n ��
*/
/************************************************************************/
int verifyRepeatOn(char* str, size_t len, size_t l, size_t n);

/************************************************************************/
/* 
ͨ��������������һ������Ϊ len ���ַ��� str �Ƿ����ظ���
*/
/************************************************************************/
LoopBody checkRepeatByPrimer(char * str, size_t len);

/************************************************************************/
/* 
ʹ���Ż���� kmp �㷨�жϳ���Ϊ srcLen ���ַ��� str �Ƿ����ظ���
*/
/************************************************************************/
LoopBody checkRepeatByKmpOpt(char* str, size_t srcLen);

#endif