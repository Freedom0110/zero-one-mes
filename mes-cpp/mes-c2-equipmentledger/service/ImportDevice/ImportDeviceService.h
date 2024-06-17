#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: 。好
 @Date: 2024/05/26 22:21:42

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
#ifndef _IMPORTDEVICESERVICE_H_
#define _IMPORTDEVICESERVICE_H_


#include"../mes-c2-equipmentledger/domain/dto/ImportDeviceDTo.h"
#include "ApiHelper.h"

/**
 * 导入设备service
 * 负责人：。好
 */
class ImportDeviceService
{
public:
	std::string uploadDeviceFile(
		std::shared_ptr<oatpp::web::protocol::http::incoming::Request> request);

	ImportDeviceDTO::Wrapper importDevice(oatpp::String fileName);
};


#endif // !_IMPORTDEVICESERVICE_H_