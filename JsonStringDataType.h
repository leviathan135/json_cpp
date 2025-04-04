#pragma once
#include "AbstractJsonDataType.h"


class JsonStringDataType : public AbstractJsonDataType
{
public:
	JsonStringDataType();
	JsonStringDataType(std::string jsonString);
	~JsonStringDataType();

	void write(std::fstream& jsonFile);
	void read(std::string stringValue);
	std::string getDataString();
	void setDataString(std::string stringData);

	std::string getJsonString()
	{
		return m_jsonString;
	}

	void setJsonString(std::string jsonString)
	{
		m_jsonString = jsonString;
	}

	JSON_DATA_TYPE getDataType()
	{
		return JSON_STRING;
	}

private:
	std::string m_jsonString;
};


