// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AccelData.proto

#include "AccelData.pb.h"

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
constexpr Accel::Accel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : acceleration_x_(0)
  , acceleration_y_(0)
  , acceleration_z_(0){}
struct AccelDefaultTypeInternal {
  constexpr AccelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AccelDefaultTypeInternal() {}
  union {
    Accel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AccelDefaultTypeInternal _Accel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AccelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AccelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AccelData_2eproto = nullptr;

const uint32_t TableStruct_AccelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, acceleration_x_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, acceleration_y_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::Accel, acceleration_z_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::f1x::aasdk::proto::data::Accel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_Accel_default_instance_),
};

const char descriptor_table_protodef_AccelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017AccelData.proto\022\024f1x.aasdk.proto.data\""
  "O\n\005Accel\022\026\n\016acceleration_x\030\001 \002(\005\022\026\n\016acce"
  "leration_y\030\002 \002(\005\022\026\n\016acceleration_z\030\003 \002(\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AccelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AccelData_2eproto = {
  false, false, 120, descriptor_table_protodef_AccelData_2eproto, "AccelData.proto", 
  &descriptor_table_AccelData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_AccelData_2eproto::offsets,
  file_level_metadata_AccelData_2eproto, file_level_enum_descriptors_AccelData_2eproto, file_level_service_descriptors_AccelData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_AccelData_2eproto_getter() {
  return &descriptor_table_AccelData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_AccelData_2eproto(&descriptor_table_AccelData_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class Accel::_Internal {
 public:
  using HasBits = decltype(std::declval<Accel>()._has_bits_);
  static void set_has_acceleration_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_acceleration_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_acceleration_z(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

Accel::Accel(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.Accel)
}
Accel::Accel(const Accel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&acceleration_x_, &from.acceleration_x_,
    static_cast<size_t>(reinterpret_cast<char*>(&acceleration_z_) -
    reinterpret_cast<char*>(&acceleration_x_)) + sizeof(acceleration_z_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.Accel)
}

inline void Accel::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&acceleration_x_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&acceleration_z_) -
    reinterpret_cast<char*>(&acceleration_x_)) + sizeof(acceleration_z_));
}

Accel::~Accel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.Accel)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Accel::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Accel::ArenaDtor(void* object) {
  Accel* _this = reinterpret_cast< Accel* >(object);
  (void)_this;
}
void Accel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Accel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Accel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.Accel)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&acceleration_x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&acceleration_z_) -
        reinterpret_cast<char*>(&acceleration_x_)) + sizeof(acceleration_z_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Accel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 acceleration_x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_acceleration_x(&has_bits);
          acceleration_x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 acceleration_y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_acceleration_y(&has_bits);
          acceleration_y_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 acceleration_z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_acceleration_z(&has_bits);
          acceleration_z_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Accel::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.Accel)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 acceleration_x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_acceleration_x(), target);
  }

  // required int32 acceleration_y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_acceleration_y(), target);
  }

  // required int32 acceleration_z = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_acceleration_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.Accel)
  return target;
}

size_t Accel::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.Accel)
  size_t total_size = 0;

  if (_internal_has_acceleration_x()) {
    // required int32 acceleration_x = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_acceleration_x());
  }

  if (_internal_has_acceleration_y()) {
    // required int32 acceleration_y = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_acceleration_y());
  }

  if (_internal_has_acceleration_z()) {
    // required int32 acceleration_z = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_acceleration_z());
  }

  return total_size;
}
size_t Accel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.Accel)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 acceleration_x = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_acceleration_x());

    // required int32 acceleration_y = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_acceleration_y());

    // required int32 acceleration_z = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_acceleration_z());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Accel::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Accel::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Accel::GetClassData() const { return &_class_data_; }

void Accel::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Accel *>(to)->MergeFrom(
      static_cast<const Accel &>(from));
}


void Accel::MergeFrom(const Accel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.Accel)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      acceleration_x_ = from.acceleration_x_;
    }
    if (cached_has_bits & 0x00000002u) {
      acceleration_y_ = from.acceleration_y_;
    }
    if (cached_has_bits & 0x00000004u) {
      acceleration_z_ = from.acceleration_z_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Accel::CopyFrom(const Accel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.Accel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Accel::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Accel::InternalSwap(Accel* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Accel, acceleration_z_)
      + sizeof(Accel::acceleration_z_)
      - PROTOBUF_FIELD_OFFSET(Accel, acceleration_x_)>(
          reinterpret_cast<char*>(&acceleration_x_),
          reinterpret_cast<char*>(&other->acceleration_x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Accel::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_AccelData_2eproto_getter, &descriptor_table_AccelData_2eproto_once,
      file_level_metadata_AccelData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::Accel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::Accel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::Accel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
