//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESLivePagingView, UIView;

@protocol IESLivePageingViewDataSource <NSObject>
- (UIView *)pagingView:(IESLivePagingView *)arg1 viewAtIndex:(long long)arg2 identifier:(id *)arg3;
- (unsigned long long)numberOfPageInPagingView:(IESLivePagingView *)arg1;
@end
