//  ��ֵת�� - ������
//
//  ���ø�ʽ�� �������͡� ������ ��ͨ���� ��ת�����ı�����ֵ�� - ϵͳ����֧�ֿ�->��ֵת��
//  Ӣ�����ƣ�ToInt
//  ���ذ������ı��ڵ�����ֵ���ı�����һ���ʵ����͵���ֵ��֧��ȫ����д��ʽ��������Ҳ���������������͵�����ת��Ϊ������������Ϊ�������
//  ����<1>������Ϊ����ת�����ı�����ֵ��������Ϊ��ͨ���ͣ�all������

#include "stdafx.h"

void __cdecl
krnln_fnMod(PMDATA_INF pRetData, UINT32 uArgCount, PMDATA_INF pArgInf) {

  // ��v���� ��һӋ��
  INT32 dResult = pArgInf[0].m_double;
  for (int i = 1; i < (int)uArgCount; ++i) {
    (int)dResult %= (int)(&pArgInf[i].m_double);
  }

  // ����
  pRetData->m_double = (DOUBLE)dResult;
}
