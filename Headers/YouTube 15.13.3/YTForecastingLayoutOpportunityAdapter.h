//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTSlotOpportunityAdapter.h>

@class GIMMe, YTSlotFactory;

@interface YTForecastingLayoutOpportunityAdapter : YTSlotOpportunityAdapter
{
    YTSlotFactory *_slotFactory;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)buildAndRegisterForecastingSlotFromAd:(id)arg1 playerBytesSlot:(id)arg2;
- (id)init;

@end
