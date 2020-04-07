//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface DBASSISTANTMetadataConfigs : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_includeFileMetadata;
    NSArray *_fileMetadataOptions;
    NSNumber *_includePaperMetadata;
    NSNumber *_includeUserInfo;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *includeUserInfo; // @synthesize includeUserInfo=_includeUserInfo;
@property(readonly, nonatomic) NSNumber *includePaperMetadata; // @synthesize includePaperMetadata=_includePaperMetadata;
@property(readonly, nonatomic) NSArray *fileMetadataOptions; // @synthesize fileMetadataOptions=_fileMetadataOptions;
@property(readonly, nonatomic) NSNumber *includeFileMetadata; // @synthesize includeFileMetadata=_includeFileMetadata;
- (void).cxx_destruct;
- (_Bool)isEqualToMetadataConfigs:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithIncludeFileMetadata:(id)arg1 fileMetadataOptions:(id)arg2 includePaperMetadata:(id)arg3 includeUserInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
