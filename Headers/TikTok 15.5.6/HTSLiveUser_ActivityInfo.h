//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage;

@interface HTSLiveUser_ActivityInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveImage *badge; // @dynamic badge;
@property(nonatomic) _Bool hasBadge; // @dynamic hasBadge;
@property(nonatomic) _Bool hasStoryTag; // @dynamic hasStoryTag;
@property(retain, nonatomic) HTSLiveImage *storyTag; // @dynamic storyTag;

@end
