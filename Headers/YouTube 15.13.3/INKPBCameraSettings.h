//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBCameraPosition, INKPBTransform, INKPBViewport;

@interface INKPBCameraSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int cameraSpecOneOfCase; // @dynamic cameraSpecOneOfCase;
@property(nonatomic) _Bool hasViewport; // @dynamic hasViewport;
@property(retain, nonatomic) INKPBCameraPosition *position; // @dynamic position;
@property(retain, nonatomic) INKPBTransform *screenToWorldTransform; // @dynamic screenToWorldTransform;
@property(retain, nonatomic) INKPBViewport *viewport; // @dynamic viewport;

@end
