//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseListViewModel.h"

@class NSError;

@interface AWEBaseDetailContainerViewModel : AWEBaseListViewModel
{
    _Bool _showLoading;
    NSError *_networkError;
}

@property(retain) NSError *networkError; // @synthesize networkError=_networkError;
@property _Bool showLoading; // @synthesize showLoading=_showLoading;
- (void).cxx_destruct;

@end

