// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InputChannelData.proto

#include "InputChannelData.pb.h"

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
constexpr InputChannel::InputChannel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : supported_keycodes_()
  , touch_screen_config_(nullptr)
  , touch_pad_config_(nullptr){}
struct InputChannelDefaultTypeInternal {
  constexpr InputChannelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~InputChannelDefaultTypeInternal() {}
  union {
    InputChannel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT InputChannelDefaultTypeInternal _InputChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_InputChannelData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_InputChannelData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_InputChannelData_2eproto = nullptr;

const uint32_t TableStruct_InputChannelData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::InputChannel, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::InputChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::InputChannel, supported_keycodes_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::InputChannel, touch_screen_config_),
  PROTOBUF_FIELD_OFFSET(::f1x::aasdk::proto::data::InputChannel, touch_pad_config_),
  ~0u,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::f1x::aasdk::proto::data::InputChannel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::f1x::aasdk::proto::data::_InputChannel_default_instance_),
};

const char descriptor_table_protodef_InputChannelData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026InputChannelData.proto\022\024f1x.aasdk.prot"
  "o.data\032\025TouchConfigData.proto\"\247\001\n\014InputC"
  "hannel\022\032\n\022supported_keycodes\030\001 \003(\r\022>\n\023to"
  "uch_screen_config\030\002 \001(\0132!.f1x.aasdk.prot"
  "o.data.TouchConfig\022;\n\020touch_pad_config\030\003"
  " \001(\0132!.f1x.aasdk.proto.data.TouchConfig"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_InputChannelData_2eproto_deps[1] = {
  &::descriptor_table_TouchConfigData_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_InputChannelData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_InputChannelData_2eproto = {
  false, false, 239, descriptor_table_protodef_InputChannelData_2eproto, "InputChannelData.proto", 
  &descriptor_table_InputChannelData_2eproto_once, descriptor_table_InputChannelData_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_InputChannelData_2eproto::offsets,
  file_level_metadata_InputChannelData_2eproto, file_level_enum_descriptors_InputChannelData_2eproto, file_level_service_descriptors_InputChannelData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_InputChannelData_2eproto_getter() {
  return &descriptor_table_InputChannelData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_InputChannelData_2eproto(&descriptor_table_InputChannelData_2eproto);
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class InputChannel::_Internal {
 public:
  using HasBits = decltype(std::declval<InputChannel>()._has_bits_);
  static const ::f1x::aasdk::proto::data::TouchConfig& touch_screen_config(const InputChannel* msg);
  static void set_has_touch_screen_config(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::f1x::aasdk::proto::data::TouchConfig& touch_pad_config(const InputChannel* msg);
  static void set_has_touch_pad_config(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::f1x::aasdk::proto::data::TouchConfig&
InputChannel::_Internal::touch_screen_config(const InputChannel* msg) {
  return *msg->touch_screen_config_;
}
const ::f1x::aasdk::proto::data::TouchConfig&
InputChannel::_Internal::touch_pad_config(const InputChannel* msg) {
  return *msg->touch_pad_config_;
}
void InputChannel::clear_touch_screen_config() {
  if (touch_screen_config_ != nullptr) touch_screen_config_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void InputChannel::clear_touch_pad_config() {
  if (touch_pad_config_ != nullptr) touch_pad_config_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
InputChannel::InputChannel(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  supported_keycodes_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:f1x.aasdk.proto.data.InputChannel)
}
InputChannel::InputChannel(const InputChannel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      supported_keycodes_(from.supported_keycodes_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_touch_screen_config()) {
    touch_screen_config_ = new ::f1x::aasdk::proto::data::TouchConfig(*from.touch_screen_config_);
  } else {
    touch_screen_config_ = nullptr;
  }
  if (from._internal_has_touch_pad_config()) {
    touch_pad_config_ = new ::f1x::aasdk::proto::data::TouchConfig(*from.touch_pad_config_);
  } else {
    touch_pad_config_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.InputChannel)
}

inline void InputChannel::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&touch_screen_config_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&touch_pad_config_) -
    reinterpret_cast<char*>(&touch_screen_config_)) + sizeof(touch_pad_config_));
}

InputChannel::~InputChannel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.InputChannel)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void InputChannel::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete touch_screen_config_;
  if (this != internal_default_instance()) delete touch_pad_config_;
}

void InputChannel::ArenaDtor(void* object) {
  InputChannel* _this = reinterpret_cast< InputChannel* >(object);
  (void)_this;
}
void InputChannel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void InputChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void InputChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.InputChannel)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  supported_keycodes_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(touch_screen_config_ != nullptr);
      touch_screen_config_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(touch_pad_config_ != nullptr);
      touch_pad_config_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InputChannel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated uint32 supported_keycodes = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_supported_keycodes(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<8>(ptr));
        } else if (static_cast<uint8_t>(tag) == 10) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_supported_keycodes(), ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .f1x.aasdk.proto.data.TouchConfig touch_screen_config = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_touch_screen_config(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .f1x.aasdk.proto.data.TouchConfig touch_pad_config = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_touch_pad_config(), ptr);
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

uint8_t* InputChannel::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.InputChannel)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 supported_keycodes = 1;
  for (int i = 0, n = this->_internal_supported_keycodes_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_supported_keycodes(i), target);
  }

  cached_has_bits = _has_bits_[0];
  // optional .f1x.aasdk.proto.data.TouchConfig touch_screen_config = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::touch_screen_config(this), target, stream);
  }

  // optional .f1x.aasdk.proto.data.TouchConfig touch_pad_config = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::touch_pad_config(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.InputChannel)
  return target;
}

size_t InputChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.InputChannel)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint32 supported_keycodes = 1;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt32Size(this->supported_keycodes_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_supported_keycodes_size());
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .f1x.aasdk.proto.data.TouchConfig touch_screen_config = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *touch_screen_config_);
    }

    // optional .f1x.aasdk.proto.data.TouchConfig touch_pad_config = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *touch_pad_config_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InputChannel::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    InputChannel::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InputChannel::GetClassData() const { return &_class_data_; }

void InputChannel::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<InputChannel *>(to)->MergeFrom(
      static_cast<const InputChannel &>(from));
}


void InputChannel::MergeFrom(const InputChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.InputChannel)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  supported_keycodes_.MergeFrom(from.supported_keycodes_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_touch_screen_config()->::f1x::aasdk::proto::data::TouchConfig::MergeFrom(from._internal_touch_screen_config());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_touch_pad_config()->::f1x::aasdk::proto::data::TouchConfig::MergeFrom(from._internal_touch_pad_config());
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InputChannel::CopyFrom(const InputChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.InputChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InputChannel::IsInitialized() const {
  if (_internal_has_touch_screen_config()) {
    if (!touch_screen_config_->IsInitialized()) return false;
  }
  if (_internal_has_touch_pad_config()) {
    if (!touch_pad_config_->IsInitialized()) return false;
  }
  return true;
}

void InputChannel::InternalSwap(InputChannel* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  supported_keycodes_.InternalSwap(&other->supported_keycodes_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(InputChannel, touch_pad_config_)
      + sizeof(InputChannel::touch_pad_config_)
      - PROTOBUF_FIELD_OFFSET(InputChannel, touch_screen_config_)>(
          reinterpret_cast<char*>(&touch_screen_config_),
          reinterpret_cast<char*>(&other->touch_screen_config_));
}

::PROTOBUF_NAMESPACE_ID::Metadata InputChannel::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_InputChannelData_2eproto_getter, &descriptor_table_InputChannelData_2eproto_once,
      file_level_metadata_InputChannelData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::f1x::aasdk::proto::data::InputChannel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::InputChannel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::f1x::aasdk::proto::data::InputChannel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>