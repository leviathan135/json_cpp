#pragma once

#include <iostream>
#include "ExecResult.h"
#include "JsonFileHandler.h"
#include "Utilities.h"
#include <cstdio>
#include <iostream>

class Task
{
public:

	Task();

	Task(char* task, char* jsonPath);

	~Task();

	EXEC_RESULT::EXEC_RESULT createConfigJsonFile(std::string configJsonPath);
	EXEC_RESULT::EXEC_RESULT readConfigJsonFile(std::string configJsonPath);
	EXEC_RESULT::EXEC_RESULT processTask(char* args[], int argc);

	EXEC_RESULT::EXEC_RESULT add(char* newTask);
	EXEC_RESULT::EXEC_RESULT update(char* jsonID, char* newTask);
	EXEC_RESULT::EXEC_RESULT deleteTask(char* jsonID);
	EXEC_RESULT::EXEC_RESULT mark(char* markType, char* JsonID);

	void listDone();
	void listToDo();
	void listInProgress();
	
	char* getTaskInput() const
	{
		return m_taskInput;
	}

	void setTaskInput(char* taskInput)
	{
		m_taskInput = taskInput;
	}

	char* getJsonPath()
	{
		return m_jsonPath;
	}

	void setJsonPath(char* jsonPath)
	{
		m_jsonPath = jsonPath;
	}

private:
	char* m_taskInput;
	char* m_jsonPath;

	JsonData m_configJson;
	std::string configJsonPath;
};

