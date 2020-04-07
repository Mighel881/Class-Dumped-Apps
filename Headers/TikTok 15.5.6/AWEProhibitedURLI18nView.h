//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEProhibitedURLViewProtocol-Protocol.h"

@class AWEAwemeReviewResultNotice, NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface AWEProhibitedURLI18nView : UIView <AWEProhibitedURLViewProtocol>
{
    NSString *text;
    NSString *linkText;
    NSString *enterFrom;
    NSString *groupID;
    UIImageView *_iconImageView;
    UILabel *_hintLabel;
    UIImageView *_arrowImageView;
    AWEAwemeReviewResultNotice *_notice;
    UITapGestureRecognizer *_recognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) AWEAwemeReviewResultNotice *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom;
@property(retain, nonatomic) NSString *linkText; // @synthesize linkText;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (void)jumpToNoticeDetail;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
