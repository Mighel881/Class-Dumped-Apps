//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NFPlayerBoundaryObserver;

@interface NFPlaybackTimeRangeObserverRegistration : NSObject
{
    id <NFPlayerBoundaryObserver> _observer;
    id _context;
    NSString *_rangeName;
}

@property(retain, nonatomic) NSString *rangeName; // @synthesize rangeName=_rangeName;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <NFPlayerBoundaryObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

