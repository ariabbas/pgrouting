/*PGR-GNU*****************************************************************
File: withPoints_driver.h

Copyright (c) 2015 pgRouting developers
Mail: project@pgrouting.org

Function's developer:
Copyright (c) 2015 Celia Virginia Vergara Castillo
Mail:

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

********************************************************************PGR-GNU*/

#ifndef SRC_WITHPOINTS_SRC_MANY_TO_ONE_WITHPOINTS_DRIVER_H_
#define SRC_WITHPOINTS_SRC_MANY_TO_ONE_WITHPOINTS_DRIVER_H_

#pragma once

#include "./../../common/src/pgr_types.h"

#ifdef __cplusplus
extern "C" {
#endif

// CREATE OR REPLACE FUNCTION pgr_withPoint(
// edges_sql TEXT,
// points_sql TEXT,
// start_pid ANYARRAY,
// end_pid BIGINT,
// directed BOOLEAN DEFAULT true,
    int do_pgr_many_to_one_withPoints(
            pgr_edge_t *edges, size_t total_edges,
            Point_on_edge_t *points, size_t total_points,
            pgr_edge_t *edges_of_points, size_t total_edges_of_points,
            int64_t *start_pidsArr, size_t size_start_pidsArr,

            int64_t end_pid,


            char driving_side,
            bool details,
            bool directed,
            bool only_cost,
            General_path_element_t **return_tuples, size_t *return_count,
            char ** err_msg);

#ifdef __cplusplus
}
#endif

#endif  // SRC_WITHPOINTS_SRC_MANY_TO_ONE_WITHPOINTS_DRIVER_H_
