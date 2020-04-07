//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface HTSLiveReddotButton : UIButton
{
    UIView *_badge;
    UIColor *_reddotColor;
}

@property(retain, nonatomic) UIColor *reddotColor; // @synthesize reddotColor=_reddotColor;
@property(retain, nonatomic) UIView *badge; // @synthesize badge=_badge;
- (void).cxx_destruct;
- (id)createBadgeWithSize:(unsigned long long)arg1 trailingOffset:(double)arg2;
- (void)liveSetBadgeHidden:(_Bool)arg1;
- (void)liveSetBadgeSize:(unsigned long long)arg1 trailingOffset:(double)arg2;

@end
