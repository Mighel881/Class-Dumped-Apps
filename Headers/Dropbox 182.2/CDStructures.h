//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DrawingPoint;

struct PSPDFDrawGestureRecognizerTouch {
    struct CGPoint _field1;
    double _field2;
    double _field3;
    double _field4;
    id _field5;
};

struct PSPDFScrubberBinNormalization {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct PSPDFSliderCellSubviewFrames {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGSize _field4;
};

struct PSPDFViewGeometry {
    struct CGPoint _field1;
    struct CGRect _field2;
    struct CGAffineTransform _field3;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct map<long, PSPDFThumbnailFlowLayoutSizeCacheValue, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, PSPDFThumbnailFlowLayoutSizeCacheValue>>> {
    struct __tree<std::__1::__value_type<long, PSPDFThumbnailFlowLayoutSizeCacheValue>, std::__1::__map_value_compare<long, std::__1::__value_type<long, PSPDFThumbnailFlowLayoutSizeCacheValue>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, PSPDFThumbnailFlowLayoutSizeCacheValue>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, PSPDFThumbnailFlowLayoutSizeCacheValue>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, PSPDFThumbnailFlowLayoutSizeCacheValue>, std::__1::less<long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, double, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, double>>> {
    struct __tree<std::__1::__value_type<long, double>, std::__1::__map_value_compare<long, std::__1::__value_type<long, double>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, double>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, double>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, double>, std::__1::less<long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<PSPDFAnnotationPlaceholderState, NSString *, std::__1::hash<PSPDFAnnotationPlaceholderState>, std::__1::equal_to<PSPDFAnnotationPlaceholderState>, std::__1::allocator<std::__1::pair<const PSPDFAnnotationPlaceholderState, NSString *>>> {
    struct __hash_table<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, std::__1::__unordered_map_hasher<PSPDFAnnotationPlaceholderState, std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, std::__1::hash<PSPDFAnnotationPlaceholderState>, true>, std::__1::__unordered_map_equal<PSPDFAnnotationPlaceholderState, std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, std::__1::equal_to<PSPDFAnnotationPlaceholderState>, true>, std::__1::allocator<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PSPDFAnnotationPlaceholderState, std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, std::__1::hash<PSPDFAnnotationPlaceholderState>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<PSPDFAnnotationPlaceholderState, std::__1::__hash_value_type<PSPDFAnnotationPlaceholderState, NSString *>, std::__1::equal_to<PSPDFAnnotationPlaceholderState>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<PSPDFGlyph *, unsigned long, std::__1::hash<PSPDFGlyph *>, std::__1::equal_to<PSPDFGlyph *>, std::__1::allocator<std::__1::pair<PSPDFGlyph *const, unsigned long>>> {
    struct __hash_table<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, std::__1::__unordered_map_hasher<PSPDFGlyph *, std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, std::__1::hash<PSPDFGlyph *>, true>, std::__1::__unordered_map_equal<PSPDFGlyph *, std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, std::__1::equal_to<PSPDFGlyph *>, true>, std::__1::allocator<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PSPDFGlyph *, std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, std::__1::hash<PSPDFGlyph *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<PSPDFGlyph *, std::__1::__hash_value_type<PSPDFGlyph *, unsigned long>, std::__1::equal_to<PSPDFGlyph *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<PSPDF::DrawingPoint, std::__1::allocator<PSPDF::DrawingPoint>> {
    struct DrawingPoint *_field1;
    struct DrawingPoint *_field2;
    struct __compressed_pair<PSPDF::DrawingPoint *, std::__1::allocator<PSPDF::DrawingPoint>> {
        struct DrawingPoint *_field1;
    } _field3;
};

struct vector<PSPDFDrawGestureRecognizerTouch, std::__1::allocator<PSPDFDrawGestureRecognizerTouch>> {
    struct PSPDFDrawGestureRecognizerTouch *__begin_;
    struct PSPDFDrawGestureRecognizerTouch *__end_;
    struct __compressed_pair<PSPDFDrawGestureRecognizerTouch *, std::__1::allocator<PSPDFDrawGestureRecognizerTouch>> {
        struct PSPDFDrawGestureRecognizerTouch *__value_;
    } __end_cap_;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    struct CGPoint _field1;
    double _field2;
} CDStruct_19cde01f;

// Template types
typedef struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
} vector_a9587b3d;

typedef struct vector<PSPDF::DrawingPoint, std::__1::allocator<PSPDF::DrawingPoint>> {
    struct DrawingPoint *_field1;
    struct DrawingPoint *_field2;
    struct __compressed_pair<PSPDF::DrawingPoint *, std::__1::allocator<PSPDF::DrawingPoint>> {
        struct DrawingPoint *_field1;
    } _field3;
} vector_8a2866dc;

typedef struct vector<PSPDFDrawGestureRecognizerTouch, std::__1::allocator<PSPDFDrawGestureRecognizerTouch>> {
    struct PSPDFDrawGestureRecognizerTouch *__begin_;
    struct PSPDFDrawGestureRecognizerTouch *__end_;
    struct __compressed_pair<PSPDFDrawGestureRecognizerTouch *, std::__1::allocator<PSPDFDrawGestureRecognizerTouch>> {
        struct PSPDFDrawGestureRecognizerTouch *__value_;
    } __end_cap_;
} vector_b1fb3703;

typedef struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
} vector_3203cf93;
