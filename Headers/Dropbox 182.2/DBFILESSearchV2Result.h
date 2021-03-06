//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface DBFILESSearchV2Result : NSObject <DBSerializable, NSCopying>
{
    NSArray *_matches;
    NSNumber *_hasMore;
    NSString *_cursor;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, nonatomic) NSArray *matches; // @synthesize matches=_matches;
- (void).cxx_destruct;
- (_Bool)isEqualToSearchV2Result:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMatches:(id)arg1 hasMore:(id)arg2;
- (id)initWithMatches:(id)arg1 hasMore:(id)arg2 cursor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

