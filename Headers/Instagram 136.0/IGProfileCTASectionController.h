//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGProfileCTAViewModel;
@protocol IGProfileLayoutMetrics;

@interface IGProfileCTASectionController : IGListSectionController
{
    IGProfileCTAViewModel *_viewModel;
    id <IGProfileLayoutMetrics> _layoutMetrics;
}

- (void).cxx_destruct;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithLayoutMetrics:(id)arg1;

@end

