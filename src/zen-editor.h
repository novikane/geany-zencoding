/*
 * zen-module.h
 *
 * Copyright 2011 Matthew Brush <mbrush@codebrainz.ca>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301  USA.
 *
 */

#ifndef ZEN_MODULE_H
#define ZEN_MODULE_H
#ifdef __cplusplus
extern "C" {
#endif


/*#define ZEN_EDITOR_DEBUG 1*/


PyObject *zen_editor_module_init(void);


#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* ZEN_MODULE_H */
