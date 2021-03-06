//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTInstrumentationCurrentPageViewObserver, SPTInstrumentationMapper, SPTInstrumentationModalPresentationMonitor, SPTInstrumentationRemotePlayingHandler, SPTInstrumentationTransportRegistry;

@protocol SPTInstrumentationService <SPTService>
- (void)removeCurrentPageViewObserver:(id <SPTInstrumentationCurrentPageViewObserver>)arg1;
- (void)addCurrentPageViewObserver:(id <SPTInstrumentationCurrentPageViewObserver>)arg1;
- (id <SPTInstrumentationMapper>)provideIntentMapper;
- (id <SPTInstrumentationMapper>)provideIDMapper;
- (id <SPTInstrumentationModalPresentationMonitor>)provideModalPresentationMonitor;
- (id <SPTInstrumentationTransportRegistry>)provideTransportRegistry;
@property(nonatomic, readonly) id <SPTInstrumentationRemotePlayingHandler> remotePlayingHandler;
@end

