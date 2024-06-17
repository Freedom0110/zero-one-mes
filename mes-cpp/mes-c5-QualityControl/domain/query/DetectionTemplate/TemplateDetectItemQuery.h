#pragma once
#ifndef _TEMPLATEDETECTITEM_QUERY_
#define _TEMPLATEDETECTITEM_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ��ҳ��ѯ����
 */
class TemplateDetectItemQuery : public PageQuery
{
	DTO_INIT(TemplateDetectItemQuery, PageQuery);
	// ��¼ID
	DTO_FIELD(UInt64, record_id);
	DTO_FIELD_INFO(record_id) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.record_id");
	}

	// ���ģ��ID
	DTO_FIELD(UInt64, template_id);
	DTO_FIELD_INFO(template_id) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.template_id");
	}

	// �����ID
	DTO_FIELD(UInt64, index_id);
	DTO_FIELD_INFO(index_id) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_id");
	}

	// ��������
	DTO_FIELD(String, index_code);
	DTO_FIELD_INFO(index_code) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_code");
	}

	// ���������
	DTO_FIELD(String, index_name);
	DTO_FIELD_INFO(index_name) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_name");
	}

	// ���������
	DTO_FIELD(String, index_type);
	DTO_FIELD_INFO(index_type) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_type");
	}

	// ��⹤��
	DTO_FIELD(String, qc_tool);
	DTO_FIELD_INFO(qc_tool) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.qc_tool");
	}

	// ��ⷽ��
	DTO_FIELD(String, check_method);
	DTO_FIELD_INFO(check_method) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.check_method");
	}

	// ��׼ֵ
	DTO_FIELD(Float64, stander_val);
	DTO_FIELD_INFO(stander_val) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.stander_val");
	}

	// ��λ
	DTO_FIELD(String, unit_of_measure);
	DTO_FIELD_INFO(unit_of_measure) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.unit_of_measure");
	}

	// �������
	DTO_FIELD(Float64, threshold_max);
	DTO_FIELD_INFO(threshold_max) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.threshold_max");
	}

	// �������
	DTO_FIELD(Float64, threshold_min);
	DTO_FIELD_INFO(threshold_min) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.threshold_min");
	}

	// ˵��ͼ
	DTO_FIELD(String, doc_url);
	DTO_FIELD_INFO(doc_url) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.doc_url");
	}

	// ��ע
	DTO_FIELD(String, remark);
	DTO_FIELD_INFO(remark) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.remark");
	}

	// Ԥ���ֶ�1
	DTO_FIELD(String, attr1);
	DTO_FIELD_INFO(attr1) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr1");
	}

	// Ԥ���ֶ�2
	DTO_FIELD(String, attr2);
	DTO_FIELD_INFO(attr2) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr2");
	}

	// Ԥ���ֶ�3
	DTO_FIELD(Int32, attr3);
	DTO_FIELD_INFO(attr3) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr3");
	}

	// Ԥ���ֶ�4
	DTO_FIELD(Int32, attr4);
	DTO_FIELD_INFO(attr4) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr4");
	}

	// ������
	DTO_FIELD(String, create_by);
	DTO_FIELD_INFO(create_by) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.create_by");
	}

	// ����ʱ��
	DTO_FIELD(String, create_time);
	DTO_FIELD_INFO(create_time) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.createtime");
	}

	// ������
	DTO_FIELD(String, update_by);
	DTO_FIELD_INFO(update_by) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.update_by");
	}

	// ����ʱ��
	DTO_FIELD(String, update_time);
	DTO_FIELD_INFO(update_time) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.update_time");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_TEMPLATEDETECTITEM_QUERY_