// Copyright (c) 2022-2023 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef ROCPRIM_DEVICE_DETAIL_CONFIG_DEVICE_MERGE_SORT_BLOCK_SORT_HPP_
#define ROCPRIM_DEVICE_DETAIL_CONFIG_DEVICE_MERGE_SORT_BLOCK_SORT_HPP_

#include "../../../type_traits.hpp"
#include "../device_config_helper.hpp"
#include <type_traits>

/* DO NOT EDIT THIS FILE
 * This file is automatically generated by `/scripts/autotune/create_optimization.py`.
 * so most likely you want to edit rocprim/device/device_(algo)_config.hpp
 */

/// \addtogroup primitivesmodule_deviceconfigs
/// @{

BEGIN_ROCPRIM_NAMESPACE

namespace detail
{

template<unsigned int arch,
         class key_type,
         class value_type = rocprim::empty_type,
         class enable     = void>
struct default_merge_sort_block_sort_config
    : merge_sort_block_sort_config_base<key_type, value_type>::type
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            double,
                                            empty_type>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            float,
                                            empty_type>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            int,
                                            empty_type>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            int,
                                            float>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            int64_t,
                                            double>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            int64_t,
                                            empty_type>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            int8_t,
                                            empty_type>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            int8_t,
                                            int8_t>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            rocprim::half,
                                            empty_type>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            rocprim::half,
                                            rocprim::half>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            short,
                                            empty_type>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            short,
                                            short>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx900),
                                            uint8_t,
                                            uint8_t>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = double, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx900),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = float, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx900),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = rocprim::half, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx900),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int64_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx900),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx900),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = short, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx900),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (sizeof(key_type) > 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int8_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx900),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            double,
                                            empty_type>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            float,
                                            empty_type>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            int,
                                            empty_type>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            int,
                                            float>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            int64_t,
                                            double>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            int64_t,
                                            empty_type>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            int8_t,
                                            empty_type>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            int8_t,
                                            int8_t>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            rocprim::half,
                                            empty_type>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            rocprim::half,
                                            rocprim::half>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            short,
                                            empty_type>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            short,
                                            short>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx906),
                                            uint8_t,
                                            uint8_t>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = double, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx906),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = float, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx906),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = rocprim::half, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx906),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int64_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx906),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx906),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = short, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx906),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (sizeof(key_type) > 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int8_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx906),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            double,
                                            empty_type>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            float,
                                            empty_type>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            int,
                                            empty_type>
    : merge_sort_block_sort_config<512, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            int,
                                            float>
    : merge_sort_block_sort_config<512, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            int64_t,
                                            double>
    : merge_sort_block_sort_config<512, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            int64_t,
                                            empty_type>
    : merge_sort_block_sort_config<512, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            int8_t,
                                            empty_type>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            int8_t,
                                            int8_t>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            rocprim::half,
                                            empty_type>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            rocprim::half,
                                            rocprim::half>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            short,
                                            empty_type>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            short,
                                            short>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx908),
                                            uint8_t,
                                            uint8_t>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = double, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx908),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = float, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx908),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = rocprim::half, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx908),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int64_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx908),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<512, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx908),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<512, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = short, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx908),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (sizeof(key_type) > 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int8_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx908),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            double,
                                            empty_type>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            float,
                                            empty_type>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            int,
                                            empty_type>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            int,
                                            float>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            int64_t,
                                            double>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            int64_t,
                                            empty_type>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            int8_t,
                                            empty_type>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            int8_t,
                                            int8_t>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            rocprim::half,
                                            empty_type>
    : merge_sort_block_sort_config<512, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            rocprim::half,
                                            rocprim::half>
    : merge_sort_block_sort_config<512, 8, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            short,
                                            empty_type>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            short,
                                            short>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

template<>
struct default_merge_sort_block_sort_config<static_cast<unsigned int>(target_arch::gfx1030),
                                            uint8_t,
                                            uint8_t>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = double, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx1030),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = float, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx1030),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = rocprim::half, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx1030),
    key_type,
    value_type,
    std::enable_if_t<(bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<512, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int64_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx1030),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 8)
                      && (sizeof(key_type) > 4)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 4, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx1030),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 4)
                      && (sizeof(key_type) > 2)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 8, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = short, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx1030),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 2)
                      && (sizeof(key_type) > 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 16, block_sort_algorithm::stable_merge_sort>
{};

// Based on key_type = int8_t, value_type = rocprim::empty_type
template<class key_type, class value_type>
struct default_merge_sort_block_sort_config<
    static_cast<unsigned int>(target_arch::gfx1030),
    key_type,
    value_type,
    std::enable_if_t<(!bool(rocprim::is_floating_point<key_type>::value) && (sizeof(key_type) <= 1)
                      && (std::is_same<value_type, rocprim::empty_type>::value))>>
    : merge_sort_block_sort_config<256, 32, block_sort_algorithm::stable_merge_sort>
{};

} // end namespace detail

END_ROCPRIM_NAMESPACE

/// @}
// end of group primitivesmodule_deviceconfigs

#endif // ROCPRIM_DEVICE_DETAIL_CONFIG_DEVICE_MERGE_SORT_BLOCK_SORT_HPP_
