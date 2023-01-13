#pragma once

#include "revolution.h"

class ScenarioData {
public:
	void getScenarioString(const char *, s32, const char **);
    u32 getPowerStarNum() const;
    char* galaxyName;
};