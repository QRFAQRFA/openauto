// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationImageOptionsData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_NavigationImageOptionsData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_NavigationImageOptionsData_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_NavigationImageOptionsData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_NavigationImageOptionsData_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NavigationImageOptionsData_2eproto;
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class NavigationImageOptions;
struct NavigationImageOptionsDefaultTypeInternal;
extern NavigationImageOptionsDefaultTypeInternal _NavigationImageOptions_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
PROTOBUF_NAMESPACE_OPEN
template<> ::f1x::aasdk::proto::data::NavigationImageOptions* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::NavigationImageOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class NavigationImageOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.NavigationImageOptions) */ {
 public:
  inline NavigationImageOptions() : NavigationImageOptions(nullptr) {}
  ~NavigationImageOptions() override;
  explicit constexpr NavigationImageOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NavigationImageOptions(const NavigationImageOptions& from);
  NavigationImageOptions(NavigationImageOptions&& from) noexcept
    : NavigationImageOptions() {
    *this = ::std::move(from);
  }

  inline NavigationImageOptions& operator=(const NavigationImageOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline NavigationImageOptions& operator=(NavigationImageOptions&& from) noexcept {
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
  static const NavigationImageOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const NavigationImageOptions* internal_default_instance() {
    return reinterpret_cast<const NavigationImageOptions*>(
               &_NavigationImageOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NavigationImageOptions& a, NavigationImageOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(NavigationImageOptions* other) {
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
  void UnsafeArenaSwap(NavigationImageOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NavigationImageOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NavigationImageOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NavigationImageOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const NavigationImageOptions& from);
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
  void InternalSwap(NavigationImageOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "f1x.aasdk.proto.data.NavigationImageOptions";
  }
  protected:
  explicit NavigationImageOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
    kColourDepthBitsFieldNumber = 3,
  };
  // required int32 width = 1;
  bool has_width() const;
  private:
  bool _internal_has_width() const;
  public:
  void clear_width();
  int32_t width() const;
  void set_width(int32_t value);
  private:
  int32_t _internal_width() const;
  void _internal_set_width(int32_t value);
  public:

  // required int32 height = 2;
  bool has_height() const;
  private:
  bool _internal_has_height() const;
  public:
  void clear_height();
  int32_t height() const;
  void set_height(int32_t value);
  private:
  int32_t _internal_height() const;
  void _internal_set_height(int32_t value);
  public:

  // required int32 colour_depth_bits = 3;
  bool has_colour_depth_bits() const;
  private:
  bool _internal_has_colour_depth_bits() const;
  public:
  void clear_colour_depth_bits();
  int32_t colour_depth_bits() const;
  void set_colour_depth_bits(int32_t value);
  private:
  int32_t _internal_colour_depth_bits() const;
  void _internal_set_colour_depth_bits(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.NavigationImageOptions)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int32_t width_;
  int32_t height_;
  int32_t colour_depth_bits_;
  friend struct ::TableStruct_NavigationImageOptionsData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavigationImageOptions

// required int32 width = 1;
inline bool NavigationImageOptions::_internal_has_width() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NavigationImageOptions::has_width() const {
  return _internal_has_width();
}
inline void NavigationImageOptions::clear_width() {
  width_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline int32_t NavigationImageOptions::_internal_width() const {
  return width_;
}
inline int32_t NavigationImageOptions::width() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.NavigationImageOptions.width)
  return _internal_width();
}
inline void NavigationImageOptions::_internal_set_width(int32_t value) {
  _has_bits_[0] |= 0x00000001u;
  width_ = value;
}
inline void NavigationImageOptions::set_width(int32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.NavigationImageOptions.width)
}

// required int32 height = 2;
inline bool NavigationImageOptions::_internal_has_height() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool NavigationImageOptions::has_height() const {
  return _internal_has_height();
}
inline void NavigationImageOptions::clear_height() {
  height_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t NavigationImageOptions::_internal_height() const {
  return height_;
}
inline int32_t NavigationImageOptions::height() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.NavigationImageOptions.height)
  return _internal_height();
}
inline void NavigationImageOptions::_internal_set_height(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  height_ = value;
}
inline void NavigationImageOptions::set_height(int32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.NavigationImageOptions.height)
}

// required int32 colour_depth_bits = 3;
inline bool NavigationImageOptions::_internal_has_colour_depth_bits() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool NavigationImageOptions::has_colour_depth_bits() const {
  return _internal_has_colour_depth_bits();
}
inline void NavigationImageOptions::clear_colour_depth_bits() {
  colour_depth_bits_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t NavigationImageOptions::_internal_colour_depth_bits() const {
  return colour_depth_bits_;
}
inline int32_t NavigationImageOptions::colour_depth_bits() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.NavigationImageOptions.colour_depth_bits)
  return _internal_colour_depth_bits();
}
inline void NavigationImageOptions::_internal_set_colour_depth_bits(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  colour_depth_bits_ = value;
}
inline void NavigationImageOptions::set_colour_depth_bits(int32_t value) {
  _internal_set_colour_depth_bits(value);
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.NavigationImageOptions.colour_depth_bits)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_NavigationImageOptionsData_2eproto
