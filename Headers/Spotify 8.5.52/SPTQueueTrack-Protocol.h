//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, NSURL, SPTPlayerTrack;

@protocol SPTQueueTrack <NSObject, NSCopying>
@property(readonly) SPTPlayerTrack *track;
@property(readonly) unsigned long long type;
@property(readonly) _Bool isAgeRestricted;
@property(readonly) _Bool isRatedExplicit;
@property(readonly) _Bool isTapPlayable;
@property(readonly) _Bool isRemovable;
@property(readonly) _Bool isQueueable;
@property(readonly) _Bool isDraggable;
@property(readonly) _Bool isGrayedOut;
@property(readonly) _Bool isMetaTrack;
@property(readonly) _Bool isDelimiter;
@property(readonly) NSURL *imageURL;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *title;
@property(readonly) NSURL *trackURI;
@end
