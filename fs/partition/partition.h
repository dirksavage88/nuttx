/****************************************************************************
 * fs/partition/partition.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __FS_PARTITION_PARTITION_H
#define __FS_PARTITION_PARTITION_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/fs/fs.h>
#include <nuttx/fs/partition.h>
#include <nuttx/mtd/mtd.h>

#ifndef CONFIG_DISABLE_MOUNTPOINT

/****************************************************************************
 * Public Types
 ****************************************************************************/

struct partition_state_s
{
  FAR struct mtd_dev_s *mtd;
  FAR struct inode *blk;
  blkcnt_t nblocks;
  blksize_t blocksize;
  size_t erasesize;
};

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

int read_partition_block(FAR struct partition_state_s *state,
                         FAR void *buffer, size_t startblock,
                         size_t nblocks);

#ifdef CONFIG_PTABLE_PARTITION
int parse_ptable_partition(FAR struct partition_state_s *state,
                           partition_handler_t handler,
                           FAR void *arg);
#endif

#ifdef CONFIG_GPT_PARTITION
int parse_gpt_partition(FAR struct partition_state_s *state,
                        partition_handler_t handler,
                        FAR void *arg);
#endif

#ifdef CONFIG_MBR_PARTITION
int parse_mbr_partition(FAR struct partition_state_s *state,
                        partition_handler_t handler,
                        FAR void *arg);
#endif

#ifdef CONFIG_TXTABLE_PARTITION
int parse_txtable_partition(FAR struct partition_state_s *state,
                            partition_handler_t handler,
                            FAR void *arg);
#endif

#endif /* CONFIG_DISABLE_MOUNTPOINT */

#endif /* __FS_PARTITION_PARTITION_H */
