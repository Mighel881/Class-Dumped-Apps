//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC10ProtonMail6PMView.h"

@class UIButton;

@interface _TtC10ProtonMail23MessageDetailBottomView : _TtC10ProtonMail6PMView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: replyButton
    // Error parsing type: , name: replyAllButton
    // Error parsing type: , name: forwardButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)forwardClicked:(id)arg1;
- (void)replyAllClicked:(id)arg1;
- (void)replyClicked:(id)arg1;
- (void)setup;
- (id)getNibName;
@property(nonatomic) __weak UIButton *forwardButton; // @synthesize forwardButton;
@property(nonatomic) __weak UIButton *replyAllButton; // @synthesize replyAllButton;
@property(nonatomic) __weak UIButton *replyButton; // @synthesize replyButton;

@end
