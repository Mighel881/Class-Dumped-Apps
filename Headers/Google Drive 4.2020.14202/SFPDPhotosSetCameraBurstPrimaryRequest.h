//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface SFPDPhotosSetCameraBurstPrimaryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cameraBurstId; // @dynamic cameraBurstId;
@property(nonatomic) _Bool hasCameraBurstId; // @dynamic hasCameraBurstId;
@property(nonatomic) _Bool hasLocalDedupKey; // @dynamic hasLocalDedupKey;
@property(nonatomic) _Bool hasMediaKey; // @dynamic hasMediaKey;
@property(nonatomic) _Bool hasOldMediaKey; // @dynamic hasOldMediaKey;
@property(copy, nonatomic) NSString *localDedupKey; // @dynamic localDedupKey;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(copy, nonatomic) NSString *oldMediaKey; // @dynamic oldMediaKey;

@end

