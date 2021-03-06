//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTExternallyManagedSlotAdapter-Protocol.h>

@class GIMMe, NSString, YTAdLayout, YTAdSlot, YTLayoutFactory, YTSlotFactory;
@protocol YTExternallyManagedSlotAdapterDelegate;

@interface YTInPlayerExternallyManagedSlotAdapter : NSObject <YTExternallyManagedSlotAdapter>
{
    id <YTExternallyManagedSlotAdapterDelegate> _delegate;
    YTAdSlot *_slot;
    YTAdLayout *_layout;
    YTSlotFactory *_slotFactory;
    YTLayoutFactory *_layoutFactory;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)layout;
- (id)slot;
- (void)didFinishMediaLayout:(id)arg1 completeType:(long long)arg2;
- (void)willStartInPlayerOverlayOnMediaLayout:(id)arg1;
- (void)willPlayMediaLayout:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

