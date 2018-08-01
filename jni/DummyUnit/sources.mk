#LOCAL_PATH := $(call my-dir)
#include $(CLEAR_VARS)
sources := DummyUnit.cpp
#sources = DummyUnit.cpp
LOCAL_SRC_FILES += $(sources:%=DummyUnit/%)
