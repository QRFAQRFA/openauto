// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NightModeData.proto

#include "NightModeData.pb.h"

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
constexpr NightMode::NightMode(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : is_night_(false){}
struct NightModeDefaultTypeInternal {
  constexpr NightModeDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NightModeDefaultTypeInternal() {}
  union {
    NightMode _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NightModeDefaultTypeInternal _NightMode_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_NightModeData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_NightModeData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_NightModeData_2eproto = nullptr;

const uint32_t TableStruct_NightModeData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NightMode, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NightMode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::NightMode, is_night_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, -1, sizeof(::f1x::aasdk::proto::data::NightMode)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_NightMode_default_instance_),
};

const char descriptor_table_protodef_NightModeData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023NightModeData.proto\022\024f1x.aasdk.proto.d"
  "ata\"\035\n\tNightMode\022\020\n\010is_night\030\001 \002(\010"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_NightModeData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NightModeData_2eproto = {
  false, false, 74, descriptor_table_protodef_NightModeData_2eproto, "NightModeData.proto", 
  &descriptor_table_NightModeData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_NightModeData_2eproto::offsets,
  file_level_metadata_NightModeData_2eproto, file_level_enum_descriptors_NightModeData_2eproto, file_level_service_descriptors_NightModeData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_NightModeData_2eproto_getter() {
  return &descriptor_table_NightModeData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_NightModeData_2eproto(&descriptor_table_NightModeData_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class NightMode::_Internal {
 public:
  using HasBits = decltype(std::declval<NightMode>()._has_bits_);
  static void set_has_is_night(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

NightMode::NightMode(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.NightMode)
}
NightMode::NightMode(const NightMode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  is_night_ = from.is_night_;
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.NightMode)
}

inline void NightMode::SharedCtor() {
is_night_ = false;
}

NightMode::~NightMode() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.NightMode)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void NightMode::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void NightMode::ArenaDtor(void* object) {
  NightMode* _this = reinterpret_cast< NightMode* >(object);
  (void)_this;
}
void NightMode::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NightMode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NightMode::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.NightMode)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  is_night_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NightMode::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required bool is_night = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_is_night(&has_bits);
          is_night_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* NightMode::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.NightMode)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool is_night = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_is_night(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.NightMode)
  return target;
}

size_t NightMode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.NightMode)
  size_t total_size = 0;

  // required bool is_night = 1;
  if (_internal_has_is_night()) {
    total_size += 1 + 1;
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NightMode::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    NightMode::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NightMode::GetClassData() const { return &_class_data_; }

void NightMode::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<NightMode *>(to)->MergeFrom(
      static_cast<const NightMode &>(from));
}


void NightMode::MergeFrom(const NightMode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.NightMode)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_is_night()) {
    _internal_set_is_night(from._internal_is_night());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NightMode::CopyFrom(const NightMode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.NightMode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NightMode::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void NightMode::InternalSwap(NightMode* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(is_night_, other->is_night_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NightMode::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_NightModeData_2eproto_getter, &descriptor_table_NightModeData_2eproto_once,
      file_level_metadata_NightModeData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::NightMode* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::NightMode >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::NightMode >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
