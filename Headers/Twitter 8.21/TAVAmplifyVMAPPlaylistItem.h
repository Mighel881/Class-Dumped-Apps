//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, TAVAmplifyVMAPPlaylistCTA;

@interface TAVAmplifyVMAPPlaylistItem : NSObject
{
    NSString *_identifier;
    long long _ownerID;
    NSURL *_errorURL;
    NSURL *_impressionURL;
    NSURL *_mediaURL;
    NSArray *_videoVariants;
    NSArray *_trackingEvents;
    TAVAmplifyVMAPPlaylistCTA *_cta;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVAmplifyVMAPPlaylistCTA *cta; // @synthesize cta=_cta;
@property(retain, nonatomic) NSArray *trackingEvents; // @synthesize trackingEvents=_trackingEvents;
@property(retain, nonatomic) NSArray *videoVariants; // @synthesize videoVariants=_videoVariants;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSURL *impressionURL; // @synthesize impressionURL=_impressionURL;
@property(retain, nonatomic) NSURL *errorURL; // @synthesize errorURL=_errorURL;
@property(nonatomic) long long ownerID; // @synthesize ownerID=_ownerID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

