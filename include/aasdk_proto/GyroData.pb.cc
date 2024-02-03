// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GyroData.proto

#include "GyroData.pb.h"

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
constexpr Gyro::Gyro(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : rotation_speed_x_(0)
  , rotation_speed_y_(0)
  , rotation_speed_z_(0){}
struct GyroDefaultTypeInternal {
  constexpr GyroDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GyroDefaultTypeInternal() {}
  union {
    Gyro _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GyroDefaultTypeInternal _Gyro_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_GyroData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_GyroData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_GyroData_2eproto = nullptr;

const uint32_t TableStruct_GyroData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, rotation_speed_x_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, rotation_speed_y_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, rotation_speed_z_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::f1x::aasdk::proto::data::Gyro)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_Gyro_default_instance_),
};

const char descriptor_table_protodef_GyroData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016GyroData.proto\022\024f1x.aasdk.proto.data\"T"
  "\n\004Gyro\022\030\n\020rotation_speed_x\030\001 \002(\005\022\030\n\020rota"
  "tion_speed_y\030\002 \002(\005\022\030\n\020rotation_speed_z\030\003"
  " \002(\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_GyroData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GyroData_2eproto = {
  false, false, 124, descriptor_table_protodef_GyroData_2eproto, "GyroData.proto", 
  &descriptor_table_GyroData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_GyroData_2eproto::offsets,
  file_level_metadata_GyroData_2eproto, file_level_enum_descriptors_GyroData_2eproto, file_level_service_descriptors_GyroData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_GyroData_2eproto_getter() {
  return &descriptor_table_GyroData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_GyroData_2eproto(&descriptor_table_GyroData_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Gyro::_Internal {
 public:
  using HasBits = decltype(std::declval<Gyro>()._has_bits_);
  static void set_has_rotation_speed_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_rotation_speed_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_rotation_speed_z(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

Gyro::Gyro(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.Gyro)
}
Gyro::Gyro(const Gyro& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&rotation_speed_x_, &from.rotation_speed_x_,
    static_cast<size_t>(reinterpret_cast<char*>(&rotation_speed_z_) -
    reinterpret_cast<char*>(&rotation_speed_x_)) + sizeof(rotation_speed_z_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.Gyro)
}

inline void Gyro::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&rotation_speed_x_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&rotation_speed_z_) -
    reinterpret_cast<char*>(&rotation_speed_x_)) + sizeof(rotation_speed_z_));
}

Gyro::~Gyro() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.Gyro)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Gyro::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Gyro::ArenaDtor(void* object) {
  Gyro* _this = reinterpret_cast< Gyro* >(object);
  (void)_this;
}
void Gyro::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Gyro::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Gyro::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.Gyro)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&rotation_speed_x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&rotation_speed_z_) -
        reinterpret_cast<char*>(&rotation_speed_x_)) + sizeof(rotation_speed_z_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Gyro::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 rotation_speed_x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_rotation_speed_x(&has_bits);
          rotation_speed_x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 rotation_speed_y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_rotation_speed_y(&has_bits);
          rotation_speed_y_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 rotation_speed_z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_rotation_speed_z(&has_bits);
          rotation_speed_z_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Gyro::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.Gyro)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 rotation_speed_x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_rotation_speed_x(), target);
  }

  // required int32 rotation_speed_y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_rotation_speed_y(), target);
  }

  // required int32 rotation_speed_z = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_rotation_speed_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.Gyro)
  return target;
}

size_t Gyro::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.Gyro)
  size_t total_size = 0;

  if (_internal_has_rotation_speed_x()) {
    // required int32 rotation_speed_x = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_rotation_speed_x());
  }

  if (_internal_has_rotation_speed_y()) {
    // required int32 rotation_speed_y = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_rotation_speed_y());
  }

  if (_internal_has_rotation_speed_z()) {
    // required int32 rotation_speed_z = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_rotation_speed_z());
  }

  return total_size;
}
size_t Gyro::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.Gyro)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 rotation_speed_x = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_rotation_speed_x());

    // required int32 rotation_speed_y = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_rotation_speed_y());

    // required int32 rotation_speed_z = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_rotation_speed_z());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Gyro::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Gyro::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Gyro::GetClassData() const { return &_class_data_; }

void Gyro::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Gyro *>(to)->MergeFrom(
      static_cast<const Gyro &>(from));
}


void Gyro::MergeFrom(const Gyro& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.Gyro)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      rotation_speed_x_ = from.rotation_speed_x_;
    }
    if (cached_has_bits & 0x00000002u) {
      rotation_speed_y_ = from.rotation_speed_y_;
    }
    if (cached_has_bits & 0x00000004u) {
      rotation_speed_z_ = from.rotation_speed_z_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Gyro::CopyFrom(const Gyro& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.Gyro)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Gyro::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Gyro::InternalSwap(Gyro* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Gyro, rotation_speed_z_)
      + sizeof(Gyro::rotation_speed_z_)
      - PROTOBUF_FIELD_OFFSET(Gyro, rotation_speed_x_)>(
          reinterpret_cast<char*>(&rotation_speed_x_),
          reinterpret_cast<char*>(&other->rotation_speed_x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Gyro::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_GyroData_2eproto_getter, &descriptor_table_GyroData_2eproto_once,
      file_level_metadata_GyroData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::Gyro* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::Gyro >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::Gyro >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>