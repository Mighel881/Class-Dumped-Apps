//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIMdxDevice, YTIMdxPlaybackDescriptor;

@interface YTIMdxConnectNavigationEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMdxDevice; // @dynamic hasMdxDevice;
@property(nonatomic) _Bool hasMdxPage; // @dynamic hasMdxPage;
@property(nonatomic) _Bool hasPlaybackDescriptor; // @dynamic hasPlaybackDescriptor;
@property(retain, nonatomic) YTIMdxDevice *mdxDevice; // @dynamic mdxDevice;
@property(nonatomic) int mdxPage; // @dynamic mdxPage;
@property(retain, nonatomic) YTIMdxPlaybackDescriptor *playbackDescriptor; // @dynamic playbackDescriptor;

@end

