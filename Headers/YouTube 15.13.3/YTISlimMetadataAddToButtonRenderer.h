//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIButtonSupportedRenderers, YTICommand;

@interface YTISlimMetadataAddToButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasLongPressEndpoint; // @dynamic hasLongPressEndpoint;
@property(nonatomic) _Bool hasSaveToPlaylistStatusEntityKey; // @dynamic hasSaveToPlaylistStatusEntityKey;
@property(retain, nonatomic) YTICommand *longPressEndpoint; // @dynamic longPressEndpoint;
@property(copy, nonatomic) NSString *saveToPlaylistStatusEntityKey; // @dynamic saveToPlaylistStatusEntityKey;

@end
