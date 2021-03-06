//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSString;

@interface DBFILESFileCategory : NSObject <DBSerializable, NSCopying>
{
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (_Bool)isEqualToFileCategory:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isOthers;
- (_Bool)isPaper;
- (_Bool)isFolder;
- (_Bool)isVideo;
- (_Bool)isAudio;
- (_Bool)isPresentation;
- (_Bool)isSpreadsheet;
- (_Bool)isPdf;
- (_Bool)isDocument;
- (_Bool)isImage;
- (id)initWithOther;
- (id)initWithOthers;
- (id)initWithPaper;
- (id)initWithFolder;
- (id)initWithVideo;
- (id)initWithAudio;
- (id)initWithPresentation;
- (id)initWithSpreadsheet;
- (id)initWithPdf;
- (id)initWithDocument;
- (id)initWithImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

