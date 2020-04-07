//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface IESCategoryModel : MTLModel <MTLJSONSerializing>
{
    _Bool _isDefault;
    _Bool _hasMore;
    NSString *_categoryIdentifier;
    NSString *_categoryName;
    NSString *_categoryKey;
    NSArray *_normalIconUrls;
    NSArray *_selectedIconUrls;
    NSArray *_tags;
    NSString *_tagsUpdatedTimeStamp;
    NSArray *_effects;
    NSArray *_effectIDs;
    NSString *_extra;
    NSArray *_collection;
    long long _cursor;
    long long _sortingPosition;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long sortingPosition; // @synthesize sortingPosition=_sortingPosition;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSArray *collection; // @synthesize collection=_collection;
@property(readonly, copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSArray *effectIDs; // @synthesize effectIDs=_effectIDs;
@property(copy, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(copy, nonatomic) NSString *tagsUpdatedTimeStamp; // @synthesize tagsUpdatedTimeStamp=_tagsUpdatedTimeStamp;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSArray *selectedIconUrls; // @synthesize selectedIconUrls=_selectedIconUrls;
@property(copy, nonatomic) NSArray *normalIconUrls; // @synthesize normalIconUrls=_normalIconUrls;
@property(copy, nonatomic) NSString *categoryKey; // @synthesize categoryKey=_categoryKey;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (void)fillEffectsWithEffectsMap:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *downloadedEffects;
- (void)updateCategoryWithResponse:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)updateEffects:(id)arg1 collection:(id)arg2;
- (void)markAsReaded;
- (_Bool)showRedDotWithTag:(id)arg1;
- (_Bool)shouldUseIconDisplay;
@property(retain, nonatomic) NSArray *aweStickers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
