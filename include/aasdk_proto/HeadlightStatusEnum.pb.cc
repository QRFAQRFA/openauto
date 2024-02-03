// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HeadlightStatusEnum.proto

#include "HeadlightStatusEnum.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
constexpr HeadlightStatus::HeadlightStatus(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct HeadlightStatusDefaultTypeInternal {
  constexpr HeadlightStatusDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~HeadlightStatusDefaultTypeInternal() {}
  union {
    HeadlightStatus _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT HeadlightStatusDefaultTypeInternal _HeadlightStatus_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_HeadlightStatusEnum_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_HeadlightStatusEnum_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_HeadlightStatusEnum_2eproto = nullptr;

const uint32_t TableStruct_HeadlightStatusEnum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::enums::HeadlightStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::f1x::aasdk::proto::enums::HeadlightStatus)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::enums::_HeadlightStatus_default_instance_),
};

const char descriptor_table_protodef_HeadlightStatusEnum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031HeadlightStatusEnum.proto\022\025f1x.aasdk.p"
  "roto.enums\"M\n\017HeadlightStatus\":\n\004Enum\022\013\n"
  "\007STATE_0\020\000\022\013\n\007STATE_1\020\001\022\013\n\007STATE_2\020\002\022\013\n\007"
  "STATE_3\020\003"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_HeadlightStatusEnum_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_HeadlightStatusEnum_2eproto = {
  false, false, 129, descriptor_table_protodef_HeadlightStatusEnum_2eproto, "HeadlightStatusEnum.proto", 
  &descriptor_table_HeadlightStatusEnum_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_HeadlightStatusEnum_2eproto::offsets,
  file_level_metadata_HeadlightStatusEnum_2eproto, file_level_enum_descriptors_HeadlightStatusEnum_2eproto, file_level_service_descriptors_HeadlightStatusEnum_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_HeadlightStatusEnum_2eproto_getter() {
  return &descriptor_table_HeadlightStatusEnum_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_HeadlightStatusEnum_2eproto(&descriptor_table_HeadlightStatusEnum_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* HeadlightStatus_Enum_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_HeadlightStatusEnum_2eproto);
  return file_level_enum_descriptors_HeadlightStatusEnum_2eproto[0];
}
bool HeadlightStatus_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr HeadlightStatus_Enum HeadlightStatus::STATE_0;
constexpr HeadlightStatus_Enum HeadlightStatus::STATE_1;
constexpr HeadlightStatus_Enum HeadlightStatus::STATE_2;
constexpr HeadlightStatus_Enum HeadlightStatus::STATE_3;
constexpr HeadlightStatus_Enum HeadlightStatus::Enum_MIN;
constexpr HeadlightStatus_Enum HeadlightStatus::Enum_MAX;
constexpr int HeadlightStatus::Enum_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class HeadlightStatus::_Internal {
 public:
};

HeadlightStatus::HeadlightStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.enums.HeadlightStatus)
}
HeadlightStatus::HeadlightStatus(const HeadlightStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.enums.HeadlightStatus)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData HeadlightStatus::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*HeadlightStatus::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata HeadlightStatus::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_HeadlightStatusEnum_2eproto_getter, &descriptor_table_HeadlightStatusEnum_2eproto_once,
      file_level_metadata_HeadlightStatusEnum_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::enums::HeadlightStatus* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::enums::HeadlightStatus >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::enums::HeadlightStatus >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
