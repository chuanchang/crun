/*
 * crun - OCI runtime written in C
 *
 * Copyright (C) 2017, 2018, 2019 Giuseppe Scrivano <giuseppe@scrivano.org>
 * crun is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * crun is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with crun.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SECCOMP_H
# define SECCOMP_H
# include <config.h>
# include <stdio.h>
# include <stdlib.h>
# include "error.h"
# include <errno.h>
# include <argp.h>
# include <oci_runtime_spec.h>
# include "container.h"

int libcrun_generate_and_load_seccomp (libcrun_container_t *container, int outfd, libcrun_error_t *err);
int libcrun_apply_seccomp (int infd, libcrun_error_t *err);

#endif
