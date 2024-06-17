#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 11:52:32

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _WORKSTATION_DO_
#define _WORKSTATION_DO_
#include "../DoInclude.h"

/**
 * ��:md_workstation ���ݿ�ʵ����
 */
class WorkStationDO
{
	// ����վID
	CC_SYNTHESIZE(uint64_t, workstationId, WorkstationId);
	// ����վ����
	CC_SYNTHESIZE(string, workstationCode, WorkstationCode);
	// ����վ����
	CC_SYNTHESIZE(string, workstationName, WorkstationName);
	// ���ڳ�������
	CC_SYNTHESIZE(string, workshopName, WorkshopName);
	
	//��װ�о�����
	CC_SYNTHESIZE(string, workwearType, WorkwearType);
	//��װ�о���Դ����
	CC_SYNTHESIZE(uint64_t, workwearSum, WorkwearSum);

	//��������
	CC_SYNTHESIZE(string, processName, ProcessName);
	//�Ƿ�����
	CC_SYNTHESIZE(string, enableFlag, EnableFlag);
	//����վ�ص�
	CC_SYNTHESIZE(string, workstationAddress, WorkstationAddress);
	//��ע
	CC_SYNTHESIZE(string, remark, Remark);
	//�߱߿�ID
	CC_SYNTHESIZE(uint64_t, warehouseId, WarehouseId);
	//����ID
	CC_SYNTHESIZE(uint64_t, locationId, LocationId);
	//��λID
	CC_SYNTHESIZE(uint64_t, areaId, AreaId);
public:
	WorkStationDO() {
		workstationId = 0;
		workstationCode = "";
		workstationName = "";
		enableFlag = "Y";
		workshopName = "";
		workwearType = "";
		workwearSum = 1;
		processName = "";
		workstationAddress = "";
		remark = "";
		warehouseId = 12;
		locationId = 11;
		areaId = 13;
	}
};

#endif // !_WORKSTATION_DO_