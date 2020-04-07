//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface HTSLiveMultiAudioStatusView : UIView
{
    _Bool _isAnchor;
    CDUnknownBlockType _click;
    UIImageView *_statusImageView;
    UILabel *_statusTipLabel;
}

@property(retain, nonatomic) UILabel *statusTipLabel; // @synthesize statusTipLabel=_statusTipLabel;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(copy, nonatomic) CDUnknownBlockType click; // @synthesize click=_click;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)onStatusViewClick;
- (void)onInteractiveStateChanged:(long long)arg1;
- (void)onWaitingListChanged:(id)arg1;
- (void)setupUI;
- (id)initWithAnchor:(_Bool)arg1 click:(CDUnknownBlockType)arg2;

@end
