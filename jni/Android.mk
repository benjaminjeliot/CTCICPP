LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_CPP_EXTENSION := .cpp .cc

LOCAL_SRC_FILES = main.cpp

LOCAL_SRC_FILES += ArraysAndStrings/IsUnique.cpp
LOCAL_SRC_FILES += ArraysAndStrings/IsUniqueTest.cpp
LOCAL_SRC_FILES += TreesAndGraphs/RouteBetweenNodes.cpp
LOCAL_SRC_FILES += TreesAndGraphs/RouteBetweenNodesTest.cpp
LOCAL_SRC_FILES += SortingAndSearching/SortedMerge.cpp
LOCAL_SRC_FILES += SortingAndSearching/SortedMergeTest.cpp
LOCAL_SRC_FILES += DummyUnit/DummyUnit.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/DummyUnit

#include $(LOCAL_PATH)/ArraysAndStrings/sources.mk
#LOCAL_PATH= $(call my-dir)
#include $(LOCAL_PATH)/DummyUnit/sources.mk
#include $(call my-dir)/DummyUnit/sources.mk

LOCAL_MODULE := ctci

ifeq ($(TARGET_ARCH_ABI),x86)
    LOCAL_CFLAGS += -ffast-math -mtune=atom -mssse3 -mfpmath=sse
endif

LOCAL_CPPFLAGS += -std=c++11

include $(BUILD_EXECUTABLE)
