//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIRenderer;

@interface YTIAdVideoEndRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *content; // @dynamic content;
@property(nonatomic) float duration; // @dynamic duration;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasMiniPlayerStateSkipBehavior; // @dynamic hasMiniPlayerStateSkipBehavior;
@property(nonatomic) _Bool hasPauseOnAppExit; // @dynamic hasPauseOnAppExit;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(nonatomic) int miniPlayerStateSkipBehavior; // @dynamic miniPlayerStateSkipBehavior;
@property(nonatomic) _Bool pauseOnAppExit; // @dynamic pauseOnAppExit;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
