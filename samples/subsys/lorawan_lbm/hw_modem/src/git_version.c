/*
 * Copyright (c) 2024 Semtech Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "git_version.h"

const char *get_software_git_version(void)
{
	return GIT_VERSION;
}

const char *get_software_git_commit(void)
{
	return GIT_COMMIT;
}

const char *get_software_git_date(void)
{
	return GIT_DATE;
}

const char *get_software_build_date(void)
{
	return __DATE__;
}
