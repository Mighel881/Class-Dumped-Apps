//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBSHARINGTargetsArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_query;
    NSNumber *_forceRefresh;
    NSString *_contentId;
    NSNumber *_limit;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(readonly, nonatomic) NSNumber *forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (_Bool)isEqualToTargetsArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithQuery:(id)arg1 forceRefresh:(id)arg2 contentId:(id)arg3 limit:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
