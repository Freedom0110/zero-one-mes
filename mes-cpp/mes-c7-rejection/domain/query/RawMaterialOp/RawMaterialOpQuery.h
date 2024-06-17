#pragma once
#ifndef _RAWMATERIALOP_QUERY_
#define _RAWMATERIALOP_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ʾ����ҳ��ѯ����
 */
class RawMaterialOpQuery : public PageQuery
{
	DTO_INIT(RawMaterialOpQuery, PageQuery);
	// ���ϵ�ID
	DTO_FIELD(UInt64, rt_id);
	DTO_FIELD_INFO(rt_id) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.rt_id");
	}

	//���ϵ����
	DTO_FIELD(String, rt_code);
	DTO_FIELD_INFO(rt_code) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.rt_code");
	}

	// ���ϵ�����
	DTO_FIELD(String, rt_name);
	DTO_FIELD_INFO(rt_name) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.rt_name");
	}

	//��������ID
	DTO_FIELD(UInt64, workorder_id);
	DTO_FIELD_INFO(workorder_id) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.workororder_id");
	}

	// �����������
	DTO_FIELD(String, workorder_code);
	DTO_FIELD_INFO(workorder_code) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.workororder_code");
	}


	// ���ղֿ�ID
	DTO_FIELD(UInt64, warehouse_id);
	DTO_FIELD_INFO(warehouse_id) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.warehouse_id");
	}
	// ���ղֿ����
	DTO_FIELD(String, warehouse_code);
	DTO_FIELD_INFO(warehouse_code) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.warehouse_code");
	}
	// ���ղֿ�����
	DTO_FIELD(String, warehouse_name);
	DTO_FIELD_INFO(warehouse_name) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.warehouse_name");
	}

	// ����ID
	DTO_FIELD(UInt64, location_id);
	DTO_FIELD_INFO(location_id) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.location_id");
	}
	// ��������
	DTO_FIELD(String, location_code);
	DTO_FIELD_INFO(location_code) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.location_code");
	}
	// ��������
	DTO_FIELD(String, location_name);
	DTO_FIELD_INFO(location_name) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.location_name");
	}

	// ��λID
	DTO_FIELD(UInt64, area_id);
	DTO_FIELD_INFO(area_id) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.area_id");
	}
	// ��λ����
	DTO_FIELD(String, area_code);
	DTO_FIELD_INFO(area_code) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.area_code");
	}
	// ��λ����
	DTO_FIELD(String, area_name);
	DTO_FIELD_INFO(area_name) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.area_name");
	}

	//��������
	DTO_FIELD(String, rt_date);
	DTO_FIELD_INFO(rt_date) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.rt_date");
	}
	//��ע
	DTO_FIELD(String, remark);
	DTO_FIELD_INFO(remark) {
		info->description = ZH_WORDS_GETTER("RawMaterialOp.field.remark");
	}
};
#include OATPP_CODEGEN_END(DTO)
#endif 