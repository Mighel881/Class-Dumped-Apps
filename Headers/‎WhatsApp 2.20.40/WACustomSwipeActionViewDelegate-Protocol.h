//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACustomSwipeActionView;

@protocol WACustomSwipeActionViewDelegate <NSObject>
@property(readonly, nonatomic) _Bool singleAction;
@property(readonly, nonatomic) _Bool rightSide;
- (void)actionCompletedForActionView:(WACustomSwipeActionView *)arg1 performed:(_Bool)arg2;
- (_Bool)isActionViewExpaned:(WACustomSwipeActionView *)arg1;
@end

