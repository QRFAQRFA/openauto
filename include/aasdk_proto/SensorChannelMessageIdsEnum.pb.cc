// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorChannelMessageIdsEnum.proto

#include "SensorChannelMessageIdsEnum.pb.h"

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
namespace ids {
constexpr SensorChannelMessage::SensorChannelMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct SensorChannelMessageDefaultTypeInternal {
  constexpr SensorChannelMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SensorChannelMessageDefaultTypeInternal() {}
  union {
    SensorChannelMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SensorChannelMessageDefaultTypeInternal _SensorChannelMessage_default_instance_;
}  // namespace ids
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SensorChannelMessageIdsEnum_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_SensorChannelMessageIdsEnum_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SensorChannelMessageIdsEnum_2eproto = nullptr;

const uint32_t TableStruct_SensorChannelMessageIdsEnum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::ids::SensorChannelMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::f1x::aasdk::proto::ids::SensorChannelMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::ids::_SensorChannelMessage_default_instance_),
};

const char descriptor_table_protodef_SensorChannelMessageIdsEnum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!SensorChannelMessageIdsEnum.proto\022\023f1x"
  ".aasdk.proto.ids\"\200\001\n\024SensorChannelMessag"
  "e\"h\n\004Enum\022\010\n\004NONE\020\000\022\032\n\024SENSOR_START_REQU"
  "EST\020\201\200\002\022\033\n\025SENSOR_START_RESPONSE\020\202\200\002\022\035\n\027"
  "SENSOR_EVENT_INDICATION\020\203\200\002"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SensorChannelMessageIdsEnum_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SensorChannelMessageIdsEnum_2eproto = {
  false, false, 187, descriptor_table_protodef_SensorChannelMessageIdsEnum_2eproto, "SensorChannelMessageIdsEnum.proto", 
  &descriptor_table_SensorChannelMessageIdsEnum_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_SensorChannelMessageIdsEnum_2eproto::offsets,
  file_level_metadata_SensorChannelMessageIdsEnum_2eproto, file_level_enum_descriptors_SensorChannelMessageIdsEnum_2eproto, file_level_service_descriptors_SensorChannelMessageIdsEnum_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_SensorChannelMessageIdsEnum_2eproto_getter() {
  return &descriptor_table_SensorChannelMessageIdsEnum_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_SensorChannelMessageIdsEnum_2eproto(&descriptor_table_SensorChannelMessageIdsEnum_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace ids {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SensorChannelMessage_Enum_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_SensorChannelMessageIdsEnum_2eproto);
  return file_level_enum_descriptors_SensorChannelMessageIdsEnum_2eproto[0];
}
bool SensorChannelMessage_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 32769:
    case 32770:
    case 32771:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr SensorChannelMessage_Enum SensorChannelMessage::NONE;
constexpr SensorChannelMessage_Enum SensorChannelMessage::SENSOR_START_REQUEST;
constexpr SensorChannelMessage_Enum SensorChannelMessage::SENSOR_START_RESPONSE;
constexpr SensorChannelMessage_Enum SensorChannelMessage::SENSOR_EVENT_INDICATION;
constexpr SensorChannelMessage_Enum SensorChannelMessage::Enum_MIN;
constexpr SensorChannelMessage_Enum SensorChannelMessage::Enum_MAX;
constexpr int SensorChannelMessage::Enum_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class SensorChannelMessage::_Internal {
 public:
};

SensorChannelMessage::SensorChannelMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.ids.SensorChannelMessage)
}
SensorChannelMessage::SensorChannelMessage(const SensorChannelMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.ids.SensorChannelMessage)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SensorChannelMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SensorChannelMessage::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata SensorChannelMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_SensorChannelMessageIdsEnum_2eproto_getter, &descriptor_table_SensorChannelMessageIdsEnum_2eproto_once,
      file_level_metadata_SensorChannelMessageIdsEnum_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace ids
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::ids::SensorChannelMessage* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::ids::SensorChannelMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::ids::SensorChannelMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
