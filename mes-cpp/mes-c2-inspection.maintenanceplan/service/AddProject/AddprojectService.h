#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 11:08:56

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
#ifndef _ADDPROJECTSERVICE_H_
#define _ADDPROJECTSERVICE_H_
#include <list>
#include "../../domain/dto/maintain-proj/MaintailProjDTO.h"

#include"../../../mes-c2-repairorder/domain/do/dv_check_subject/DvCheckSubjectDO.h"
#include"./dao/addProject/AddprojectDao.h"
/**
 * 示例服务实现，演示基础的示例服务实现
 */
class AddprojectService
{
public:
	// 新增数据
	uint64_t saveData(const MaintainProjDTO::Wrapper& dto, const PayloadDTO& payload);

};

#endif // !_SAMPLE_SERVICE_


