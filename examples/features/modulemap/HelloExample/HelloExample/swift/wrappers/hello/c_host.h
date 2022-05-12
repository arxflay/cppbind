/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-09:43.
 * Please do not change it manually.
 */

#ifndef _C_host_WRAPPER_
#define _C_host_WRAPPER_

#include "c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Host(CppBindCObject cself, bool owner);

    CppBindCObject create_Host(CppBindCObject* _Nonnull cppbind_err);
    char* _Nonnull _func_Host_hello(CppBindCObject cself, CppBindCObject  user, CppBindCObject* _Nonnull cppbind_err);
    char* _Nonnull _func_Host_welcome(CppBindCObject cself, CppBindCObject  user, CppBindCObject* _Nonnull cppbind_err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_host_WRAPPER_ */
