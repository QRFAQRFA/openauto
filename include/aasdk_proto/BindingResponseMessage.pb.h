// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BindingResponseMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_BindingResponseMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_BindingResponseMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "StatusEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_BindingResponseMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_BindingResponseMessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_BindingResponseMessage_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class BindingResponse;
struct BindingResponseDefaultTypeInternal;
extern BindingResponseDefaultTypeInternal _BindingResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::messages::BindingResponse* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::BindingResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class BindingResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.BindingResponse) */ {
 public:
  inline BindingResponse() : BindingResponse(nullptr) {}
  ~BindingResponse() override;
  explicit constexpr BindingResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BindingResponse(const BindingResponse& from);
  BindingResponse(BindingResponse&& from) noexcept
    : BindingResponse() {
    *this = ::std::move(from);
  }

  inline BindingResponse& operator=(const BindingResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline BindingResponse& operator=(BindingResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const BindingResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const BindingResponse* internal_default_instance() {
    return reinterpret_cast<const BindingResponse*>(
               &_BindingResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BindingResponse& a, BindingResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(BindingResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BindingResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BindingResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BindingResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BindingResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const BindingResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BindingResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.messages.BindingResponse";
  }
  protected:
  explicit BindingResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStatusFieldNumber = 1,
  };
  // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
  bool has_status() const;
  private:
  bool _internal_has_status() const;
  public:
  void clear_status();
  ::f1x::aasdk::proto::enums::Status_Enum status() const;
  void set_status(::f1x::aasdk::proto::enums::Status_Enum value);
  private:
  ::f1x::aasdk::proto::enums::Status_Enum _internal_status() const;
  void _internal_set_status(::f1x::aasdk::proto::enums::Status_Enum value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.BindingResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int status_;
  friend struct ::TableStruct_BindingResponseMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BindingResponse

// required .f1x.aasdk.proto.enums.Status.Enum status = 1;
inline bool BindingResponse::_internal_has_status() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool BindingResponse::has_status() const {
  return _internal_has_status();
}
inline void BindingResponse::clear_status() {
  status_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::f1x::aasdk::proto::enums::Status_Enum BindingResponse::_internal_status() const {
  return static_cast< ::f1x::aasdk::proto::enums::Status_Enum >(status_);
}
inline ::f1x::aasdk::proto::enums::Status_Enum BindingResponse::status() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.BindingResponse.status)
  return _internal_status();
}
inline void BindingResponse::_internal_set_status(::f1x::aasdk::proto::enums::Status_Enum value) {
  assert(::f1x::aasdk::proto::enums::Status_Enum_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  status_ = value;
}
inline void BindingResponse::set_status(::f1x::aasdk::proto::enums::Status_Enum value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.BindingResponse.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_BindingResponseMessage_2eproto
