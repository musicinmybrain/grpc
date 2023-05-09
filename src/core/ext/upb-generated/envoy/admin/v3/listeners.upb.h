/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/listeners.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V3_LISTENERS_PROTO_UPB_H_
#define ENVOY_ADMIN_V3_LISTENERS_PROTO_UPB_H_

#include "upb/collections/array_internal.h"
#include "upb/collections/map_gencode_util.h"
#include "upb/message/accessors.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "upb/wire/decode.h"
#include "upb/wire/decode_fast.h"
#include "upb/wire/encode.h"

// Must be last. 
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_admin_v3_Listeners envoy_admin_v3_Listeners;
typedef struct envoy_admin_v3_ListenerStatus envoy_admin_v3_ListenerStatus;
extern const upb_MiniTable envoy_admin_v3_Listeners_msg_init;
extern const upb_MiniTable envoy_admin_v3_ListenerStatus_msg_init;
struct envoy_config_core_v3_Address;
extern const upb_MiniTable envoy_config_core_v3_Address_msg_init;



/* envoy.admin.v3.Listeners */

UPB_INLINE envoy_admin_v3_Listeners* envoy_admin_v3_Listeners_new(upb_Arena* arena) {
  return (envoy_admin_v3_Listeners*)_upb_Message_New(&envoy_admin_v3_Listeners_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_Listeners* envoy_admin_v3_Listeners_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_Listeners* ret = envoy_admin_v3_Listeners_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_Listeners_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_Listeners* envoy_admin_v3_Listeners_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_Listeners* ret = envoy_admin_v3_Listeners_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_Listeners_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_Listeners_serialize(const envoy_admin_v3_Listeners* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_Listeners_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_Listeners_serialize_ex(const envoy_admin_v3_Listeners* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_Listeners_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_admin_v3_Listeners_clear_listener_statuses(envoy_admin_v3_Listeners* msg) {
  const upb_MiniTableField field = {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const envoy_admin_v3_ListenerStatus* const* envoy_admin_v3_Listeners_listener_statuses(const envoy_admin_v3_Listeners* msg, size_t* size) {
  const upb_MiniTableField field = {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (const envoy_admin_v3_ListenerStatus* const*)_upb_array_constptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE const upb_Array* _envoy_admin_v3_Listeners_listener_statuses_upb_array(const envoy_admin_v3_Listeners* msg, size_t* size) {
  const upb_MiniTableField field = {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE upb_Array* _envoy_admin_v3_Listeners_listener_statuses_mutable_upb_array(const envoy_admin_v3_Listeners* msg, size_t* size, upb_Arena* arena) {
  const upb_MiniTableField field = {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(
      (upb_Message*)msg, &field, arena);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE bool envoy_admin_v3_Listeners_has_listener_statuses(const envoy_admin_v3_Listeners* msg) {
  size_t size;
  envoy_admin_v3_Listeners_listener_statuses(msg, &size);
  return size != 0;
}

UPB_INLINE envoy_admin_v3_ListenerStatus** envoy_admin_v3_Listeners_mutable_listener_statuses(envoy_admin_v3_Listeners* msg, size_t* size) {
  upb_MiniTableField field = {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetMutableArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (envoy_admin_v3_ListenerStatus**)_upb_array_ptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE envoy_admin_v3_ListenerStatus** envoy_admin_v3_Listeners_resize_listener_statuses(envoy_admin_v3_Listeners* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (envoy_admin_v3_ListenerStatus**)upb_Message_ResizeArray(msg, &field, size, arena);
}
UPB_INLINE struct envoy_admin_v3_ListenerStatus* envoy_admin_v3_Listeners_add_listener_statuses(envoy_admin_v3_Listeners* msg, upb_Arena* arena) {
  upb_MiniTableField field = {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(msg, &field, arena);
  if (!arr || !_upb_Array_ResizeUninitialized(arr, arr->size + 1, arena)) {
    return NULL;
  }
  struct envoy_admin_v3_ListenerStatus* sub = (struct envoy_admin_v3_ListenerStatus*)_upb_Message_New(&envoy_admin_v3_ListenerStatus_msg_init, arena);
  if (!arr || !sub) return NULL;
  _upb_Array_Set(arr, arr->size - 1, &sub, sizeof(sub));
  return sub;
}

/* envoy.admin.v3.ListenerStatus */

UPB_INLINE envoy_admin_v3_ListenerStatus* envoy_admin_v3_ListenerStatus_new(upb_Arena* arena) {
  return (envoy_admin_v3_ListenerStatus*)_upb_Message_New(&envoy_admin_v3_ListenerStatus_msg_init, arena);
}
UPB_INLINE envoy_admin_v3_ListenerStatus* envoy_admin_v3_ListenerStatus_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_ListenerStatus* ret = envoy_admin_v3_ListenerStatus_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_ListenerStatus_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_ListenerStatus* envoy_admin_v3_ListenerStatus_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_ListenerStatus* ret = envoy_admin_v3_ListenerStatus_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_ListenerStatus_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_ListenerStatus_serialize(const envoy_admin_v3_ListenerStatus* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_ListenerStatus_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_admin_v3_ListenerStatus_serialize_ex(const envoy_admin_v3_ListenerStatus* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_admin_v3_ListenerStatus_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_admin_v3_ListenerStatus_clear_name(envoy_admin_v3_ListenerStatus* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView envoy_admin_v3_ListenerStatus_name(const envoy_admin_v3_ListenerStatus* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {1, UPB_SIZE(12, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void envoy_admin_v3_ListenerStatus_clear_local_address(envoy_admin_v3_ListenerStatus* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_core_v3_Address* envoy_admin_v3_ListenerStatus_local_address(const envoy_admin_v3_ListenerStatus* msg) {
  const struct envoy_config_core_v3_Address* default_val = NULL;
  const struct envoy_config_core_v3_Address* ret;
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_admin_v3_ListenerStatus_has_local_address(const envoy_admin_v3_ListenerStatus* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void envoy_admin_v3_ListenerStatus_clear_additional_local_addresses(envoy_admin_v3_ListenerStatus* msg) {
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_core_v3_Address* const* envoy_admin_v3_ListenerStatus_additional_local_addresses(const envoy_admin_v3_ListenerStatus* msg, size_t* size) {
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (const struct envoy_config_core_v3_Address* const*)_upb_array_constptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE const upb_Array* _envoy_admin_v3_ListenerStatus_additional_local_addresses_upb_array(const envoy_admin_v3_ListenerStatus* msg, size_t* size) {
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE upb_Array* _envoy_admin_v3_ListenerStatus_additional_local_addresses_mutable_upb_array(const envoy_admin_v3_ListenerStatus* msg, size_t* size, upb_Arena* arena) {
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(
      (upb_Message*)msg, &field, arena);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE bool envoy_admin_v3_ListenerStatus_has_additional_local_addresses(const envoy_admin_v3_ListenerStatus* msg) {
  size_t size;
  envoy_admin_v3_ListenerStatus_additional_local_addresses(msg, &size);
  return size != 0;
}

UPB_INLINE void envoy_admin_v3_ListenerStatus_set_name(envoy_admin_v3_ListenerStatus *msg, upb_StringView value) {
  const upb_MiniTableField field = {1, UPB_SIZE(12, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void envoy_admin_v3_ListenerStatus_set_local_address(envoy_admin_v3_ListenerStatus *msg, struct envoy_config_core_v3_Address* value) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct envoy_config_core_v3_Address* envoy_admin_v3_ListenerStatus_mutable_local_address(envoy_admin_v3_ListenerStatus* msg, upb_Arena* arena) {
  struct envoy_config_core_v3_Address* sub = (struct envoy_config_core_v3_Address*)envoy_admin_v3_ListenerStatus_local_address(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_Address*)_upb_Message_New(&envoy_config_core_v3_Address_msg_init, arena);
    if (sub) envoy_admin_v3_ListenerStatus_set_local_address(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_config_core_v3_Address** envoy_admin_v3_ListenerStatus_mutable_additional_local_addresses(envoy_admin_v3_ListenerStatus* msg, size_t* size) {
  upb_MiniTableField field = {3, UPB_SIZE(8, 32), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetMutableArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (struct envoy_config_core_v3_Address**)_upb_array_ptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE struct envoy_config_core_v3_Address** envoy_admin_v3_ListenerStatus_resize_additional_local_addresses(envoy_admin_v3_ListenerStatus* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = {3, UPB_SIZE(8, 32), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (struct envoy_config_core_v3_Address**)upb_Message_ResizeArray(msg, &field, size, arena);
}
UPB_INLINE struct envoy_config_core_v3_Address* envoy_admin_v3_ListenerStatus_add_additional_local_addresses(envoy_admin_v3_ListenerStatus* msg, upb_Arena* arena) {
  upb_MiniTableField field = {3, UPB_SIZE(8, 32), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(msg, &field, arena);
  if (!arr || !_upb_Array_ResizeUninitialized(arr, arr->size + 1, arena)) {
    return NULL;
  }
  struct envoy_config_core_v3_Address* sub = (struct envoy_config_core_v3_Address*)_upb_Message_New(&envoy_config_core_v3_Address_msg_init, arena);
  if (!arr || !sub) return NULL;
  _upb_Array_Set(arr, arr->size - 1, &sub, sizeof(sub));
  return sub;
}

extern const upb_MiniTableFile envoy_admin_v3_listeners_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_ADMIN_V3_LISTENERS_PROTO_UPB_H_ */
