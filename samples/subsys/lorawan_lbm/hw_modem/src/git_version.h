/*
 * Copyright (c) 2024 Semtech Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef GIT_VERSION_H
#define GIT_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef GIT_VERSION
#define GIT_VERSION "unknown"
#endif

#ifndef GIT_COMMIT
#define GIT_COMMIT "unknown"
#endif

#ifndef GIT_DATE
#define GIT_DATE "unknown"
#endif

#ifndef BUILD_DATE
#define BUILD_DATE "unknown"
#endif

const char *get_software_git_version(void);
const char *get_software_git_commit(void);
const char *get_software_git_date(void);
const char *get_software_build_date(void);

#ifdef __cplusplus
}
#endif

#endif /* GIT_VERSION_H */
