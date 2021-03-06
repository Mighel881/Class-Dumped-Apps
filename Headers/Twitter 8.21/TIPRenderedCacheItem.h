//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TIPImageCacheEntry;

@interface TIPRenderedCacheItem : NSObject
{
    _Bool _dirty;
    NSString *_transformerIdentifier;
    TIPImageCacheEntry *_entry;
    struct CGSize _sourceImageDimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TIPImageCacheEntry *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(readonly, nonatomic) struct CGSize sourceImageDimensions; // @synthesize sourceImageDimensions=_sourceImageDimensions;
@property(readonly, copy, nonatomic) NSString *transformerIdentifier; // @synthesize transformerIdentifier=_transformerIdentifier;
- (void)markDirty;
- (id)initWithEntry:(id)arg1 transformerIdentifier:(id)arg2 sourceImageDimensions:(struct CGSize)arg3;

@end

