//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIBackstagePostCreationImageState, YTIBackstagePostCreationPollState, YTIBackstagePostCreationVideoState;

@interface YTIBackstagePostCreationAttachmentState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImageState; // @dynamic hasImageState;
@property(nonatomic) _Bool hasPollState; // @dynamic hasPollState;
@property(nonatomic) _Bool hasVideoState; // @dynamic hasVideoState;
@property(retain, nonatomic) YTIBackstagePostCreationImageState *imageState; // @dynamic imageState;
@property(retain, nonatomic) YTIBackstagePostCreationPollState *pollState; // @dynamic pollState;
@property(retain, nonatomic) YTIBackstagePostCreationVideoState *videoState; // @dynamic videoState;

@end
