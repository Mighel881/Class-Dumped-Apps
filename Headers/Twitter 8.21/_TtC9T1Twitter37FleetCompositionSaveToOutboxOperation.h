//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter37FleetCompositionSaveToOutboxOperation : TFSDependentConcurrentOperation
{
    // Error parsing type: , name: resultState
    // Error parsing type: , name: resultError
    // Error parsing type: , name: persistenceProvider
    // Error parsing type: , name: draft
}

- (void).cxx_destruct;
- (id)init;
- (void)run;
@property(nonatomic, copy) NSError *resultError;
@property(nonatomic) unsigned long long resultState; // @synthesize resultState;

@end

