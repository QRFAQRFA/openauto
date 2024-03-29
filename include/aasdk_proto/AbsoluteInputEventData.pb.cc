// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AbsoluteInputEventData.proto

#include "AbsoluteInputEventData.pb.h"

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
namespace data {
constexpr AbsoluteInputEvent::AbsoluteInputEvent(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : scan_code_(0u)
  , value_(0){}
struct AbsoluteInputEventDefaultTypeInternal {
  constexpr AbsoluteInputEventDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AbsoluteInputEventDefaultTypeInternal() {}
  union {
    AbsoluteInputEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AbsoluteInputEventDefaultTypeInternal _AbsoluteInputEvent_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AbsoluteInputEventData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AbsoluteInputEventData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AbsoluteInputEventData_2eproto = nullptr;

const uint32_t TableStruct_AbsoluteInputEventData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::AbsoluteInputEvent, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::AbsoluteInputEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::AbsoluteInputEvent, scan_code_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::AbsoluteInputEvent, value_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::f1x::aasdk::proto::data::AbsoluteInputEvent)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_AbsoluteInputEvent_default_instance_),
};

const char descriptor_table_protodef_AbsoluteInputEventData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034AbsoluteInputEventData.proto\022\024f1x.aasd"
  "k.proto.data\"6\n\022AbsoluteInputEvent\022\021\n\tsc"
  "an_code\030\001 \002(\r\022\r\n\005value\030\002 \002(\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AbsoluteInputEventData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AbsoluteInputEventData_2eproto = {
  false, false, 108, descriptor_table_protodef_AbsoluteInputEventData_2eproto, "AbsoluteInputEventData.proto", 
  &descriptor_table_AbsoluteInputEventData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_AbsoluteInputEventData_2eproto::offsets,
  file_level_metadata_AbsoluteInputEventData_2eproto, file_level_enum_descriptors_AbsoluteInputEventData_2eproto, file_level_service_descriptors_AbsoluteInputEventData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_AbsoluteInputEventData_2eproto_getter() {
  return &descriptor_table_AbsoluteInputEventData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_AbsoluteInputEventData_2eproto(&descriptor_table_AbsoluteInputEventData_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class AbsoluteInputEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<AbsoluteInputEvent>()._has_bits_);
  static void set_has_scan_code(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

AbsoluteInputEvent::AbsoluteInputEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.AbsoluteInputEvent)
}
AbsoluteInputEvent::AbsoluteInputEvent(const AbsoluteInputEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&scan_code_, &from.scan_code_,
    static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&scan_code_)) + sizeof(value_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.AbsoluteInputEvent)
}

inline void AbsoluteInputEvent::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&scan_code_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&scan_code_)) + sizeof(value_));
}

AbsoluteInputEvent::~AbsoluteInputEvent() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.AbsoluteInputEvent)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void AbsoluteInputEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AbsoluteInputEvent::ArenaDtor(void* object) {
  AbsoluteInputEvent* _this = reinterpret_cast< AbsoluteInputEvent* >(object);
  (void)_this;
}
void AbsoluteInputEvent::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AbsoluteInputEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AbsoluteInputEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.AbsoluteInputEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&scan_code_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&value_) -
        reinterpret_cast<char*>(&scan_code_)) + sizeof(value_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AbsoluteInputEvent::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required uint32 scan_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_scan_code(&has_bits);
          scan_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_value(&has_bits);
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* AbsoluteInputEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.AbsoluteInputEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 scan_code = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_scan_code(), target);
  }

  // required int32 value = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.AbsoluteInputEvent)
  return target;
}

size_t AbsoluteInputEvent::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.AbsoluteInputEvent)
  size_t total_size = 0;

  if (_internal_has_scan_code()) {
    // required uint32 scan_code = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_scan_code());
  }

  if (_internal_has_value()) {
    // required int32 value = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_value());
  }

  return total_size;
}
size_t AbsoluteInputEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.AbsoluteInputEvent)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 scan_code = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_scan_code());

    // required int32 value = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_value());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AbsoluteInputEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    AbsoluteInputEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AbsoluteInputEvent::GetClassData() const { return &_class_data_; }

void AbsoluteInputEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<AbsoluteInputEvent *>(to)->MergeFrom(
      static_cast<const AbsoluteInputEvent &>(from));
}


void AbsoluteInputEvent::MergeFrom(const AbsoluteInputEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.AbsoluteInputEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      scan_code_ = from.scan_code_;
    }
    if (cached_has_bits & 0x00000002u) {
      value_ = from.value_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AbsoluteInputEvent::CopyFrom(const AbsoluteInputEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.AbsoluteInputEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AbsoluteInputEvent::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void AbsoluteInputEvent::InternalSwap(AbsoluteInputEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AbsoluteInputEvent, value_)
      + sizeof(AbsoluteInputEvent::value_)
      - PROTOBUF_FIELD_OFFSET(AbsoluteInputEvent, scan_code_)>(
          reinterpret_cast<char*>(&scan_code_),
          reinterpret_cast<char*>(&other->scan_code_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AbsoluteInputEvent::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_AbsoluteInputEventData_2eproto_getter, &descriptor_table_AbsoluteInputEventData_2eproto_once,
      file_level_metadata_AbsoluteInputEventData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::AbsoluteInputEvent* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::AbsoluteInputEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::AbsoluteInputEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
