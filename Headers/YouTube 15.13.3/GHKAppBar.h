//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDCAppBar.h>

@class UIView;

@interface GHKAppBar : MDCAppBar
{
    UIView *_headerDivider;
}

@property(retain, nonatomic) UIView *headerDivider; // @synthesize headerDivider=_headerDivider;
- (void).cxx_destruct;
- (void)layoutHeaderDivider;
- (void)enableHeaderDivider;
- (id)init;

@end
