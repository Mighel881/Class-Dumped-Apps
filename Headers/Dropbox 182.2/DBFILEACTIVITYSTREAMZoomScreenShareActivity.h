//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBFILEACTIVITYSTREAMActivity.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILEACTIVITYSTREAMZoomScreenShareType, NSString;

@interface DBFILEACTIVITYSTREAMZoomScreenShareActivity : DBFILEACTIVITYSTREAMActivity <DBSerializable, NSCopying>
{
    DBFILEACTIVITYSTREAMZoomScreenShareType *_zoomScreenShareType;
    NSString *_zoomMeetingName;
    NSString *_zoomDeepLink;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *zoomDeepLink; // @synthesize zoomDeepLink=_zoomDeepLink;
@property(readonly, copy, nonatomic) NSString *zoomMeetingName; // @synthesize zoomMeetingName=_zoomMeetingName;
@property(readonly, nonatomic) DBFILEACTIVITYSTREAMZoomScreenShareType *zoomScreenShareType; // @synthesize zoomScreenShareType=_zoomScreenShareType;
- (void).cxx_destruct;
- (_Bool)isEqualToZoomScreenShareActivity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithId_:(id)arg1 timestamp:(id)arg2 user:(id)arg3 zoomScreenShareType:(id)arg4;
- (id)initWithId_:(id)arg1 timestamp:(id)arg2 user:(id)arg3 zoomScreenShareType:(id)arg4 zoomMeetingName:(id)arg5 zoomDeepLink:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
