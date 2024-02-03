// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LightData.proto

#include "LightData.pb.h"

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
constexpr Light::Light(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : headlight_(0)

  , indicator_(0)

  , hazard_light_on_(false){}
struct LightDefaultTypeInternal {
  constexpr LightDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LightDefaultTypeInternal() {}
  union {
    Light _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LightDefaultTypeInternal _Light_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_LightData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_LightData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_LightData_2eproto = nullptr;

const uint32_t TableStruct_LightData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Light, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Light, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Light, headlight_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Light, indicator_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Light, hazard_light_on_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::f1x::aasdk::proto::data::Light)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_Light_default_instance_),
};

const char descriptor_table_protodef_LightData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017LightData.proto\022\024f1x.aasdk.proto.data\032"
  "\031HeadlightStatusEnum.proto\032\031IndicatorSta"
  "tusEnum.proto\"\240\001\n\005Light\022>\n\theadlight\030\001 \002"
  "(\0162+.f1x.aasdk.proto.enums.HeadlightStat"
  "us.Enum\022>\n\tindicator\030\002 \002(\0162+.f1x.aasdk.p"
  "roto.enums.IndicatorStatus.Enum\022\027\n\017hazar"
  "d_light_on\030\003 \002(\010"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_LightData_2eproto_deps[2] = {
  &::descriptor_table_HeadlightStatusEnum_2eproto,
  &::descriptor_table_IndicatorStatusEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_LightData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_LightData_2eproto = {
  false, false, 256, descriptor_table_protodef_LightData_2eproto, "LightData.proto", 
  &descriptor_table_LightData_2eproto_once, descriptor_table_LightData_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_LightData_2eproto::offsets,
  file_level_metadata_LightData_2eproto, file_level_enum_descriptors_LightData_2eproto, file_level_service_descriptors_LightData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_LightData_2eproto_getter() {
  return &descriptor_table_LightData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_LightData_2eproto(&descriptor_table_LightData_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Light::_Internal {
 public:
  using HasBits = decltype(std::declval<Light>()._has_bits_);
  static void set_has_headlight(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_indicator(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_hazard_light_on(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

Light::Light(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.Light)
}
Light::Light(const Light& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&headlight_, &from.headlight_,
    static_cast<size_t>(reinterpret_cast<char*>(&hazard_light_on_) -
    reinterpret_cast<char*>(&headlight_)) + sizeof(hazard_light_on_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.Light)
}

inline void Light::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&headlight_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&hazard_light_on_) -
    reinterpret_cast<char*>(&headlight_)) + sizeof(hazard_light_on_));
}

Light::~Light() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.Light)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Light::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Light::ArenaDtor(void* object) {
  Light* _this = reinterpret_cast< Light* >(object);
  (void)_this;
}
void Light::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Light::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Light::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.Light)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&headlight_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&hazard_light_on_) -
        reinterpret_cast<char*>(&headlight_)) + sizeof(hazard_light_on_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Light::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required .f1x.aasdk.proto.enums.HeadlightStatus.Enum headlight = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::f1x::aasdk::proto::enums::HeadlightStatus_Enum_IsValid(val))) {
            _internal_set_headlight(static_cast<::f1x::aasdk::proto::enums::HeadlightStatus_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // required .f1x.aasdk.proto.enums.IndicatorStatus.Enum indicator = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::f1x::aasdk::proto::enums::IndicatorStatus_Enum_IsValid(val))) {
            _internal_set_indicator(static_cast<::f1x::aasdk::proto::enums::IndicatorStatus_Enum>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // required bool hazard_light_on = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_hazard_light_on(&has_bits);
          hazard_light_on_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* Light::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.Light)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.HeadlightStatus.Enum headlight = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_headlight(), target);
  }

  // required .f1x.aasdk.proto.enums.IndicatorStatus.Enum indicator = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_indicator(), target);
  }

  // required bool hazard_light_on = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_hazard_light_on(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.Light)
  return target;
}

size_t Light::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.Light)
  size_t total_size = 0;

  if (_internal_has_headlight()) {
    // required .f1x.aasdk.proto.enums.HeadlightStatus.Enum headlight = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_headlight());
  }

  if (_internal_has_indicator()) {
    // required .f1x.aasdk.proto.enums.IndicatorStatus.Enum indicator = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_indicator());
  }

  if (_internal_has_hazard_light_on()) {
    // required bool hazard_light_on = 3;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t Light::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.Light)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .f1x.aasdk.proto.enums.HeadlightStatus.Enum headlight = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_headlight());

    // required .f1x.aasdk.proto.enums.IndicatorStatus.Enum indicator = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_indicator());

    // required bool hazard_light_on = 3;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Light::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Light::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Light::GetClassData() const { return &_class_data_; }

void Light::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Light *>(to)->MergeFrom(
      static_cast<const Light &>(from));
}


void Light::MergeFrom(const Light& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.Light)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      headlight_ = from.headlight_;
    }
    if (cached_has_bits & 0x00000002u) {
      indicator_ = from.indicator_;
    }
    if (cached_has_bits & 0x00000004u) {
      hazard_light_on_ = from.hazard_light_on_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Light::CopyFrom(const Light& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.Light)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Light::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Light::InternalSwap(Light* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Light, hazard_light_on_)
      + sizeof(Light::hazard_light_on_)
      - PROTOBUF_FIELD_OFFSET(Light, headlight_)>(
          reinterpret_cast<char*>(&headlight_),
          reinterpret_cast<char*>(&other->headlight_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Light::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_LightData_2eproto_getter, &descriptor_table_LightData_2eproto_once,
      file_level_metadata_LightData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::Light* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::Light >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::Light >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>