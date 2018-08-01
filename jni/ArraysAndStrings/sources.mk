#LOCAL_PATH := $(call my-dir)
#include $(CLEAR_VARS)
sources := IsUnique.cpp IsUniqueTest.cpp
#sources = IsUnique.cpp IsUniqueTest.cpp
LOCAL_SRC_FILES += $(sources:%=ArraysAndStrings/%)
