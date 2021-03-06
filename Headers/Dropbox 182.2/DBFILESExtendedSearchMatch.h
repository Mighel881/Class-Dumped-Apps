//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILESExtendedMetadata, DBFILESSearchMatchType, NSArray, NSString;

@interface DBFILESExtendedSearchMatch : NSObject <DBSerializable, NSCopying>
{
    DBFILESSearchMatchType *_matchType;
    DBFILESExtendedMetadata *_extendedMetadata;
    NSArray *_highlightSpans;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSArray *highlightSpans; // @synthesize highlightSpans=_highlightSpans;
@property(readonly, nonatomic) DBFILESExtendedMetadata *extendedMetadata; // @synthesize extendedMetadata=_extendedMetadata;
@property(readonly, nonatomic) DBFILESSearchMatchType *matchType; // @synthesize matchType=_matchType;
- (void).cxx_destruct;
- (_Bool)isEqualToExtendedSearchMatch:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMatchType:(id)arg1 extendedMetadata:(id)arg2;
- (id)initWithMatchType:(id)arg1 extendedMetadata:(id)arg2 highlightSpans:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

