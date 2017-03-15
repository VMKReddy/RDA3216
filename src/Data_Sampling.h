/***************************************************************
 * Data_Sampling.h
 * Eco-EV BMS
 *
 * Created by Hunk on 14-12-16.
 * Copyright (c) 2014 Boston-Power. All rights reserved.
 **************************************************************/

#ifndef _DATA_SAMPLING_H_
#define _DATA_SAMPLING_H_

#include "types.h"

/******************************************************************* 
 * ���ݲɼ���ͨ��SPI��ǰ�˲ɼ�оƬ��ȡ�����ѹ�������¶�
 * @data[out]    �ɼ��������Ŀ��
 * @retval  �� 
 *******************************************************************/ 
U8 ISL_Init(void);

// #ifdef VERSION_BMS
void Data_Sampling_AFE_Main(Sample_Data *data);
// #endif
// #ifdef VERSION_BTT
// U8 Data_Sampling_AFE_Main(Sample_Data *data);
// #endif

#endif
