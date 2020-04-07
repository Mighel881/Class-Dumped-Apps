//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDXSessionManagerObserver-Protocol.h>
#import <Module_Framework/MDXSessionObserver-Protocol.h>

@class MDXRepeatingTimer, MDXSession, NSHashTable, NSString, YTPlayerResponse;

@interface MDXVideoProgressController : NSObject <MDXSessionObserver, MDXSessionManagerObserver>
{
    NSHashTable *_videoProgressObservers;
    MDXSession *_session;
    YTPlayerResponse *_playerResponse;
    MDXRepeatingTimer *_videoProgressTimer;
}

- (void).cxx_destruct;
- (void)stopVideoProgressTimer;
- (void)startVideoProgressTimer;
- (void)notifyVideoProgressDidChange;
- (double)currentVideoMediaTime;
- (void)mediaTimesDidChangeForMDXSession:(id)arg1;
- (void)MDXSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)MDXSession:(id)arg1 videoDidChangeToVideoID:(id)arg2;
- (void)MDXSessionManager:(id)arg1 willStartSession:(id)arg2;
- (void)removeVideoProgressObserver:(id)arg1;
- (void)addVideoProgressObserver:(id)arg1;
- (void)setPlayerResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
