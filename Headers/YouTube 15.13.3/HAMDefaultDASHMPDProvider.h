//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMBaseComponent.h>

#import <Module_Framework/HAMDASHMPDProvider-Protocol.h>

@class GIMMe, HAMDASHMPD, HAMDASHMPDFetcher, NSError, NSMutableArray, NSString, NSURL;
@protocol HAMClock;

@interface HAMDefaultDASHMPDProvider : HAMBaseComponent <HAMDASHMPDProvider>
{
    HAMDASHMPD *_MPD;
    NSURL *_MPDLocation;
    HAMDASHMPDFetcher *_MPDFetcher;
    id <HAMClock> _clock;
    NSMutableArray *_MPDBlocks;
    NSMutableArray *_errorBlocks;
    long long _updatesStartedCount;
    _Bool _MPDFetchInProgress;
    NSError *_fetchError;
    _Bool _fetchMPDScheduled;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)fetchMPD;
- (void)scheduleFetchMPD;
- (void)stopMPDUpdates;
- (void)startMPDUpdates;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (void)addMPDChangedBlock:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 MPD:(id)arg2 MPDLocation:(id)arg3 MPDFetcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

