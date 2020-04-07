//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCVolumeViewComponentProtocol-Protocol.h"

@class NSString;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider;

@interface ACCVolumeViewConponent : NSObject <ACCVolumeViewComponentProtocol>
{
    id <ACCComponentBusProtocol> componentBus;
}

@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
- (void).cxx_destruct;
- (void)containerViewControllerDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end
