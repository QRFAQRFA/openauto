// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelStartIndicationMessage.proto

#include "AVChannelStartIndicationMessage.pb.h"

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
namespace messages {
constexpr AVChannelStartIndication::AVChannelStartIndication(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : session_(0)
  , config_(0u){}
struct AVChannelStartIndicationDefaultTypeInternal {
  constexpr AVChannelStartIndicationDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AVChannelStartIndicationDefaultTypeInternal() {}
  union {
    AVChannelStartIndication _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AVChannelStartIndicationDefaultTypeInternal _AVChannelStartIndication_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AVChannelStartIndicationMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AVChannelStartIndicationMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AVChannelStartIndicationMessage_2eproto = nullptr;

const uint32_t TableStruct_AVChannelStartIndicationMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, session_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, config_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::f1x::aasdk::proto::messages::AVChannelStartIndication)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::messages::_AVChannelStartIndication_default_instance_),
};

const char descriptor_table_protodef_AVChannelStartIndicationMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%AVChannelStartIndicationMessage.proto\022"
  "\030f1x.aasdk.proto.messages\";\n\030AVChannelSt"
  "artIndication\022\017\n\007session\030\001 \002(\005\022\016\n\006config"
  "\030\002 \002(\r"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AVChannelStartIndicationMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AVChannelStartIndicationMessage_2eproto = {
  false, false, 126, descriptor_table_protodef_AVChannelStartIndicationMessage_2eproto, "AVChannelStartIndicationMessage.proto", 
  &descriptor_table_AVChannelStartIndicationMessage_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_AVChannelStartIndicationMessage_2eproto::offsets,
  file_level_metadata_AVChannelStartIndicationMessage_2eproto, file_level_enum_descriptors_AVChannelStartIndicationMessage_2eproto, file_level_service_descriptors_AVChannelStartIndicationMessage_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_AVChannelStartIndicationMessage_2eproto_getter() {
  return &descriptor_table_AVChannelStartIndicationMessage_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_AVChannelStartIndicationMessage_2eproto(&descriptor_table_AVChannelStartIndicationMessage_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class AVChannelStartIndication::_Internal {
 public:
  using HasBits = decltype(std::declval<AVChannelStartIndication>()._has_bits_);
  static void set_has_session(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_config(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

AVChannelStartIndication::AVChannelStartIndication(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
}
AVChannelStartIndication::AVChannelStartIndication(const AVChannelStartIndication& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&session_, &from.session_,
    static_cast<size_t>(reinterpret_cast<char*>(&config_) -
    reinterpret_cast<char*>(&session_)) + sizeof(config_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
}

inline void AVChannelStartIndication::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&session_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&config_) -
    reinterpret_cast<char*>(&session_)) + sizeof(config_));
}

AVChannelStartIndication::~AVChannelStartIndication() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void AVChannelStartIndication::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AVChannelStartIndication::ArenaDtor(void* object) {
  AVChannelStartIndication* _this = reinterpret_cast< AVChannelStartIndication* >(object);
  (void)_this;
}
void AVChannelStartIndication::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AVChannelStartIndication::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AVChannelStartIndication::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&session_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&config_) -
        reinterpret_cast<char*>(&session_)) + sizeof(config_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AVChannelStartIndication::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 session = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_session(&has_bits);
          session_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required uint32 config = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_config(&has_bits);
          config_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* AVChannelStartIndication::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 session = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_session(), target);
  }

  // required uint32 config = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_config(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AVChannelStartIndication)
  return target;
}

size_t AVChannelStartIndication::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  size_t total_size = 0;

  if (_internal_has_session()) {
    // required int32 session = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_session());
  }

  if (_internal_has_config()) {
    // required uint32 config = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_config());
  }

  return total_size;
}
size_t AVChannelStartIndication::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 session = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_session());

    // required uint32 config = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_config());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AVChannelStartIndication::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    AVChannelStartIndication::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AVChannelStartIndication::GetClassData() const { return &_class_data_; }

void AVChannelStartIndication::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<AVChannelStartIndication *>(to)->MergeFrom(
      static_cast<const AVChannelStartIndication &>(from));
}


void AVChannelStartIndication::MergeFrom(const AVChannelStartIndication& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      session_ = from.session_;
    }
    if (cached_has_bits & 0x00000002u) {
      config_ = from.config_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AVChannelStartIndication::CopyFrom(const AVChannelStartIndication& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVChannelStartIndication::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void AVChannelStartIndication::InternalSwap(AVChannelStartIndication* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AVChannelStartIndication, config_)
      + sizeof(AVChannelStartIndication::config_)
      - PROTOBUF_FIELD_OFFSET(AVChannelStartIndication, session_)>(
          reinterpret_cast<char*>(&session_),
          reinterpret_cast<char*>(&other->session_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AVChannelStartIndication::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_AVChannelStartIndicationMessage_2eproto_getter, &descriptor_table_AVChannelStartIndicationMessage_2eproto_once,
      file_level_metadata_AVChannelStartIndicationMessage_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::messages::AVChannelStartIndication* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AVChannelStartIndication >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::messages::AVChannelStartIndication >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
