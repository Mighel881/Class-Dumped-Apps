//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsProjectArchiveRoot-Protocol.h"

@class NSDate, NSString, NSURL, YTShortsCameraProjectStateArchive;

@interface YTShortsProjectStateArchive : NSObject <YTShortsProjectArchiveRoot>
{
    NSString *_frontendUploadID;
    NSURL *_projectDirectory;
    NSDate *_creationDate;
    YTShortsCameraProjectStateArchive *_cameraArchive;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) YTShortsCameraProjectStateArchive *cameraArchive; // @synthesize cameraArchive=_cameraArchive;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSURL *projectDirectory; // @synthesize projectDirectory=_projectDirectory;
@property(retain, nonatomic) NSString *frontendUploadID; // @synthesize frontendUploadID=_frontendUploadID;
- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

