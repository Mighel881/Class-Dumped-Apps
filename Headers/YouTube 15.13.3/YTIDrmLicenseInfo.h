//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIDrmLicenseInfo : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasLicenseDurationSeconds; // @dynamic hasLicenseDurationSeconds;
@property(nonatomic) _Bool hasPlaybackDurationSeconds; // @dynamic hasPlaybackDurationSeconds;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) long long licenseDurationSeconds; // @dynamic licenseDurationSeconds;
@property(nonatomic) long long playbackDurationSeconds; // @dynamic playbackDurationSeconds;

@end

