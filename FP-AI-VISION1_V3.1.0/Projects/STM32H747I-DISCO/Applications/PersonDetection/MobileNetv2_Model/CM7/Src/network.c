/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Mar  8 13:28:20 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network.h"
#include "network_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"




#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network
 
#undef AI_NETWORK_MODEL_SIGNATURE
#define AI_NETWORK_MODEL_SIGNATURE     "05bca5001ebfeff5e597746bf43fd1ff"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Mar  8 13:28:20 2022"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)




/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  Input_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 12288, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8192, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8192, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4096, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1536, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1536, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_18_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1536, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  pool_8_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  concat_21_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 6144, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1536, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2560, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2560, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_34_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2560, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2560, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_39_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_40_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1536, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  pool_24_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1536, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  concat_43_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3072, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2560, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_46_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2560, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2048, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1152, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 216, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 72, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 72, AI_STATIC)

/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18, AI_STATIC)

/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 162, AI_STATIC)

/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18, AI_STATIC)

/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 108, AI_STATIC)

/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 6, AI_STATIC)

/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 216, AI_STATIC)

/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 36, AI_STATIC)

/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 324, AI_STATIC)

/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 36, AI_STATIC)

/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 216, AI_STATIC)

/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 6, AI_STATIC)

/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 108, AI_STATIC)

/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18, AI_STATIC)

/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 864, AI_STATIC)

/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 24, AI_STATIC)

/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 216, AI_STATIC)

/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 24, AI_STATIC)

/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 320, AI_STATIC)

/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 40, AI_STATIC)

/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 360, AI_STATIC)

/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 40, AI_STATIC)

/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 320, AI_STATIC)

/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 320, AI_STATIC)

/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 40, AI_STATIC)

/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 360, AI_STATIC)

/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 40, AI_STATIC)

/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_39_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 320, AI_STATIC)

/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_39_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 24, AI_STATIC)

/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1920, AI_STATIC)

/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 40, AI_STATIC)

/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_46_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 360, AI_STATIC)

/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_46_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 40, AI_STATIC)

/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1280, AI_STATIC)

/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 576, AI_STATIC)

/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  Input_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 64, 64), AI_STRIDE_INIT(4, 4, 4, 12, 768),
  1, &Input_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 32, 32), AI_STRIDE_INIT(4, 4, 4, 32, 1024),
  1, &conv2d_1_output_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 32, 32), AI_STRIDE_INIT(4, 4, 4, 32, 1024),
  1, &conv2d_3_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 32, 32), AI_STRIDE_INIT(4, 4, 4, 16, 512),
  1, &conv2d_5_output_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 32, 32), AI_STRIDE_INIT(4, 4, 4, 72, 2304),
  1, &conv2d_6_output_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 16, 16), AI_STRIDE_INIT(4, 4, 4, 72, 1152),
  1, &conv2d_10_output_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 16, 16), AI_STRIDE_INIT(4, 4, 4, 24, 384),
  1, &conv2d_12_output_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 16, 16), AI_STRIDE_INIT(4, 4, 4, 144, 2304),
  1, &conv2d_13_output_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 16, 16), AI_STRIDE_INIT(4, 4, 4, 144, 2304),
  1, &conv2d_15_output_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 16, 16), AI_STRIDE_INIT(4, 4, 4, 24, 384),
  1, &conv2d_17_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_18_output, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 16, 16), AI_STRIDE_INIT(4, 4, 4, 24, 384),
  1, &eltwise_18_output_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 16, 16), AI_STRIDE_INIT(4, 4, 4, 72, 1152),
  1, &conv2d_19_output_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  pool_8_output, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 16, 16), AI_STRIDE_INIT(4, 4, 4, 72, 1152),
  1, &pool_8_output_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  concat_21_output, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 16, 16), AI_STRIDE_INIT(4, 4, 4, 144, 2304),
  1, &concat_21_output_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 16, 16), AI_STRIDE_INIT(4, 4, 4, 96, 1536),
  1, &conv2d_22_output_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 8, 8), AI_STRIDE_INIT(4, 4, 4, 96, 768),
  1, &conv2d_26_output_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 8, 8), AI_STRIDE_INIT(4, 4, 4, 32, 256),
  1, &conv2d_28_output_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_output, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 8, 8), AI_STRIDE_INIT(4, 4, 4, 160, 1280),
  1, &conv2d_29_output_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 8, 8), AI_STRIDE_INIT(4, 4, 4, 160, 1280),
  1, &conv2d_31_output_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_output, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 8, 8), AI_STRIDE_INIT(4, 4, 4, 32, 256),
  1, &conv2d_33_output_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_34_output, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 8, 8), AI_STRIDE_INIT(4, 4, 4, 32, 256),
  1, &eltwise_34_output_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 8, 8), AI_STRIDE_INIT(4, 4, 4, 160, 1280),
  1, &conv2d_35_output_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 8, 8), AI_STRIDE_INIT(4, 4, 4, 160, 1280),
  1, &conv2d_37_output_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_39_output, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 8, 8), AI_STRIDE_INIT(4, 4, 4, 32, 256),
  1, &conv2d_39_output_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_40_output, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 8, 8), AI_STRIDE_INIT(4, 4, 4, 32, 256),
  1, &eltwise_40_output_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  25, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 8, 8), AI_STRIDE_INIT(4, 4, 4, 96, 768),
  1, &conv2d_41_output_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  pool_24_output, AI_STATIC,
  26, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 8, 8), AI_STRIDE_INIT(4, 4, 4, 96, 768),
  1, &pool_24_output_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  concat_43_output, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 8, 8), AI_STRIDE_INIT(4, 4, 4, 192, 1536),
  1, &concat_43_output_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_output, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 8, 8), AI_STRIDE_INIT(4, 4, 4, 160, 1280),
  1, &conv2d_44_output_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_46_output, AI_STATIC,
  29, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 8, 8), AI_STRIDE_INIT(4, 4, 4, 160, 1280),
  1, &conv2d_46_output_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  30, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 8, 8), AI_STRIDE_INIT(4, 4, 4, 128, 1024),
  1, &conv2d_48_output_array, NULL)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  31, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 8, 8), AI_STRIDE_INIT(4, 4, 4, 72, 576),
  1, &conv2d_50_output_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  32, 0x0,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 4, 12, 36, 108),
  1, &conv2d_1_weights_array, NULL)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  33, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  34, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 8), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_3_weights_array, NULL)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  35, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  36, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 1, 4), AI_STRIDE_INIT(4, 4, 32, 32, 32),
  1, &conv2d_5_weights_array, NULL)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  37, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  38, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 1, 18), AI_STRIDE_INIT(4, 4, 16, 16, 16),
  1, &conv2d_6_weights_array, NULL)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  39, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  40, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 18), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_10_weights_array, NULL)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  41, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  42, 0x0,
  AI_SHAPE_INIT(4, 18, 1, 1, 6), AI_STRIDE_INIT(4, 4, 72, 72, 72),
  1, &conv2d_12_weights_array, NULL)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  43, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 1, 1), AI_STRIDE_INIT(4, 4, 4, 24, 24),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  44, 0x0,
  AI_SHAPE_INIT(4, 6, 1, 1, 36), AI_STRIDE_INIT(4, 4, 24, 24, 24),
  1, &conv2d_13_weights_array, NULL)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  45, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  46, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 36), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_15_weights_array, NULL)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  47, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_weights, AI_STATIC,
  48, 0x0,
  AI_SHAPE_INIT(4, 36, 1, 1, 6), AI_STRIDE_INIT(4, 4, 144, 144, 144),
  1, &conv2d_17_weights_array, NULL)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_bias, AI_STATIC,
  49, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 1, 1), AI_STRIDE_INIT(4, 4, 4, 24, 24),
  1, &conv2d_17_bias_array, NULL)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  50, 0x0,
  AI_SHAPE_INIT(4, 6, 1, 1, 18), AI_STRIDE_INIT(4, 4, 24, 24, 24),
  1, &conv2d_19_weights_array, NULL)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  51, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  52, 0x0,
  AI_SHAPE_INIT(4, 36, 1, 1, 24), AI_STRIDE_INIT(4, 4, 144, 144, 144),
  1, &conv2d_22_weights_array, NULL)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  53, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  54, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 24), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_26_weights_array, NULL)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  55, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  56, 0x0,
  AI_SHAPE_INIT(4, 24, 1, 1, 8), AI_STRIDE_INIT(4, 4, 96, 96, 96),
  1, &conv2d_28_weights_array, NULL)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  57, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_weights, AI_STATIC,
  58, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 4, 32, 32, 32),
  1, &conv2d_29_weights_array, NULL)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_bias, AI_STATIC,
  59, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_29_bias_array, NULL)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  60, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 40), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_31_weights_array, NULL)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  61, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_weights, AI_STATIC,
  62, 0x0,
  AI_SHAPE_INIT(4, 40, 1, 1, 8), AI_STRIDE_INIT(4, 4, 160, 160, 160),
  1, &conv2d_33_weights_array, NULL)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_bias, AI_STATIC,
  63, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_33_bias_array, NULL)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  64, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 4, 32, 32, 32),
  1, &conv2d_35_weights_array, NULL)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  65, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  66, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 40), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_37_weights_array, NULL)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  67, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_39_weights, AI_STATIC,
  68, 0x0,
  AI_SHAPE_INIT(4, 40, 1, 1, 8), AI_STRIDE_INIT(4, 4, 160, 160, 160),
  1, &conv2d_39_weights_array, NULL)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_39_bias, AI_STATIC,
  69, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_39_bias_array, NULL)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  70, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 1, 24), AI_STRIDE_INIT(4, 4, 32, 32, 32),
  1, &conv2d_41_weights_array, NULL)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  71, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_weights, AI_STATIC,
  72, 0x0,
  AI_SHAPE_INIT(4, 48, 1, 1, 40), AI_STRIDE_INIT(4, 4, 192, 192, 192),
  1, &conv2d_44_weights_array, NULL)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_bias, AI_STATIC,
  73, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_44_bias_array, NULL)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_46_weights, AI_STATIC,
  74, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 40), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_46_weights_array, NULL)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_46_bias, AI_STATIC,
  75, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_46_bias_array, NULL)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  76, 0x0,
  AI_SHAPE_INIT(4, 40, 1, 1, 32), AI_STRIDE_INIT(4, 4, 160, 160, 160),
  1, &conv2d_48_weights_array, NULL)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  77, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  78, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 18), AI_STRIDE_INIT(4, 4, 128, 128, 128),
  1, &conv2d_50_weights_array, NULL)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  79, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_50_bias_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_50_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_50_weights, &conv2d_50_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_50_layer, 50,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_50_chain,
  NULL, &conv2d_50_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_48_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_48_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_48_nl_params_data, conv2d_48_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_48_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_48_weights, &conv2d_48_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_48_layer, 49,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_48_chain,
  NULL, &conv2d_50_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_48_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_46_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_46_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_46_nl_params_data, conv2d_46_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_46_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_46_weights, &conv2d_46_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_46_layer, 47,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_46_chain,
  NULL, &conv2d_48_layer, AI_STATIC, 
  .groups = 40, 
  .nl_params = &conv2d_46_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_float conv2d_44_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_44_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_44_nl_params_data, conv2d_44_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_44_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &concat_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_44_weights, &conv2d_44_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_44_layer, 45,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_44_chain,
  NULL, &conv2d_46_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_44_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  concat_43_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &pool_24_output, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &concat_43_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  concat_43_layer, 43,
  CONCAT_TYPE, 0x0, NULL,
  concat, forward_concat,
  &concat_43_chain,
  NULL, &conv2d_44_layer, AI_STATIC, 
  .axis = AI_SHAPE_CHANNEL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_24_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_24_layer, 24,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &pool_24_chain,
  NULL, &concat_43_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(4, 4), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 1, 1, 2, 2), 
)


AI_STATIC_CONST ai_float conv2d_41_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_41_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_41_nl_params_data, conv2d_41_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_41_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_41_weights, &conv2d_41_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_41_layer, 42,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_41_chain,
  NULL, &pool_24_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_41_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_40_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_34_output, &conv2d_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_40_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_40_layer, 40,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &eltwise_40_chain,
  NULL, &conv2d_41_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_39_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_39_weights, &conv2d_39_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_39_layer, 39,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_39_chain,
  NULL, &eltwise_40_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_37_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_37_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_37_nl_params_data, conv2d_37_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_37_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_37_weights, &conv2d_37_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_37_layer, 38,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_37_chain,
  NULL, &conv2d_39_layer, AI_STATIC, 
  .groups = 40, 
  .nl_params = &conv2d_37_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_float conv2d_35_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_35_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_35_nl_params_data, conv2d_35_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_35_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_35_weights, &conv2d_35_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_35_layer, 36,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_35_chain,
  NULL, &conv2d_37_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_35_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_34_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_output, &conv2d_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_34_layer, 34,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &eltwise_34_chain,
  NULL, &conv2d_35_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_33_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_33_weights, &conv2d_33_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_33_layer, 33,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_33_chain,
  NULL, &eltwise_34_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_31_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_31_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_31_nl_params_data, conv2d_31_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_31_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_31_weights, &conv2d_31_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_31_layer, 32,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_31_chain,
  NULL, &conv2d_33_layer, AI_STATIC, 
  .groups = 40, 
  .nl_params = &conv2d_31_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_float conv2d_29_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_29_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_29_nl_params_data, conv2d_29_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_29_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_29_weights, &conv2d_29_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_29_layer, 30,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_29_chain,
  NULL, &conv2d_31_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_29_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_28_weights, &conv2d_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_28_layer, 28,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_28_chain,
  NULL, &conv2d_29_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_26_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_26_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_26_nl_params_data, conv2d_26_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_26_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_26_weights, &conv2d_26_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_26_layer, 27,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_26_chain,
  NULL, &conv2d_28_layer, AI_STATIC, 
  .groups = 24, 
  .nl_params = &conv2d_26_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_22_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_22_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_22_nl_params_data, conv2d_22_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &concat_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_22_weights, &conv2d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_layer, 23,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_22_chain,
  NULL, &conv2d_26_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_22_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  concat_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &pool_8_output, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &concat_21_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  concat_21_layer, 21,
  CONCAT_TYPE, 0x0, NULL,
  concat, forward_concat,
  &concat_21_chain,
  NULL, &conv2d_22_layer, AI_STATIC, 
  .axis = AI_SHAPE_CHANNEL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_8_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_8_layer, 8,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &pool_8_chain,
  NULL, &concat_21_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(8, 8), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 3, 3, 4, 4), 
)


AI_STATIC_CONST ai_float conv2d_19_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_19_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_19_nl_params_data, conv2d_19_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_19_weights, &conv2d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_19_layer, 20,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_19_chain,
  NULL, &pool_8_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_19_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_output, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_18_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_18_layer, 18,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &eltwise_18_chain,
  NULL, &conv2d_19_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_17_weights, &conv2d_17_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_17_layer, 17,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_17_chain,
  NULL, &eltwise_18_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_15_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_15_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_15_nl_params_data, conv2d_15_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 16,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_15_chain,
  NULL, &conv2d_17_layer, AI_STATIC, 
  .groups = 36, 
  .nl_params = &conv2d_15_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_float conv2d_13_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_13_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_13_nl_params_data, conv2d_13_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 14,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_13_chain,
  NULL, &conv2d_15_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_13_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_12_chain,
  NULL, &conv2d_13_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_10_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_10_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_10_nl_params_data, conv2d_10_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 11,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_10_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
  .groups = 18, 
  .nl_params = &conv2d_10_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_6_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_6_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_6_nl_params_data, conv2d_6_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 7,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_6_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_6_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_5_chain,
  NULL, &conv2d_6_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


AI_STATIC_CONST ai_float conv2d_3_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_3_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_3_nl_params_data, conv2d_3_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 4,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_3_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .groups = 8, 
  .nl_params = &conv2d_3_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)


AI_STATIC_CONST ai_float conv2d_1_nl_params_data[] = { 0.0, 0.10000000149011612, -1 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_1_nl_params, AI_ARRAY_FORMAT_FLOAT,
    conv2d_1_nl_params_data, conv2d_1_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &Input_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_1_chain,
  NULL, &conv2d_3_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = &conv2d_1_nl_params, 
  .nl_func = nl_func_relu_generic_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 0, 0), 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 38680, 1, 1),
    38680, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 122184, 1, 1),
    122184, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &Input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conv2d_50_output),
  &conv2d_1_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 38680, 1, 1),
      38680, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 122184, 1, 1),
      122184, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &Input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conv2d_50_output),
  &conv2d_1_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  ai_ptr activations_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_activations_map(activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    Input_output_array.data = AI_PTR(activations_map[0] + 60568);
    Input_output_array.data_start = AI_PTR(activations_map[0] + 60568);
    conv2d_1_output_array.data = AI_PTR(activations_map[0] + 59224);
    conv2d_1_output_array.data_start = AI_PTR(activations_map[0] + 59224);
    conv2d_3_output_array.data = AI_PTR(activations_map[0] + 26456);
    conv2d_3_output_array.data_start = AI_PTR(activations_map[0] + 26456);
    conv2d_5_output_array.data = AI_PTR(activations_map[0] + 25928);
    conv2d_5_output_array.data_start = AI_PTR(activations_map[0] + 25928);
    conv2d_6_output_array.data = AI_PTR(activations_map[0] + 42312);
    conv2d_6_output_array.data_start = AI_PTR(activations_map[0] + 42312);
    conv2d_10_output_array.data = AI_PTR(activations_map[0] + 23880);
    conv2d_10_output_array.data_start = AI_PTR(activations_map[0] + 23880);
    conv2d_12_output_array.data = AI_PTR(activations_map[0] + 116040);
    conv2d_12_output_array.data_start = AI_PTR(activations_map[0] + 116040);
    conv2d_13_output_array.data = AI_PTR(activations_map[0] + 5448);
    conv2d_13_output_array.data_start = AI_PTR(activations_map[0] + 5448);
    conv2d_15_output_array.data = AI_PTR(activations_map[0] + 408);
    conv2d_15_output_array.data_start = AI_PTR(activations_map[0] + 408);
    conv2d_17_output_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_17_output_array.data_start = AI_PTR(activations_map[0] + 0);
    eltwise_18_output_array.data = AI_PTR(activations_map[0] + 6144);
    eltwise_18_output_array.data_start = AI_PTR(activations_map[0] + 6144);
    conv2d_19_output_array.data = AI_PTR(activations_map[0] + 12288);
    conv2d_19_output_array.data_start = AI_PTR(activations_map[0] + 12288);
    pool_8_output_array.data = AI_PTR(activations_map[0] + 39864);
    pool_8_output_array.data_start = AI_PTR(activations_map[0] + 39864);
    concat_21_output_array.data = AI_PTR(activations_map[0] + 58296);
    concat_21_output_array.data_start = AI_PTR(activations_map[0] + 58296);
    conv2d_22_output_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_22_output_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_26_output_array.data = AI_PTR(activations_map[0] + 24576);
    conv2d_26_output_array.data_start = AI_PTR(activations_map[0] + 24576);
    conv2d_28_output_array.data = AI_PTR(activations_map[0] + 30720);
    conv2d_28_output_array.data_start = AI_PTR(activations_map[0] + 30720);
    conv2d_29_output_array.data = AI_PTR(activations_map[0] + 32768);
    conv2d_29_output_array.data_start = AI_PTR(activations_map[0] + 32768);
    conv2d_31_output_array.data = AI_PTR(activations_map[0] + 43008);
    conv2d_31_output_array.data_start = AI_PTR(activations_map[0] + 43008);
    conv2d_33_output_array.data = AI_PTR(activations_map[0] + 24576);
    conv2d_33_output_array.data_start = AI_PTR(activations_map[0] + 24576);
    eltwise_34_output_array.data = AI_PTR(activations_map[0] + 26624);
    eltwise_34_output_array.data_start = AI_PTR(activations_map[0] + 26624);
    conv2d_35_output_array.data = AI_PTR(activations_map[0] + 28672);
    conv2d_35_output_array.data_start = AI_PTR(activations_map[0] + 28672);
    conv2d_37_output_array.data = AI_PTR(activations_map[0] + 38912);
    conv2d_37_output_array.data_start = AI_PTR(activations_map[0] + 38912);
    conv2d_39_output_array.data = AI_PTR(activations_map[0] + 24576);
    conv2d_39_output_array.data_start = AI_PTR(activations_map[0] + 24576);
    eltwise_40_output_array.data = AI_PTR(activations_map[0] + 28672);
    eltwise_40_output_array.data_start = AI_PTR(activations_map[0] + 28672);
    conv2d_41_output_array.data = AI_PTR(activations_map[0] + 30720);
    conv2d_41_output_array.data_start = AI_PTR(activations_map[0] + 30720);
    pool_24_output_array.data = AI_PTR(activations_map[0] + 24576);
    pool_24_output_array.data_start = AI_PTR(activations_map[0] + 24576);
    concat_43_output_array.data = AI_PTR(activations_map[0] + 0);
    concat_43_output_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_44_output_array.data = AI_PTR(activations_map[0] + 12288);
    conv2d_44_output_array.data_start = AI_PTR(activations_map[0] + 12288);
    conv2d_46_output_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_46_output_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_48_output_array.data = AI_PTR(activations_map[0] + 10240);
    conv2d_48_output_array.data_start = AI_PTR(activations_map[0] + 10240);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  ai_ptr weights_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_weights_map(weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(weights_map[0] + 0);
    conv2d_1_weights_array.data_start = AI_PTR(weights_map[0] + 0);
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(weights_map[0] + 864);
    conv2d_1_bias_array.data_start = AI_PTR(weights_map[0] + 864);
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(weights_map[0] + 896);
    conv2d_3_weights_array.data_start = AI_PTR(weights_map[0] + 896);
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(weights_map[0] + 1184);
    conv2d_3_bias_array.data_start = AI_PTR(weights_map[0] + 1184);
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(weights_map[0] + 1216);
    conv2d_5_weights_array.data_start = AI_PTR(weights_map[0] + 1216);
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(weights_map[0] + 1344);
    conv2d_5_bias_array.data_start = AI_PTR(weights_map[0] + 1344);
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(weights_map[0] + 1360);
    conv2d_6_weights_array.data_start = AI_PTR(weights_map[0] + 1360);
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(weights_map[0] + 1648);
    conv2d_6_bias_array.data_start = AI_PTR(weights_map[0] + 1648);
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(weights_map[0] + 1720);
    conv2d_10_weights_array.data_start = AI_PTR(weights_map[0] + 1720);
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(weights_map[0] + 2368);
    conv2d_10_bias_array.data_start = AI_PTR(weights_map[0] + 2368);
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(weights_map[0] + 2440);
    conv2d_12_weights_array.data_start = AI_PTR(weights_map[0] + 2440);
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(weights_map[0] + 2872);
    conv2d_12_bias_array.data_start = AI_PTR(weights_map[0] + 2872);
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(weights_map[0] + 2896);
    conv2d_13_weights_array.data_start = AI_PTR(weights_map[0] + 2896);
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(weights_map[0] + 3760);
    conv2d_13_bias_array.data_start = AI_PTR(weights_map[0] + 3760);
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(weights_map[0] + 3904);
    conv2d_15_weights_array.data_start = AI_PTR(weights_map[0] + 3904);
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(weights_map[0] + 5200);
    conv2d_15_bias_array.data_start = AI_PTR(weights_map[0] + 5200);
    conv2d_17_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_weights_array.data = AI_PTR(weights_map[0] + 5344);
    conv2d_17_weights_array.data_start = AI_PTR(weights_map[0] + 5344);
    conv2d_17_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_bias_array.data = AI_PTR(weights_map[0] + 6208);
    conv2d_17_bias_array.data_start = AI_PTR(weights_map[0] + 6208);
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(weights_map[0] + 6232);
    conv2d_19_weights_array.data_start = AI_PTR(weights_map[0] + 6232);
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(weights_map[0] + 6664);
    conv2d_19_bias_array.data_start = AI_PTR(weights_map[0] + 6664);
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(weights_map[0] + 6736);
    conv2d_22_weights_array.data_start = AI_PTR(weights_map[0] + 6736);
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(weights_map[0] + 10192);
    conv2d_22_bias_array.data_start = AI_PTR(weights_map[0] + 10192);
    conv2d_26_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_weights_array.data = AI_PTR(weights_map[0] + 10288);
    conv2d_26_weights_array.data_start = AI_PTR(weights_map[0] + 10288);
    conv2d_26_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_bias_array.data = AI_PTR(weights_map[0] + 11152);
    conv2d_26_bias_array.data_start = AI_PTR(weights_map[0] + 11152);
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(weights_map[0] + 11248);
    conv2d_28_weights_array.data_start = AI_PTR(weights_map[0] + 11248);
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(weights_map[0] + 12016);
    conv2d_28_bias_array.data_start = AI_PTR(weights_map[0] + 12016);
    conv2d_29_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_29_weights_array.data = AI_PTR(weights_map[0] + 12048);
    conv2d_29_weights_array.data_start = AI_PTR(weights_map[0] + 12048);
    conv2d_29_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_29_bias_array.data = AI_PTR(weights_map[0] + 13328);
    conv2d_29_bias_array.data_start = AI_PTR(weights_map[0] + 13328);
    conv2d_31_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_weights_array.data = AI_PTR(weights_map[0] + 13488);
    conv2d_31_weights_array.data_start = AI_PTR(weights_map[0] + 13488);
    conv2d_31_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_bias_array.data = AI_PTR(weights_map[0] + 14928);
    conv2d_31_bias_array.data_start = AI_PTR(weights_map[0] + 14928);
    conv2d_33_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_33_weights_array.data = AI_PTR(weights_map[0] + 15088);
    conv2d_33_weights_array.data_start = AI_PTR(weights_map[0] + 15088);
    conv2d_33_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_33_bias_array.data = AI_PTR(weights_map[0] + 16368);
    conv2d_33_bias_array.data_start = AI_PTR(weights_map[0] + 16368);
    conv2d_35_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_weights_array.data = AI_PTR(weights_map[0] + 16400);
    conv2d_35_weights_array.data_start = AI_PTR(weights_map[0] + 16400);
    conv2d_35_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_bias_array.data = AI_PTR(weights_map[0] + 17680);
    conv2d_35_bias_array.data_start = AI_PTR(weights_map[0] + 17680);
    conv2d_37_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_weights_array.data = AI_PTR(weights_map[0] + 17840);
    conv2d_37_weights_array.data_start = AI_PTR(weights_map[0] + 17840);
    conv2d_37_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_bias_array.data = AI_PTR(weights_map[0] + 19280);
    conv2d_37_bias_array.data_start = AI_PTR(weights_map[0] + 19280);
    conv2d_39_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_39_weights_array.data = AI_PTR(weights_map[0] + 19440);
    conv2d_39_weights_array.data_start = AI_PTR(weights_map[0] + 19440);
    conv2d_39_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_39_bias_array.data = AI_PTR(weights_map[0] + 20720);
    conv2d_39_bias_array.data_start = AI_PTR(weights_map[0] + 20720);
    conv2d_41_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_weights_array.data = AI_PTR(weights_map[0] + 20752);
    conv2d_41_weights_array.data_start = AI_PTR(weights_map[0] + 20752);
    conv2d_41_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_bias_array.data = AI_PTR(weights_map[0] + 21520);
    conv2d_41_bias_array.data_start = AI_PTR(weights_map[0] + 21520);
    conv2d_44_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_44_weights_array.data = AI_PTR(weights_map[0] + 21616);
    conv2d_44_weights_array.data_start = AI_PTR(weights_map[0] + 21616);
    conv2d_44_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_44_bias_array.data = AI_PTR(weights_map[0] + 29296);
    conv2d_44_bias_array.data_start = AI_PTR(weights_map[0] + 29296);
    conv2d_46_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_46_weights_array.data = AI_PTR(weights_map[0] + 29456);
    conv2d_46_weights_array.data_start = AI_PTR(weights_map[0] + 29456);
    conv2d_46_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_46_bias_array.data = AI_PTR(weights_map[0] + 30896);
    conv2d_46_bias_array.data_start = AI_PTR(weights_map[0] + 30896);
    conv2d_48_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_weights_array.data = AI_PTR(weights_map[0] + 31056);
    conv2d_48_weights_array.data_start = AI_PTR(weights_map[0] + 31056);
    conv2d_48_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_bias_array.data = AI_PTR(weights_map[0] + 36176);
    conv2d_48_bias_array.data_start = AI_PTR(weights_map[0] + 36176);
    conv2d_50_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_weights_array.data = AI_PTR(weights_map[0] + 36304);
    conv2d_50_weights_array.data_start = AI_PTR(weights_map[0] + 36304);
    conv2d_50_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_bias_array.data = AI_PTR(weights_map[0] + 38608);
    conv2d_50_bias_array.data_start = AI_PTR(weights_map[0] + 38608);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/

AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 1933856,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_network_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 1933856,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_network_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_network_create(network, AI_NETWORK_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_network_data_params_get(&params) != true) {
        err = ai_network_get_error(*network);
        return err;
    }
#if defined(AI_NETWORK_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_NETWORK_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_network_init(*network, &params) != true) {
        err = ai_network_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_network_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_network_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_network_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_configure_weights(net_ctx, params);
  ok &= network_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

